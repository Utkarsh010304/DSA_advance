#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

// return root node 
Node* CreateTree(){
    cout<<"enter the value"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);
    // creeate left subtree
    cout<<"for left node "<<root->data<<endl;
    root->left=CreateTree();
    // creeate right subtree
    cout<<"for right node "<<root->data<<endl;
    root->right=CreateTree();
    return root;
}

// void PreOrederTraversal(Node* root){
//     if(root==NULL){
//         return;
//     }
//     // NLR
//     cout<<root->data<<" "; //N
//     PreOrederTraversal(root->left); //L
//     PreOrederTraversal(root->right); //R
// }
// void InOrderTraversal(Node* root){
//     if(root==NULL){
//         return;
//     }
//     // LNR
//     InOrderTraversal(root->left); //L
//     cout<<root->data<<" "; //N
//     InOrderTraversal(root->right); //R
// }
// void PostOrderTraversal(Node* root){
//     if(root==NULL){
//         return;
//     }
//     // LRN
//     PostOrderTraversal(root->left); //L
//     PostOrderTraversal(root->right); //R
//     cout<<root->data<<" "; //N
// }
void LevelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* frontnode=q.front();
        q.pop();
        if(frontnode==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<frontnode->data<<" ";
        if(frontnode->left!=NULL){
            q.push(frontnode->left);
        }
        if(frontnode->right!=NULL){
            q.push(frontnode->right);
        }
        } 
    }
}

// int maxDepth(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftHeight=maxDepth(root->left);
//     int rightHeight=maxDepth(root->right);
//     int height=max(leftHeight,rightHeight)+1;
//     return height;
// }

// int Diameter(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int option1=Diameter(root->left);
//     int option2=Diameter(root->right);
//     int option3=maxDepth(root->left)+maxDepth(root->right);
//     int diameter=max(option1,max(option2,option3));
//     return diameter;
// }

// bool balanced(Node* root){
//     if(root==NULL){
//         return true;
//     }
//     int leftheight=maxDepth(root->left);
//     int rightheight=maxDepth(root->right);
//     int diff=abs(leftheight-rightheight);
//     bool Currans=(diff<=1);
//     bool leftans=balanced(root->left);
//     bool rightans=balanced(root->right);
//     if(Currans && leftans && rightans){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// Node* lowestAncestor(Node* root,Node* p,Node* q){
//     if(root==NULL) return NULL;
//     if(root->data==p->data) return p;
//     if(root->data==q->data) return q;
//     Node* leftans=lowestAncestor(root->left,p,q);
//     Node* rightans=lowestAncestor(root->right,p,q);
//     if(leftans==NULL && rightans==NULL) return NULL;
//     else if(leftans!=NULL && rightans==NULL) return leftans;
//     else if(leftans==NULL && rightans!=NULL) return rightans;
//     else return root;
// }

// int sumtree(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftans=sumtree(root->left);
//     int rightans=sumtree(root->right);
//     root->data+=leftans=rightans;
//     return root->data;
// }

// bool kth(Node* root,int k,Node* p){
//     if(root==NULL){
//         return false;
//     }
//     if(root->data==p->data){
//         return true;
//     }
//     bool leftans=kth(root->left,k,p);
//     bool rightans=kth(root->right,k,p);
//     if(leftans || rightans){
//         k--;
//     }
//     if(k==0){
//         cout<<root->data<<endl;
//         k=-1;
//     }
//     return leftans||rightans;
// }

// bool solve(Node* root,int target,int sum){
//     if(root==NULL){
//         return false;
//     }
//     sum+=root->data;
//     if(root->left==NULL && root->right==NULL){
//         if(sum==target){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     bool leftans=solve(root,target,sum);
//     bool rightans=solve(root,target,sum);
//     return leftans||rightans;
// }
// bool pathsum(Node* root, int target){
//     int sum=0;
//     bool ans=solve(root,target,sum);
//     return ans;
// }

// void solve(Node* root,int target,int sum,vector<int>&temp,
//     vector<vector<int>>&ans){
//         if(root==NULL){
//             return;
//         }
//         if(root->left==NULL && root->right==NULL){
//             temp.push_back(root->data);
//             sum+=root->data;
//             if(sum==target){
//                 ans.push_back(temp);
//             }
//             temp.pop_back();
//             sum-=root->data;
//             return;
//         }
//         temp.push_back(root->data);
//         sum+=root->data;
//         solve(root->left,target,sum,temp,ans);
//         solve(root->right,target,sum,temp,ans);
//         temp.pop_back();
//         sum-=root->data;
//     }
// vector<vector<int>>pathsum2(Node* root,int target){
//     vector<vector<int>>ans;
//     int sum=0;
//     vector<int>temp;
//     solve(root,target,sum,temp,ans);
//     return ans;
// }

// int findPos(int arr[],int n,int element){
//     for(int i=0;i<n;i++){
//         if(arr[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
// void Mapping(int inorder[],int size,map<int,int> &valueToMap){
//     for(int i=0;i<size;i++){
//         int element=inorder[i];
//         int index=i;
//         valueToMap[element]=index; 
//     }
// }
// Node* buidTree(map<int,int> &valueToMap,int inorder[],int preorder[],int size,int &preindex,
// int inorderStart,int inorderEnd){
//     if(preindex>=size || inorderStart>inorderEnd){
//         return NULL;
//     }
//     int element=preorder[preindex++];
//     Node* root=new Node(element);
//     int pos=Mapping(inorder,size,valueToMap);
//  // int pos=findPos(inorder,size,element);
//     root->left=buidTree(valueToMap,inorder,preorder,size,preindex,
//     inorderStart,pos-1);
//     root->right=buidTree(valueToMap,inorder,preorder,size,preindex,
//     pos+1,inorderEnd);
//     return root;
// }

// Node* buildTree(int inorder[],int postorder[],int &postIndex,int size,
// int inorderStart,int inorderEnd){
//     if(postIndex<0 || inorderStart>inorderEnd){
//         return NULL;
//     }
//     int element=postorder[postIndex--];
//     Node* root=new Node(element);
//     int pos=findPos(inorder,size,element);
//     root->right=buildTree(inorder,postorder,postIndex,size,
//     pos+1,inorderEnd);
//     root->left=buildTree(inorder,postorder,postIndex,size,
//     inorderStart,pos-1);
//     return root;
// }

// void leftView(Node* root,int level,vector<int> &leftW){
//     if(root==NULL){
//         return;
//     }
//     if(level==leftW.size()){
//         leftW.push_back(root->data);
//     }
//     leftView(root->left,level+1,leftW);
//     leftView(root->right,level+1,leftW);
// }

// void rightView(Node* root,int level,vector<int> &rightW){
//     if(root==NULL){
//         return;
//     }
//     if(level==rightW.size()){
//         rightW.push_back(root->data);
//     }
//     rightView(root->right,level+1,rightW);
//     rightView(root->left,level+1,rightW);
// }

// void TopView(Node* root){
//     map<int,int>HorzToNode;
//     queue<pair<Node*,int>>q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<Node*,int>temp=q.front();
//         q.pop();
//         Node* frontNode=temp.first;
//         int horz=temp.second;
//         if(HorzToNode.find(horz)==HorzToNode.end()){
//             HorzToNode[horz]=frontNode->data;
//         }
//         if(frontNode->left!=NULL){
//             q.push(make_pair(frontNode->left,horz-1));
//         }
//         if(frontNode->right!=NULL){
//             q.push(make_pair(frontNode->right,horz+1));
//         }
//     }
//     cout<<"printing"<<endl;
//     for(auto i:HorzToNode){
//         cout<<i.second<<" ";
//     }
// }

// void BottomView(Node* root){
//     map<int,int>HorzToNode;
//     queue<pair<Node*,int>>q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<Node*,int>temp=q.front();
//         q.pop();
//         Node* frontNode=temp.first;
//         int horz=temp.second;
//         HorzToNode[horz]=frontNode->data;
//         if(frontNode->left!=NULL){
//             q.push(make_pair(frontNode->left,horz-1));
//         }
//         if(frontNode->right!=NULL){
//             q.push(make_pair(frontNode->right,horz+1));
//         }
//     }
//     cout<<"printing"<<endl;
//     for(auto i:HorzToNode){
//         cout<<i.second<<" ";
//     }
// }

// void leftBoundary(Node* root){
//     if(root==NULL){
//         return;
//     }
//     if(root->left==NULL && root->right==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     if(root->left!=NULL){
//         leftBoundary(root->left);
//     }
//     else{
//         leftBoundary(root->right);
//     }
// }
// void leafBoundary(Node* root){
//     if(root==NULL){
//         return;
//     }
//     if(root->left==NULL && root->right==NULL){
//         cout<<root->data<<" ";
//     }
//     leafBoundary(root->left);
//     leafBoundary(root->right);
// }
// void rightBoundary(Node* root){
//     if(root==NULL){
//         return;
//     }
//     if(root->left==NULL && root->right==NULL){
//         return;
//     }
//     if(root->right!=NULL){
//         rightBoundary(root->right);
//     }
//     else{
//         rightBoundary(root->left);
//     }
//     cout<<root->data<<" ";
// }
// void BoundaryTraversal(Node* root){
//     if(root==NULL)return;
//     leftBoundary(root);
//     leafBoundary(root);
//     if(root->right!=NULL){
//         rightBoundary(root->right);
//     }
//     else{
//         rightBoundary(root->left);
//     } 
// }

// int D=0;
// int height(Node* root){
//     if(root==NULL) return 0;
//     int lH=height(root->left);
//     int rH=height(root->right);
//     int currD=lH+rH;
//     D=max(D,currD);
//     return max(lH,rH) +1 ;
// }
// int Diameter(Node* root){
//     height(root);
//     return D;
// }

// bool isbalance=true;
// int height(Node* root){
//     if(root==NULL) return 0;
//     int lH=height(root->left);
//     int rH=height(root->right);
//     if(isbalance && abs(lH-rH)>1){
//         isbalance=false;
//     }
//     return max(lH,rH) +1 ;
// }
// bool isBalanced(Node* root){
//     height(root);
//     return isbalance;
// }

// bool isSame(Node* root, Node* rootB){
//     if(root==NULL && rootB==NULL) return true;
//     if(root!=NULL && rootB!=NULL){
//         return (root->data==rootB->data)
//         && isSame(root->left,rootB->left)
//         && isSame(root->right,rootB->right);
//     }
//     return false;
// }


// bool mirror(Node* rootA, Node* rootB){
//     if(rootA==NULL && rootB==NULL) return true;
//     if(rootA!=NULL && rootB!=NULL){
//         return (rootA->data==rootB->data)
//         && mirror(rootA->left,rootB->right)
//         && mirror(rootA->right,rootB->left);
//     }
//     return false;
// }
// bool symmtetric(Node* root){
//     return mirror(root->left,root->right);
// }

// vector<int>Diagonal(Node* root){
//     vector<int>ans;
//     if(root==NULL) return ans;
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){
//         Node* temp=q.front();
//         while(temp!=NULL){
//             ans.push_back(temp->data);
//             if(temp->left!=NULL){
//                 q.push(temp->left);
//             }
//             temp=temp->right;
//         }
//     }
//     return ans;
// }

// vector<vector<int>>ZigZag(Node* root){
//     vector<vector<int>>ans;
//     if(root==NULL)return ans;
//     bool LtoR=true;
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){
//         int width=q.size();
//         vector<int>oneLevel(width);
//         for(int i=0;i<width;++i){
//             Node* first=q.front();
//             q.pop();
//             int index=LtoR?i:width-i-1;
//             oneLevel[index]=first->data;
//             if(first->left!=NULL){
//                 q.push(first->left);
//             }
//                if(first->right!=NULL){
//                 q.push(first->right);
//             }
//             LtoR=!LtoR;
//             ans.push_back(oneLevel);
//         }
//     }
//     return ans;
// }

// int sumtree(Node* root){
//     if(root==NULL) return 0;
//     if(root->left==NULL && root->right==NULL){
//         int temp=root->data;
//         root->data=0;
//         return temp;
//     }
//     int Lsum=sumtree(root->left);
//     int Rsum=sumtree(root->right);
//     int temp=root->data;
//     root->data=Lsum+Rsum;
//     return root->data+temp;
// }
int main(){
    // // binary tree
    Node* root=CreateTree();
    cout<<root->data<<endl;

    // PreOrederTraversal(root);
    // cout<<endl;
    // InOrderTraversal(root);
    // cout<<endl;
    // PostOrderTraversal(root);
    // cout<<endl;
    // LevelOrderTraversal(root);

    // // depth = farthest leaf node from root
    // cout<<maxDepth(root)<<endl;

    // // Diameter = length of longest part in the tree
    // cout<<Diameter(root)<<endl;

    // // balanced binary tree
    // cout<<balanced(root)<<endl;

    // // 236 lowest common ancestor
    // lowestAncestor(root,p,q);

    // // convert into sum tree
    // sumtree(root);

    // // find kth ancestor
    // int k=2;
    // kth(root);

    // path sum 112
    // int target=27;
    // pathsum(root,target);

    // // path sum2
    // int target=22;
    // pathsum2(root,target);

    // // build tree from inorder and preorder
    // int inorder[]={40,20,50,10,60,30,70};
    // int preorder[]={10,20,40,50,30,60,70};
    // int size=7;
    // int preindex=0;
    // int inorderStart=0;
    // int inorderEnd=size-1;
    // map<int,int>valueToMap;
    // Mapping(inorder,size,valueToMap);
    // Node* root=buidTree(inorder,preorder,size,preindex,
    // inorderStart,inorderEnd);
    // cout<<"level order"<<endl;
    // LevelOrderTraversal(root);

    // // build tree from inorder and postorder
    // int inorder[]={40,20,10,50,30,60};
    // int postorder[]={40,20,50,60,30,10};
    // int size=6;
    // int postIndex=size-1;
    // int inorderStart=0;
    // int inorderEnd=size-1;
    // Node* root=buildTree(inorder,postorder,postIndex,size,
    // inorderStart,inorderEnd);
    // cout<<"level order"<<endl;
    // LevelOrderTraversal(root);
    
    // // left view
    // LevelOrderTraversal(root);
    // int level=0;
    // vector<int>leftW;
    // leftView(root,level,leftW);
    // cout<<"print "<<endl;
    // for(auto i:leftW){
    //     cout<<i<<" ";
    // }

    // // right view
    // vector<int>rightW;
    // for(auto i:leftW){
    //     cout<<i<<" ";
    // }

    // // top view
    // LevelOrderTraversal(root);
    // TopView(root);

    // // bottom view
    // LevelOrderTraversal(root);
    // BottomView(root);

    // // boundary traversal
    // BoundaryTraversal(root);

    // 543 optimized diameter

    // optimized check height bslsnced 110

    // //  same tree 100
    // Node* rootB=CreateTree();

    // symmetric tree 101

    // Diagonal traversal

    // zig zag 103

    // convert to sum tree

    // vertical order traversal






    return 0;
}