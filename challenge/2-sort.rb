#!/usr/bin/env ruby

args = ARGV.select { |a| a =~ /^-?\d+$/ }
sorted = args.map(&:to_i).sort

puts sorted
