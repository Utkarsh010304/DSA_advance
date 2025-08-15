#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(root->data>data){
        root->left=insertIntoBST(root->left,data);
    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

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

// void preOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// void inOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }
// void postOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

// bool Searching(Node* root,int target){
//     if(root==NULL) return false;
//     if(root->data==target) return true;
//     if(root->data>target){
//         Searching(root->left,target);
//     }
//     else{
//         Searching(root->right,target);
//     } 
// }

// int minVal(Node* root){
//     if(root==NULL)return -1;
//     while(root->left!=NULL){
//         root=root->left;
//     }
//     return root->data;
// }

// int maxVal(Node* root){
//     Node* temp=root;
//     if(temp==NULL) return -1;
//     while(temp->right!=NULL){
//         temp=temp->right;
//     }
//     return temp->data;
// }

// Node* deleteBst(Node* root,int target){
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==target){
//         if(root->left==NULL && root->right==NULL){
//             delete root;
//             return NULL;
//         }
//         if(root->left!=NULL && root->right==NULL){
//             Node* child=root->left;
//             delete root;
//             return child;
//         }
//         if(root->left==NULL && root->right!=NULL){
//             Node* child=root->right;
//             delete root;
//             return child;
//         }
//         else{
//             int inorderPre=maxVal(root->left);
//             root->data=inorderPre;
//             root->left=deleteBst(root->left,inorderPre);
//             return root;
//         }
//     }
//     else if(target>root->data){
//         root->right= deleteBst(root->right,target);
//     }
//     else{
//         root->left= deleteBst(root->left,target);
//     }
//     return root;
// }

// bool solve(Node* root,int lowerBound,int upperBound){
//     if(root==NULL) return true;
//     if(root->data>lowerBound && root->data<upperBound){
//         bool leftans=solve(root->left,lowerBound,root->data);
//         bool rightans=solve(root->right,root->data,upperBound);
//         return leftans && rightans;
//     }
//     else{
//         return false;
//     }
// }
// bool validate(Node* root){
//     long long int lowerBound=INT_MIN;
//     long long int upperBound=INT_MAX;
//     bool ans=solve(root,lowerBound,upperBound);
//     return ans;
// }

// Node* LCA(Node* root,Node* p,Node* q){
//     if(root==NULL) return NULL;
//     if(p->data<root->data && q->data<root->data){
//         return LCA(root->left,p,q);
//     }
//     else if(p->data>root->data && q->data>root->data){
//         return LCA(root->right,p,q);
//     }
//     return root;
// }

// int Kth(Node* root,int &k){
//     if(root==NULL) return -1;
//     int leftans=Kth(root->left,k);
//     if(leftans!=-1){
//         return leftans;
//     }
//     k--;
//     if(k==0) return root->data;
//     int rightans=Kth(root->right,k);
//         return rightans;
// }

// Node* BSTusingInorder(int inorder[],int s,int e){
//     if(s>e){
//         return NULL;
//     }
//     int mid=(s+e)/2;
//     int element=inorder[mid];
//     Node* root=new Node(element);
//     root->left= BSTusingInorder(inorder,s,mid-1);
//     root->right= BSTusingInorder(inorder,mid+1,e);
//     return root;
// }

// void storeInorder(Node* root,vector<int> &inorder){
//     if(root==NULL) return ;
//     storeInorder(root->left,inorder);
//     inorder.push_back(root->data);
//     storeInorder(root->right,inorder);
// }
// bool findSum(Node* root,int k){
//     vector<int>inorder;
//     storeInorder(root,inorder);
//     int s=0;int e=inorder.size()-1;
//     while(s<e){
//         int sum=inorder[s]+inorder[e];
//         if(sum==k) return true;
//         else if(sum>k) e--;
//         else s++;
//     }
//     return false;
// }

// void ConvertLL(Node* root,Node* &head){
//     if(root==NULL) return ;
//     ConvertLL(root->right,head);
//     root->right=head;
//     if(head!=NULL){
//         head->left=root;
//     }
//     head=root;
//     ConvertLL(root->left,head);
// }
// void printLL(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->right;
//     }
//     cout<<endl;
// }

// Node* ConvertBST(Node* &head,int n){
//     if(n==0 || head==NULL){
//         return NULL;
//     }
//     Node* leftSubtree=ConvertBST(head,n-1-n/2);
//     Node* root=head;
//     root->left=leftSubtree;
//     head=head->right;
//     root->right=ConvertBST(head,n/2);
//     return root;
// }

// class NodeData{
//     public:
//     int size;
//     int minVal;
//     int maxVal;
//     bool validBst;
//     NodeData(){

//     }
//     NodeData(int size,int max,int min,bool valid){
//         this->size=size;
//         minVal=min;
//         maxVal=max;
//         validBst=valid;
//     }
// };
// NodeData LargestBST(Node* root,int &ans){
//     if(root==NULL) {
//         NodeData temp(0,INT_MIN,INT_MAX,true);
//         return temp;
//     }
//     NodeData leftans=LargestBST(root->left,ans);
//     NodeData rightans=LargestBST(root->right,ans);
//     NodeData currNodeAns;
//     currNodeAns.size=leftans.size+rightans.size+1;
//     currNodeAns.maxVal=max(root->data,rightans.maxVal);
//     currNodeAns.minVal=min(root->data,leftans.minVal);
//     if(leftans.validBst && rightans.validBst && 
//         (root->data>leftans.maxVal && root->data<rightans.minVal)){
//             currNodeAns.validBst=true;
//     }
//     else{
//         currNodeAns.validBst=false;
//     }
//     if(currNodeAns.validBst){
//         ans=max(ans,currNodeAns.size);
//     }
//     return currNodeAns;
// }
int main(){
    Node* root=NULL;
    cout<<"enter the data"<<endl;
    takeInput(root);

    // cout<<"print levelorder"<<endl;
    // LevelOrderTraversal(root);
    // cout<<endl;
    // cout<<"print preorder"<<endl;
    // preOrder(root);
    // cout<<endl;
    // cout<<"print inorder"<<endl;
    // inOrder(root);
    // cout<<endl;
    // cout<<"print postorder"<<endl;
    // postOrder(root);
    // cout<<endl;

    // int target=170;
    // cout<<Searching(root,target);

    // // Minimum value
    // cout<<minVal(root);

    // // Maximum value
    // cout<<maxVal(root);

    // // delete node in BST
    // int target=100;
    // LevelOrderTraversal(root);
    // cout<<endl;
    // deleteBst(root,target);
    // LevelOrderTraversal(root);

    // // validate BST
    // cout<<validate(root);

    // LCA 

    // // Kth smallest element
    // int k=3;
    // cout<<Kth(root,k);

    // // creating bst using inorder
    // int inorder[]={1,2,3,4,5,6,7,8,9};
    // int s=0;
    // int e=8;
    // Node* rootB=BSTusingInorder(inorder,s,e);
    // LevelOrderTraversal(rootB);

    // // 2-sum
    // int k=120;
    // cout<<findSum(root,k);

    // // BST to doubly linked listed
    // int inorder[]={1,2,3,4,5,6,7,8,9};
    // int s=0;
    // int e=8;
    // Node* root=BSTusingInorder(inorder,s,e);
    // LevelOrderTraversal(root);
    // Node* head=NULL;
    // cout<<"print  LL"<<endl;
    // ConvertLL(root,head);
    // printLL(head);

    // // sorted LL to BST
    // Node* root1=NULL;
    // root1=ConvertBST(head,9);
    // cout<<"level "<<endl;
    // LevelOrderTraversal(root1);

    // // largest BST in binary tree
    // int ans=0;
    // LargestBST(root,ans);
    // cout<<ans;








    return 0;
}