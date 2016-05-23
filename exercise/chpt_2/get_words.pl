#!/usr/bin/perl 
#随机从字典文件中获取指定数目的words或者指定长度的words

use Tie::File;
use Math::Random::Secure qw(irand);

my $num_argv = $#ARGV + 1;
if ($num_argv < 2){
    print "\nUsage: name.pl input_file num_of_words len_words(opt) out_file(opt)\n";
    exit;
}

my $dict =  $ARGV[0];
my $num_words = $ARGV[1];
my $out_file = "./t.test";
my $len_words;
if($num_argv == 3){
    $len_words = $ARGV[2];
}

if($num_argv == 4){
    $out_file = $ARGV[3];
}
    


my @words;

tie @words, 'Tie::File', $dict or die; 

open (FILE, ">>$out_file") or die ;
my $i = 0;
while($num_words >  $i){
    my $rad = irand(1000);
    #print "rand=$rad, words=$words[$rad]\n";
    print FILE "$words[$rad] ";
    $i += 1;
}




untie @words;
close(FILE);





