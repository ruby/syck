require 'helper'

module Syck
  class TestHash < Test::Unit::TestCase
    def setup
      @hash = { :a => 'b' }
    end

    def test_dump
      assert_equal @hash, Syck.load(Syck.dump(@hash))
    end

    def test_ref_append
      hash = Syck.load(<<-eoyml)
---
foo: &foo
  hello: world
bar:
  <<: *foo
eoyml
      assert_equal({"foo"=>{"hello"=>"world"}, "bar"=>{"hello"=>"world"}}, hash)
    end
  end
end
