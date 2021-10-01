/*
Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of 
characters in the alien language.
Note: Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order 
of string returned by the function is correct else 0 denoting incorrect string returned.

Input: 
N = 5, K = 4
dict = {"baa","abcd","abca","cab","cad"}
Output:
1
Explanation:
Here order of characters is 'b', 'd', 'a', 'c' Note that words are sorted and in the given language "baa" comes before "abcd", 
therefore 'b' is before 'a' in output. Similarly we can find other orders.

code by iamkakashi
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>v,int i,int n,int k,string&s,vector<bool>&visit){
    visit[i]=true;
    for(int j=0;j<v[i].size();j++){
        int x=v[i][j];
        if(!visit[x]){
            dfs(v,x,n,k,s,visit);
        }
    }
    char c=i+'a';
    s=s+c;
}
string findOrder(string d[], int n, int k) {
        
    vector<vector<int>>v(k);
    for(int i=0;i<n-1;i++){
        string w1=d[i];
        string w2=d[i+1];
        for(int j=0;j<min(w1.length(),w2.length());j++){
            if(w1[j]!=w2[j]){
                v[w1[j]-'a'].push_back(w2[j]-'a');
                break;
            }
        }
    }
    string s="";
    vector<bool>visit(k,false);
    for(int i=0;i<k;i++){
        if(!visit[i]){
             dfs(v,i,n,k,s,visit);
        }
    }
    reverse(s.begin(),s.end());
    return s;
}
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
       
        string ans = findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}