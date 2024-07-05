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

class Solution {
public:
bool call(TreeNode* p ,TreeNode* q){
    if(p==NULL && q==NULL)return true;
    if(p==NULL && q!=NULL)return false;
    if(p!=NULL && q==NULL)return false;
    if(p->val!=q->val)return false;
    bool x=call(p->left,q->right);
    bool y=call(p->right,q->left);
    return x&&y;
}
    bool isSymmetric(TreeNode* root) {
        return call(root->left,root->right);
    }
};