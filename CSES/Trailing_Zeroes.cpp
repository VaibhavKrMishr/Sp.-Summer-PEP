#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll n;
    scanf("%lld",&n);
    int count=0;
    for (int i = 5; n / i >= 1; i *= 5){
        count += n / i;

}
    printf("%d",count);

    return 0;
}