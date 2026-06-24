#include <iostream>
using namespace  std;

int main(){
    long long num;
    std::cin>>num;
    std::cout<<num<<" ";
    while(num>1){
    
    if (num%2!=0){
        num =num*3 +1;
    }
    else{
        num=num/2;
    }
    std::cout<<num<<" ";
    }
    
}