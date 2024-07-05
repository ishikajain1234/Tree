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
 bool call(TreeNode* root,TreeNode*subroot){
    if(root==NULL && subroot==NULL)return true;
    if(root==NULL && subroot!=NULL)return false;
    if(root!=NULL && subroot==NULL)return false;
    if(root->val!=subroot->val)return false;
     bool x=call(root->left,subroot->left);
    bool y=call(root->right,subroot->right);
    return x&&y;
}

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
         if (root == NULL) return false;
        if (call(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};