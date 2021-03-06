require 'helper'

module Syck
  class TestSymbol < Test::Unit::TestCase
    def test_to_yaml
      assert_equal :a, Syck.load(:a.to_yaml)
    end

    def test_dump
      assert_equal :a, Syck.load(Syck.dump(:a))
    end

    def test_stringy
      assert_equal :"1", Syck.load(Syck.dump(:"1"))
    end

    def test_load_quoted
      assert_equal :"1", Syck.load("--- :'1'\n")
    end
  end
end
