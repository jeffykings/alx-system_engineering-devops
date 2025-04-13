#!/usr/bin/env ruby

log = ARGV[0]

sender = log[/\[from:(.*?)\]/, 1]
reciever = log[/\[to:(.*?)\]/, 1]
flags = log[/\[flags:(.*?)\]/, 1]

puts "#{sender},#{reciever},#{flags}"
