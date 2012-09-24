require 'helper'

module Syck
  class TestOmap < Test::Unit::TestCase
    def test_keys
      map = Syck::Omap.new
      map['foo'] = 'bar'
      assert_equal 'bar', map['foo']
    end

    def test_order
      map = Syck::Omap.new
      map['a'] = 'b'
      map['b'] = 'c'
      assert_equal [%w{a b}, %w{b c}], map.to_a
    end

    def test_square
      list = [["a", "b"], ["b", "c"]]
      map = Syck::Omap[*list.flatten]
      assert_equal list, map.to_a
      assert_equal 'b', map['a']
      assert_equal 'c', map['b']
    end

    def test_to_yaml
      map = Syck::Omap['a', 'b', 'c', 'd']
      yaml = map.to_yaml
      assert_match('!omap', yaml)
      assert_match('- a: b', yaml)
      assert_match('- c: d', yaml)
    end

    def test_round_trip
      list = [["a", "b"], ["b", "c"]]
      map = Syck::Omap[*list.flatten]
      loaded = Syck.load(Syck.dump(map))

      assert_equal map, loaded
      assert_equal list, loaded.to_a
    end

    ###
    # FIXME: Syck should also support !!omap as shorthand
    def test_load
      list = [["a", "b"], ["c", "d"]]
      map = Syck.load(<<-eoyml)
--- !omap
- a: b
- c: d
      eoyml
      assert_equal list, map.to_a
    end
  end
end
