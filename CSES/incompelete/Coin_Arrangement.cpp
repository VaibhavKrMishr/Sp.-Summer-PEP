#include<iostream>

int main(){
    int n;
    scanf("%d",&n);
    int arr[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=1){
                count++;

            }
        }
    }
    printf("%d",count);
    return 0;
}