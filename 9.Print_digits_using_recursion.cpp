//Print Digits using Recursion - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
//Given a number N. Print the digits of N separated by a space.
#include<bits/stdc++.h>
using namespace std;
void rec(int n){
    if (n > 0) {
        int r = n % 10;
        n /= 10;
        rec(n);
        cout << r << " ";
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n ;
        if(n == 0) cout << 0 << endl;
        else{
            rec(n);
            cout << endl;
        }
    }
