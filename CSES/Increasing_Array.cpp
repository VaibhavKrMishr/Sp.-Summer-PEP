#include<iostream>
using namespace std;

void Sort(int arr[], int n){
    long long count=0;
    for (int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            count += arr[i]-arr[i+1];
            arr[i+1]=arr[i]; 
        }

    }
    cout<<count;
}
int main (){
    int n;
    cin>>n;
    int arr[n]; 
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    Sort(arr,n);

    return 0;

    
}