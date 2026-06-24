// You are given a positive integer n.
// Let even denote the number of even indices in the binary representation of n with value 1.
// Let odd denote the number of odd indices in the binary representation of n with value 1.
// Note that bits are indexed from right to left in the binary representation of a number.
// Return the array [even, odd].

 

// Example 1:

// Input: n = 50
// Output: [1,2]
// Explanation:
// The binary representation of 50 is 110010.
// It contains 1 on indices 1, 4, and 5.


class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>bits;
        while(n>0){
            int x = n%2;
            bits.push_back(x);
            n/=2;
        }
        int odd=0, even=0;
        // reverse(bits.begin(),bits.end());
        for(int i=0;i<bits.size();i++){
            if(bits[i]==1){
                if(i%2==0){
                    even++;
                }else{odd++;}
            }
        }
        return {even,odd};
    }
};