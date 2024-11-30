//Base Converssion - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
//Given a number N. Print the binary equivalent of N.
#include <bits/stdc++.h>
using namespace std;
void rec(int n){
    if(n > 0) {
        int x = n % 2;
        n /= 2;
        rec(n);
        cout << x ;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        rec(n);
        cout << endl;
    }
}
