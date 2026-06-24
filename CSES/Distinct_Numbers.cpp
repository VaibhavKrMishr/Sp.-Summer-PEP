#include<iostream>
#include<set>
using namespace std;
#define ll long long

int main() {
    ll n, j;
    cin >> n;
    set<ll> seen;

    for (ll i = 0; i < n; i++) {
        cin >> j;
        seen.insert(j);
    }

    cout << seen.size() << endl;
    return 0;
}
