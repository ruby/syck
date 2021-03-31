# -*- encoding: utf-8 -*-

Gem::Specification.new do |s|
  s.name = "syck"
  s.version = "1.4.0"

  s.summary = "A gemified version of Syck from Ruby's stdlib"
  s.description = "A gemified version of Syck from Ruby's stdlib.  Syck has been removed from\nRuby's stdlib, and this gem is meant to bridge the gap for people that haven't\nupdated their YAML yet."
  s.authors = ["Hiroshi SHIBATA", "Aaron Patterson", "Mat Brown"]
  s.email = ["hsbt@ruby-lang.org", "aaron@tenderlovemaking.com"]
  s.homepage = "https://github.com/ruby/syck"
  s.license = "MIT"
  s.require_paths = ["lib"]
  s.extensions = ["ext/syck/extconf.rb"]
  s.files = Dir["[A-Z]*", "ext/**/*", "lib/**/*.rb", "test/**/*.rb"] - %w[Gemfile.lock]
  s.extra_rdoc_files = ["CHANGELOG.rdoc", "README.rdoc"]
  s.test_files = Dir["test/**/*.rb"]
  s.rdoc_options = ["--main", "README.rdoc"]
  s.required_ruby_version = Gem::Requirement.new(">= 2.0.0")
  s.required_rubygems_version = Gem::Requirement.new(">= 0.9.5")
  s.rubygems_version = "2.0.3"

  s.add_development_dependency(%q<bundler>)
  s.add_development_dependency(%q<test-unit>)
  s.add_development_dependency(%q<rake-compiler>)
end
