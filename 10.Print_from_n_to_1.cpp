// Print from N to 1 - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
//Given a number N. Print all numbers from N to 1 separated by a single space.
#include <bits/stdc++.h>
using namespace std;
 
void rec(int n){
    if(n > 1) {
        cout << n << " ";
        rec(--n);
    }
    else {
        cout << n;
    }
}
int main() {
    int n;
    cin >> n;
    rec(n);
}
