/*
https://dmoj.ca/problem/coci18c2p1
*/

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <string.h>


int main()
{


    // Step 0) Prepare IO ------------------------
    freopen("0080_input.txt", "r", stdin); // REMOVE THIS LINE WHEN YOU ACTUALLY SUBMIT ONLINE

    // Step 1) Prepare the data -----------------

    // Step 1.1) design data structure

    // because there are 2 teams, max there are 2880 seconds.
    // I can create 2 arrays both size 3000, and I put init value 0 into them
    int a_score_list[3000] = {0}, b_score_list[3000] = {0}; 
    // when team a gets a score at second 5, I set a_score_list[5]=1
    // when team b gets a score at second 10, I set b_score_list[10]=1

    // Step 1.2) load data from input to my data structure

    // HOMEWORK

    // Step 2) Find Result ------------------------

    // HOMEWORK

    return 0;
}
