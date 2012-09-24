require 'helper'

module Syck
  class TestClass < Test::Unit::TestCase
    def test_dump
      assert_raises(::TypeError) do
        Syck.dump TestClass
      end
    end
  end
end
