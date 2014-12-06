# -*- ruby -*-

require 'rubygems'
require 'hoe'

Hoe.plugins.delete :rubyforge
Hoe.plugin :gemspec # `gem install hoe-gemspec`
Hoe.plugin :git     # `gem install hoe-git`

gem 'rake-compiler', '>= 0.4.1'
require "rake/extensiontask"

Hoe.spec 'syck' do
  developer('Aaron Patterson', 'aaron@tenderlovemaking.com')
  self.readme_file   = 'README.rdoc'
  self.history_file  = 'CHANGELOG.rdoc'
  self.extra_rdoc_files  = FileList['*.rdoc']

  extra_dev_deps << ['rake-compiler', '>= 0.4.1']

  self.spec_extras = {
    :extensions            => ["ext/syck/extconf.rb"],
    :required_ruby_version => '>= 2.0.0'
  }

  Rake::ExtensionTask.new "syck", spec do |ext|
    ext.lib_dir = File.join(*['lib', ENV['FAT_DIR']].compact)
  end
end

# vim: syntax=ruby
