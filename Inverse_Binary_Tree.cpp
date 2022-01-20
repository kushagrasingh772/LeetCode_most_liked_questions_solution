  // (BFS) or using queue, c++
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode *> kyu;
        kyu.push(root);
        while(kyu.size() != 0){
            TreeNode *top = kyu.front();
            kyu.pop();
            if(top->left) kyu.push(top->left);
            if(top->right) kyu.push(top->right);
            
            TreeNode *temp = top->left;
            top->left = top->right;
            top->right = temp;
        }
        return root;
    }

// recursion
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        TreeNode *left = root->left, *right = root->right;
        root->left = invertTree(right);
        root->right = invertTree(left);
        return root;
    }
 
//Stack
     //C++
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        stack<TreeNode *> st;
        st.push(root);
        
        while(st.size() != 0){
            TreeNode *top = st.top();
            st.pop();
            
            if(top->left) st.push(top->left);
            if(top->right) st.push(top->right);
            
            swap(top->left, top->right);
        }
        return root;
    }
