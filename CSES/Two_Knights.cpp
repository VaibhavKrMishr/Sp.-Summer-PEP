#include <iostream>
using namespace  std;

int main(){
    int num;
    std::cin>>num;
    for (int i = 1; i <= num; i++)
    {
    long totalWays = ((long) i  * i  * (i  * i  - 1)) / 2;

    long attacingWays = 4 * (i  - 1) * (i  - 2);

    long result = totalWays - attacingWays;
       
        cout<<result;
        cout<<"\n";
    }
    
    
}