#include<iostream>

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        if((a+b)%3==0 && 2*a>=b && 2*b>=a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}