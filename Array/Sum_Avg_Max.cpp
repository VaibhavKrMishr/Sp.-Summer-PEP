#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4};
    int sum = accumulate(v.begin(),v.end(),0);
    int n = v.size();
    double avg = sum/n;
    int max = *max_element(v.begin(),v.end());
    cout<<"Total sum: "<<sum<<"/nAverage: "<<avg<<"/nMaximum: "<<max;
}
