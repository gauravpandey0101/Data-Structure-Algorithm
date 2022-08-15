/*
    -> Power of Two
    -> Given an integer n , return true if it is a power of two. Otherwise, return false
    -> if there exists an integer x such that n == 2x
    -> (-231) <= n <= (231 - 1)
*/

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        for(int i=0;i<=30;i++)
        {
            int result = pow( 2,i );
            if( result == n )
            {
                return true;
            }
        }
         return false;        
    }
};