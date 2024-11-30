// Print Even Indices - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
//Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.
#include <bits/stdc++.h>
using namespace std;
void rec(int a[],int n) {
    if(n == 0) {
        return;
    }
    if(n%2 != 0){
        cout << a[n] << " ";
    }
    rec(a,--n);
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int j = 1; j <= n; j++) {
        cin >> a[j];
    }
    rec(a,n);
    
}
