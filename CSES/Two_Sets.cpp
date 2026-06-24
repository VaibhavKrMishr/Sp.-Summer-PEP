#include<iostream>
#include<vector>
using namespace std;

#define ll long long

void Two_Sets(ll n,ll t){

    vector<long long> set1, set2;

    for (long long i = n; i >= 1; i--) {
        if (t - i >= 0) {
            set1.push_back(i);
            t -= i;
        } else {
            set2.push_back(i);
        }
    }
printf("%lld\n", (long long)set1.size());
for (auto x : set1) {
    printf("%lld ", x);
}
printf("\n");

printf("%lld\n", (long long)set2.size());
for (auto x : set2) {
    printf("%lld ", x);
}
printf("\n");

}

int main(){
    ll n,sum,t;
    scanf("%lld",&n);

    sum = (n*(n+1)/2);
    t=sum/2;
    if (sum%2!=0)
    {
        printf("NO");
    }
    else{
        printf("YES\n");
        Two_Sets(n,t);
    }

    return 0;


 
}