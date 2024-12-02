//Fit Squares in Triangle - codechef(985)
//https://www.codechef.com/problems/TRISQ?tab=statement
/*
We need to find the number of squares that fit into the triangle with given base.
we need to do this via recursion
we will increase the count by (n/2) +1, and then make the n as n-2.
if we notice by drawing such a triangle, we will observe that there will be (n/2)-1 squares that can be fitted into the 1st lower part,
then by reducing triangle size, we can again perform the same operation until we meet the condition n <= 3.
*/
#include <bits/stdc++.h>
using namespace std;

void rec(int n, int &cnt) {
    if(n <= 3) {
        return;
    }
    cnt += (n/2)-1;
    n = n - 2;
    rec(n,cnt);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,cnt = 0;
        cin >> n;
        rec(n,cnt);
        cout << cnt << endl;
    }
}
