require 'helper'

class StructWithIvar < Struct.new(:foo)
  attr_reader :bar
  def initialize *args
    super
    @bar = 'hello'
  end
end

module Syck
  class TestStruct < Test::Unit::TestCase
    def test_roundtrip
      thing = StructWithIvar.new('bar')
      struct = Syck.load(Syck.dump(thing))

      assert_equal 'hello', struct.bar
      assert_equal 'bar', struct.foo
    end

    def test_load
      obj = Syck.load(<<-eoyml)
--- !ruby/struct:StructWithIvar
foo: bar
@bar: hello
eoyml

      assert_equal 'hello', obj.bar
      assert_equal 'bar', obj.foo
    end
  end
end
