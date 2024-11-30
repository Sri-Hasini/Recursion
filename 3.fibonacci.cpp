//fibonacci - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O
//Given a number N. Print the value of the Nth Fibonacci number.
#include <bits/stdc++.h>
using namespace std;
int fib(int n) {
    if (n == 0 || n == 1) return n;
    return fib(n-1)+fib(n-2);
}
int main() {
    int n,i=1;
    cin >> n;
    if(n == 1) cout << 0 <<endl;
    else if (n == 2) cout << 1 << endl;
    else cout << fib(--n);
}
