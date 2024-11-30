//example of recursion --> printing subsequence
#include <bits/stdc++.h>
using namespace std;
void subsequence(int a[],int n, vector<int> v,int i){
    if (i == n) {
        for(auto z:v){
            cout << z << " ";
        }
        cout << endl;
        return;
    }
    //pick
    v.push_back(a[i]);
    subsequence(a,n,v,i+1);
    v.pop_back();
    //donot pick
    subsequence(a,n,v,i+1);
    
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector <int> v;
    subsequence(a,n,v,0);
}
