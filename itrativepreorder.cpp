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


vector<int>pre(TreeNode* root){
      vector<int>preorder;
      if(root==NULL)return preorder;
      stack<TreeNode*>st;
      st.push(root);
      while(st.size()>0){
        TreeNode* a=st.top();
        st.pop();
        preorder.push_back(a->val);
        if(a->right!=NULL)st.push(a->right);
        if(a->left!=NULL)st.push(a->left);
      }
      return preorder;
}


