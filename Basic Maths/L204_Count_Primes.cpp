// Given an integer n, return the number of prime numbers that are strictly less than n.

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

class Solution {
public:

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }

//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
//     }
    int countPrimes(int n) {
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(isPrime(i)==true){
//                 count++;
//             }
//         }
//         return count;
        if (n <= 2) return 0;

        vector<bool>isPrime(n, true);
        int count=0;

        for(int i=2;i<n;i++){
            if(isPrime[i]){
                // |-> if isPrime[i]=true
                count++;

                if((long long)i*i<n){
                    for(int j=i*i;j<n;j+=i){
                        //Set the multples of prime as false;
                        isPrime[j]=false;
                    }
                }
            }
        }
    return count;
    }
};
