/*
    -> Reverse Integer
    -> Given a signed 32-bit integer x and return x with its digits reversed
    -> INT_MAX is the maximum value of the integer value
    -> INT_MIN is the minimum value of the integer value
*/

class Solution {
public:
    int reverse(int x)
    {
        int r=0,n1,d;
        
        while( x != 0 )
        {
            d = x % 10;
            if( r > INT_MAX/10 || r < INT_MIN/10 )
            {
                return 0;
            }
            r = (r * 10)+d;
            x = x / 10;
        }
        return r;
    }
};