#include<iostream>
#include<queue>
#include<limits.h>
#include<cmath>
#include<vector>
using namespace std;

// class Heap{
//     public:
//     int arr[101];
//     int size;
//     Heap(){
//         size=0;
//     }
//     void insert(int data){
//         size=size+1;
//         int index=size;
//         arr[index]=data;
//         while(index>1){
//             int Pindex=index/2;
//             if(arr[index]>arr[Pindex]){
//                 swap(arr[index],arr[Pindex]);
//                 index=Pindex;
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     int deletes(){
//         int ans=arr[1];
//         arr[1]=arr[size];
//         size--;
//         int index=1;
//         while(index<size){
//             int left=2*index;
//             int right=2*index+1;
//             int largest=index;
//             if(left<size && arr[largest]<arr[left]){
//                 largest=left;
//             }
//             if(right<size && arr[largest]<arr[right]){
//                 largest=right;
//             }
//             if(largest==index){
//                 break  ;
//             }
//             else{
//                 swap(arr[index],arr[largest]);
//                 index=largest;
//             }
//         }
//         return ans;
//     }
// };
// void Heapify(int arr[],int n,int i){
//     int index=i;
//     int leftIndex=2*i;
//     int rightIndex=2*i+1;
//     int largest=index;
//     if(leftIndex<=n && arr[largest]<arr[leftIndex]){
//         largest=leftIndex;
//     }
//     if(rightIndex<=n && arr[largest]<arr[rightIndex]){
//         largest=rightIndex;
//     }
//     if(index!=largest){
//         swap(arr[index],arr[largest]);
//         index=largest;
//         Heapify(arr,n,index);
//     }
// }

// void BuildHeap(int arr[],int n){
//     for(int i=n/2;i>0;i--){
//         Heapify(arr,n,i);
//     }
// }

// void HeapSort(int arr[],int n){
//     while(n!=1){
//         swap(arr[1],arr[n]);
//         n--;
//         Heapify(arr,n,1);
//     }
// }

// int KthSmallest(int arr[],int n,int k){
//     priority_queue<int>pq;
//     for(int i=0;i<k;i++){
//         int element=arr[i];
//         pq.push(element);
//     }
//     for(int i=k;i<n;i++){
//         int element=arr[i];
//         if(element<pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     return pq.top();
// }

// int KthGreatest(int arr[],int n,int k){
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int i=0;i<k;i++){
//         int element=arr[i];
//         pq.push(element);
//     }
//     for(int i=k;i<n;i++){
//         int element=arr[i];
//         if(element>pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     return pq.top();
// }

// class Info{
//     public:
//     int maxVal;
//     bool isHeap;
//     Info(int a,int b){
//         this->maxVal=a;
//         this->isHeap=b;
//     }
// };
// Info CheckValid(Node* root){
//     if(root==NULL){
//         Info temp;
//         temp.maxVal=INT_MIN;
//         temp.isHeap=true;
//     }
//     if(root->left==NULL && root->right==NULL){
//         Info temp;
//         temp.maxVal=root->data;
//         temp.isHeap=true;
//         return temp;
//     }
//     Info leftAns=CheckValid(root->left);
//     Info rightAns=CheckValid(root->right);
//     if(root->data>leftAns.maxVal && root->data>rightAns.maxVal
//     && leftAns.isHeap && rightAns.isHeap){
//         Info ans;
//         ans.maxValroot-.data;
//         ans.isHeap=true;
//         return ans;
//     }
//     else{
//         Info ans;
//         ans.maxVal=max(root->data,max(leftAns.maxVal,rightAns.maxVal));
//         ans.isHeap=false;
//         return ans;
//     }
// }

// void storeINOrder(Node* root, vector<int> &in){
//     if(root==NULL) return;
//     storeINOrder(root->left,in);
//     in.push_back(root->data);
//     storeINOrder(root->right,in);
// }
// void replacePostOrder(Node* root,vector<int> & in,int & index){
//     if(root==NULL) return ;
//     replacePostOrder(root->left,in,index);
//     replacePostOrder(root->right,in,index);
//     root->data=in[index];
//     index++;
// }
// void ConvertBSTintoHeap(Node* root){
//     vector<int>inorder;
//     storeINOrder(root,inorder);
//     int index=0;
//     replacePostOrder(root,inorder);
//     return root;
// }

// class Info{
//     public:
//     int data;
//     int rowIndex;
//     int colIndex;
//     Info(int a,int b,int c){
//         this->data=a;
//         this->rowIndex=b;
//         this->colIndex=c;
//     }
// };
// class compare{
//     public:
//     bool operator()(Info* a,Info* b){
//         return a->data>b->data;
//     }
// };
// void Merged(int arr[][4],int n,int k,vector<int> &ans){
//     priority_queue<Info*,vector<Info*>,compare >pq;
//     for(int row=0;row<k;row++){
//         int element=arr[row][0];
//         Info* temp=new Info(element,row,0);
//         pq.push(temp);
//     }
//     while(!pq.empty()){
//         Info* temp=pq.top();
//         pq.pop();
//         int topdata=temp->data;
//         int toprow=temp->rowIndex;
//         int topcol=temp->colIndex;
//         ans.push_back(topdata);
//         if(topcol+1<n){
//             Info* newInfo=new Info(arr[toprow][topcol+1],toprow,topcol+1);
//             pq.push(newInfo);
//         }
//     }
// }

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* random;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//         this->random=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->random=NULL;
//     }
//     ~Node(){
//         cout<<"deltion of node -"<<this->data<<endl;
//     }
// };
// class compare{
//     bool operator()(Node* a,Node* b){
//         return a->data>b->data;
//     }
// };
// Node* Merged(vector<Node*> &lists){
//     priority_queue<Node*,vector<Node*>,compare>pq;
//     for(int i=0;i<lists.size();i++){
//         Node* nodehead=lists[i];
//         if(nodehead!=NULL){
//             pq.push(nodehead);
//         }
//     }
//     Node* head=NULL;
//     Node* tail=NULL;
//     while(!pq.empty()){
//         Node* topnode=pq.top();
//         pq.pop();
//         if(head==NULL){
//             head=topnode;
//             tail=topnode;
//             if(tail->next!=NULL){
//                 pq.push(tail->next);
//             }
//         }
//         else{
//             tail->next=topnode;
//             tail=topnode;
//             if(tail->next!=NULL){
//                 pq.push(tail->next);
//             }
//         }
//     }
//     return head;
// }

// // class inf & compare
// vector<int>smallestRange(vector<vector<int>> &nums){
//     priority_queue<Info*,vector<Info*>,compare>pq;
//     int maxi=INT_MIN;
//     int mini=INT_MAX;
//     for(int i=0;i<nums.size();i++){
//         int element=nums[i][0];
//         int row=i;
//         int col=0;
//         Info* temp=new Info(element,row,col);
//         pq.push(temp);
//         maxi=max(maxi,element);
//         mini=min(mini,element);
//     }
//     int ansStart=mini;
//     int ansEnd=maxi;
//     while(!pq.empty()){
//         Info* topNode=pq.top();
//         int topData=topNode->data;
//         int topCol=topNode->colIndex;
//         int topRow=topNode->rowIndex;
//         pq.pop();
//         mini=topNode->data;
//         if((maxi-mini)<(ansEnd-ansStart)){
//             ansStart=mini;
//             ansEnd=maxi;
//         }
//         if(topCol+1<nums[topRow].size()){
//             int newElement=nums[topRow][topCol+1];
//             maxi=max(maxi,newElement);
//             Info* newInfo=new Info(newElement,topRow,topCol+1);
//             pq.push(newInfo);
//         }
//         else{
//             break;
//         }
//     }
//     vector<int>ans;
//     ans.push_back(ansStart);
//     ans.push_back(ansEnd);
//     return ans;
// }

// int MiniStones(vector<int> & piles,int k){
//     priority_queue<int>maxHeap;
//     for(int i=0;i<piles.size();i++){
//         int element=piles[i];
//         maxHeap.push(element);
//     }
//     while(k--){
//         int topElement=maxHeap.top();
//         maxHeap.pop();
//         topElement=topElement-floor(topElement/2);
//         maxHeap.push(topElement);
//     }
//     int sum=0;
//     while(!maxHeap.empty()){
//         int top=maxHeap.top();
//         sum+=top;
//         maxHeap.pop();
//     }
//     return sum;
// }

// class Info{
//     public:
//     char val;
//     int count;
//     Info(char ch,int ct){
//         this->val=ch;
//         this->count=ct;
//     }
// };
// class compare{
//     public:
//     bool operator()(Info a,Info b){
//         return a.count<b.count;
//     }
// };
// string Reorganise(string s){
//     int freq[26]={0};
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         freq[ch-'a']++;
//     }
//     priority_queue<Info,vector<Info>,compare>maxHeap;
//     for(int i=0;i<26;i++){
//         if(freq[i]>0){
//             Info temp(i+'a',freq[i]);
//             maxHeap.push(temp);
//         }
//     }
//     string ans="";
//     while(maxHeap.size()>1){
//         Info first=maxHeap.top();
//         maxHeap.pop();
//         Info second=maxHeap.top();
//         maxHeap.pop();
//         ans.push_back(first.val);
//         first.count--;
//         ans.push_back(second.val);
//         second.count--;
//         if(first.count>0){
//             maxHeap.push(first);
//         }
//         if(second.count>0){
//             maxHeap.push(second);
//         }
//     }
//     if(maxHeap.size()==1){
//         Info first=maxHeap.top();
//         maxHeap.pop();
//         ans.push_back(first.val);
//         first.count--;
//         if(first.count!=0){
//             return "";
//         }
//     }
//     return ans;
// }

// string Happy(int a,int b,int c){
//     priority_queue<Info,vector<Info>,compare>maxHeap;
//     if(a>0){
//         Info temp('a',a);
//     }
//     if(b>0){
//         Info temp('b',b);
//     }
//     if(c>0){
//         Info temp('c',c);
//     }
//     string ans="";
//     while(maxHeap.size()>1){
//         Info first=maxHeap.top();
//         maxHeap.pop();
//         Info second=maxHeap.top();
//         maxHeap.pop();
//         if(first.count>=2){
//             ans.push_back(first.val);
//             ans.push_back(first.val);
//             first.count-=2;
//         }
//         else{
//             ans.push_back(first.val);
//             first.count--;
//         }   
//         if(second.count>=2 && second.count>=first.count){
//             ans.push_back(second.val);
//             ans.push_back(second.val);
//             second.count-=2;
//         }
//         else{
//             ans.push_back(second.val);
//             second.count--;
//         }
//         if(first.count>0){
//             maxHeap.push(first);
//         }
//         if(second.count>0){
//             maxHeap.push(second);
//         }
//     }
//     if(maxHeap.size()==1){
//         Info first=maxHeap.top();
//         maxHeap.pop();
//         if(first.count>=2){
//             ans.push_back(first.val);
//             ans.push_back(first.val);
//             first.count-=2;
//         }
//         else{
//             ans.push_back(first.val);
//             first.count--;
//         }
//     }
//     return ans;
// }
int main(){
    // Heap h;
    // h.arr[0]=-1;
    // h.arr[1]=100;
    // h.arr[2]=50;
    // h.arr[3]=60;
    // h.arr[4]=40;
    // h.arr[5]=45;
    // h.size=5;
    // cout<<"print"<<endl;
    // for(int i=0;i<=h.size;i++){
    //     cout<<h.arr[i]<<" ";
    // }
    // cout<<endl;
    // h.insert(110);
    //     for(int i=0;i<=h.size;i++){
    //     cout<<h.arr[i]<<" ";
    // }
    // cout<<endl;

    // //  insert delete heapify buildheap
    // int arr[]={-1,12,15,13,11,14};
    // int n=5;
    // BuildHeap(arr,n);
    // for(int i=0;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // heapsort
    // HeapSort(arr,n);
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // priority_queue<int>pq;
    // pq.push(20);
    // pq.push(50);
    // pq.push(40);
    // pq.push(60);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    // // min heap creation
    // priority_queue<int,vector<int>,greater<int>>pq;
    // pq.push(100);
    // pq.push(20);
    // pq.push(90);
    // cout<<pq.top()<<endl;

    // // kth smallest elelment
    // int arr[]={3,5,4,6,9,8,7};
    // int k=3;
    // int n=7;
    // cout<<KthSmallest(arr,n,k);

    // // kth greatest element
    // cout<<KthGreatest(arr,n,k);

    // valid heap, CBT, parent max

    // 958 check CBT or not   not done

    // convert CBT +BST to heap  not done

    // // merge k sorted array
    // int arr[3][4]={{1,4,8,11},{2,3,6,10},{5,7,12,14}};
    // int n=4;
    // int k=3;
    // vector<int>ans;
    // Merged(arr,n,k,ans);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }

    // merge k sorted LL

    // 632 smallest range

    // // 1962 LC
    // vector<int>piles{5,4,9};
    // int k=2;
    // cout<<MiniStones(piles,k);

    // // reorganize string 767
    // string s="aab";
    // cout<<Reorganise(s);

    // // Longest happy string 1405
    // int a=1,b=1,c=7;
    // cout<<Happy(a,b,c);

    return 0;
}