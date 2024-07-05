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
int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)return 0;
        if(root->val>=low && root->val<=high){
            sum+=root->val;
        }
        rangeSumBST(root->left,low,high);
        rangeSumBST(root->right,low,high);
        return sum;
    }
};