/*
    -> Subtract the Product and Sum of Digits of an Integer
    -> Take Two variables int type to store the result of Product and Sum
*/

class Solution {
public:
    int subtractProductAndSum(int n) 
    {
      int p = 1, s = 0, d;
      while(n != 0)
      {
        d = n % 10;
        p = p * d;
        s = s + d;
        n = n / 10;
      }        
      int result = p - s;
      return result;
    }
};