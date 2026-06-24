// Given an integer x, return true if x is a , and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
class Solution {
public:
    bool isPalindrome(int x) {
       long long rev=0,y=x;
       if(x<0) return false;
       while(x!=0)
       {
        rev*=10;
        rev+=(x%10);
        x/=10;
       } 
       if(y==rev) return 1;
       else return 0;
    }
};