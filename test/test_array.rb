require 'helper'

module Syck
  class TestArray < Test::Unit::TestCase
    def setup
      @list = [{ :a => 'b' }, 'foo']
    end

    def test_dump
      assert_equal @list, Syck.load(Syck.dump(@list))
    end
  end
end
