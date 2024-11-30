//SUMMATION - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
//Given a number N and an array A of N numbers. Print the summation of the array elements.
#include<bits/stdc++.h>
using namespace std;
long long sum_array(long long a[], int n) {
    if(n == 0) return a[0];
    return a[n] + sum_array(a,--n);
}
int main() {
    int n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<<sum_array(a,n-1);
}
