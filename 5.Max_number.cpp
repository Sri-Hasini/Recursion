// Max number - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
//Given a number N and an array A of N numbers. Print the maximum value in this array.
#include<bits/stdc++.h>
using namespace std;
int maxi(int a[],int n,int z){
    if(n == 0)return z;
    else {
        if(z < a[n-1])
        z = a[n-1];
        return maxi(a,--n,z);
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << maxi(a,n,INT_MIN);
}
