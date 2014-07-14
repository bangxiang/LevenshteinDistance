# Levenshtein distance calulation  #
This is a C++ implementation of Levenshtein distance, which is measuring the difference between sequences.

Refer http://en.wikipedia.org/wiki/Levenshtein_distance for more details.

## How to use ##

    git clone https://github.com/bangxiang/LevenshteinDistance.git
    cd LevenshteinDistance
    make
    ./TestLevenshteinDistance.exe


Example output  

    $ ./TestLevenshteinDistance.exe 
    dist("", "") : 0
    dist("", "a") : 1
    dist("b", "") : 1
    dist("abc", "def") : 3
    dist("abc", "daef") : 3
    dist("aba", "bab") : 2
    dist("a", "a0") : 1
    dist("a_vld", "b_valid") : 3
    dist("a_sop", "b_eop") : 2
    dist("a_nxt", "b_next") : 2
