/*
    -> Number of 1 Bits Program
    -> Write a function that takes an unsigned integer and returns the number of '1' bits
    -> The input must be a binary string of length 32
*/

class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int count = 0 ;
        while( n != 0)
        {
            if( n&1 )
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};