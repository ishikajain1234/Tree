#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vc vector<char>
#define inp(n) int n;cin>>n;
#define loop(v) for(auto &it:v)
#define umi unordered_map<int,int>;
#define umc unordered_map<char,int>;
#define usi unordered_set<int>;
#define usc unordered_set<char>;
#define pqi priority_queue<int>;
#define pqc priority_queue<char>;
#define pqpi priority_queue<pair<int,int>>;
#define pqpc priority_queue<pair<char,int>>;
#define vtwo vector<vector<int>>;
#define sort(v) sort(v.begin(),v.end());
#define MOD 100000007;

void solve(){
    vector<vector<int>>v;
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()>0){
        int n=q.size();
        vector<int>level;
        for(int i=0; i<n; i++){
            TreeNode* a=q.front();
            q.pop();
            if(a->left!=NULL)q.push(a->left);
            if(a->right!=NULL)q.push(a->right);
            level.push_back(a->val);
        }
        v.push_back(level);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}