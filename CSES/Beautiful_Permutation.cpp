#include<iostream>
using namespace std;

void Beautiful_Permutaion(int n){
    if (n==2 || n==3 ){
        printf("NO SOLUTION");
    }
    else{
    for (int i=2;i<=n;i=i+2){
        printf("%d ",i);

    }
        for (int i=1;i<=n;i=i+2){
        printf("%d ",i);

    }}
}

int main(){
    int n;
    scanf("%d",&n);
    Beautiful_Permutaion(n);
}