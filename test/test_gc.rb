require_relative "helper"

# Regression test for ruby/syck#50 - heap-use-after-free in syck_node_mark
# when GC runs between syck_hdlr_add_node freeing a SyckNode and the Ruby
# Data wrapper that pointed at it being collected.
#
# GC.stress forces a full GC on every allocation, so if the fix regresses
# this test will segfault (or fire under ASAN/valgrind).
class TestGC < Test::Unit::TestCase
  def test_load_under_gc_stress
    yaml = ({}.tap { |h| 50.times { |i| h["k#{i}"] = "v" * 64 } }).to_yaml

    GC.stress = true
    begin
      3.times { Syck.load(yaml) }
    ensure
      GC.stress = false
    end
  end

  def test_load_many_documents_under_gc_stress
    docs = Array.new(5) do |i|
      ({}.tap { |h| 30.times { |k| h["k_#{i}_#{k}"] = "v_#{i}_#{k}" } }).to_yaml
    end

    GC.stress = true
    begin
      docs.each { |d| Syck.load(d) }
    ensure
      GC.stress = false
    end
  end
end
