require 'helper'

module Syck
  class TestException < Test::Unit::TestCase
    class Wups < Exception
      attr_reader :foo, :bar
      def initialize *args
        super
        @foo = 1
        @bar = 2
      end
    end

    def setup
      @wups = Wups.new('test_message')
    end

    def test_to_yaml
      w = Syck.load(Syck.dump(@wups))
      assert_equal @wups, w
      assert_equal 1, w.foo
      assert_equal 2, w.bar
    end

    def test_dump
      w = Syck.load(Syck.dump(@wups))
      assert_equal @wups, w
      assert_equal 1, w.foo
      assert_equal 2, w.bar
    end

    def test_to_yaml_properties
      class << @wups
        def to_yaml_properties
          [:@foo]
        end
      end

      w = Syck.load(Syck.dump(@wups))
      assert_equal @wups, w
      assert_equal 1, w.foo
      assert_nil w.bar
    end
  end
end
