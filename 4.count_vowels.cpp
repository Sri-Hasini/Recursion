//Count Vowels - codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
//Given a string S. Print number of vowels in the string.
#include<bits/stdc++.h>
using namespace std;
int isVowel(char c) {
    char h = tolower(c);
    if(h == 'a' || h == 'e' || h == 'i' || h == 'o' || h == 'u') return 1;
    else return 0;
}
int vowelCount(string s, int n, int cnt){
    if(n < 0) return cnt;
    if(isVowel(s[n])){ 
        ++cnt;
    }
    return vowelCount(s,--n,cnt);
}
int main() {
    string s;
    int n;
    getline(cin, s);
    n = s.size();
    n -= 1;
    int ans = vowelCount(s,n,0);
    cout << ans;
}
