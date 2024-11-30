//Factorial - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
//Given a number N. Print factorial of N.
#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n) {
    if (n == 1) return 1;
    return n * factorial(n-1);
}
int main() {
    long long n;
    cin >> n;
    long long x = factorial(n);
    cout << x;
}
