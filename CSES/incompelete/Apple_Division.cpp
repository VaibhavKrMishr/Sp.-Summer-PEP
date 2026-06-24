#include<iostream>
#define ll long long

int main(){

    ll n,count=0;
    scanf("%lld",&n);
    ll arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        count+=arr[i];
    }
    if(count%2==0){
        printf("0");
    }
    else{
        printf("1");
    }

    return 0;
}