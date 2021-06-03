int sumRootToLeaf(TreeNode* root) {
    int sum = 0;
    int currNum = 0;
    stack<pair<TreeNode*, int>> s;
        
    while(!s.empty()){
        pair<TreeNode*, int> p = s.top();
        root = p.first;
        currNum = p.second;
           
        if(root){
            currNum = (currNum << 1) | root->val;
                
            if(!root->left && !root->right){
                sum += currNum;
            }
            else{
				s.emplace(make_pair(root->right, currNum));
                s.emplace(make_pair(root->left, currNum));
            }
        }
    }
    return sum;
}