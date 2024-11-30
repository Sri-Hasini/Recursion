//Print from 1 to N - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
//Given a number N. Print numbers from 1 to N in separate lines.
#include <bits/stdc++.h>
using namespace std;
 
void rec(int n,int i){
    if(i <= n) {
        cout << i << endl;
        rec(n,++i);
    }
}
int main() {
    int n;
    cin >> n;
    rec(n,1);
}
