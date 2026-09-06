class Solution {
public:
 vector<vector<int>>ans;
 void check(TreeNode* r,int t,vector<int>v)
 {   
     if(!r)
      return;
     if(t==0 && !r->left && !r->right)
     { ans.push_back(v);
      return;
      }
      if(r->left)
     { v.push_back(r->left->val);
     check(r->left,t-(r->left->val),v);
     v.pop_back();
     }
     if(r->right)
     { v.push_back(r->right->val);
     check(r->right,t-(r->right->val),v);
     v.pop_back();
     }
 }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root)
        return {};
        vector<int>v;
        v.push_back(root->val);
        check(root,targetSum-root->val,v);
        return ans;
    }
};