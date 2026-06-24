#include <iostream>
#include <string>
using namespace std;

void repetitions(string n){
    int ans =1,count=0;
    char c ='A';
    for (char d:n){
        if (d==c){
            count++;
            ans=max(ans,count);
        }
        else{
            c=d;
            count =1;
        }
    }
    cout<<ans;

}

int main (){

    std:: string n;
    cin>>n;
    repetitions(n);
    return 0;
}

