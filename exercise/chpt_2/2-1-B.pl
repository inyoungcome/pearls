#!/usr/bin/env perl

@stack = ();

@str = ('a','b','c','d','e','f','g','h','i','j');


my $tmp = pop @str;
push @stack, $tmp;
push @stack, pop @str;
print "@stack";
