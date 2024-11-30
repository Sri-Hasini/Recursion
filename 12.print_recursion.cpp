// Print Recursion - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
//Given a number N
. Print "I love Recursion" N
 times.

#include <bits/stdc++.h>
using namespace std;
 
void rec(int n){
    if(n>0) {
        cout << "I love Recursion\n";
        rec(--n);
    }
}
int main() {
    int n;
    cin >> n;
    rec(n);
}
