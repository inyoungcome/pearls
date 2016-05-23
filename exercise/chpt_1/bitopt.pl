#!/usr/bin/env perl
#
use strict;
use Config;
#use integer;

#$a = 1<<63;
#$b = 2**63;

#my $x;
#print defined($x);
#print "a=$a, b=$b";
#print 1<<63;

#if($a == $b){
##    print $a;
#}
#print (1 << 63) ;

#print $Config{ivsize};


my $c = 'A MAN A ';

#print (unpack('H2'x 8 , $c));
#
#print (pack('H2' , '31' ));
my ($i,$j) =  (unpack('n' , 12));
print $i;

#
#print (unpack('h', 'A'));
#print $a
#print (unpack('H2' x 10, '0123456789'));
