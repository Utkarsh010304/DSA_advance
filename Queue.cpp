#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
using namespace std;
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Queue(int size){
//         this->size=size;
//         arr=new int[size];
//         front=0;
//         rear=0;
//     }
//     void push(int data){
//         if(rear==size){
//             cout<<"Q is full"<<endl;
//         }
//         else{
//             arr[rear]=data;
//             rear++;
//         }
//     }
//     void pop(){
//         if(front==rear){
//             cout<<"Q is empty"<<endl;
//         }
//         else{
//             arr[front]=-1;
//             front++;
//             if(front==rear){
//                 front=0;
//                 rear=0;
//             }
//         }
//     }
//     int getFront(){
//         if(front==rear){
//             cout<<"Q is empty"<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }
//     bool isEmpty(){
//         if(front==rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     int getSize(){
//         return rear-front;
//     }
// };

// class CirQueue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     CirQueue(int size){
//         this->size=size;
//         arr=new int[size];
//         front=-1;
//         rear=-1;
//     }
//     void push(int data){
//         if(front==0 && rear==size-1){
//             cout<<"Q is full"<<endl;
//         }<<
// if(rear=(front-1)%(size-1)){
//     cout<<"Q is full"<<endl;
// }
//         else if(front==-1){  //first element ins
//             front=rear=0;
//             arr[rear]=data;
//         }
//         else if(rear==size-1 && front!=0){  //circular ins
//             rear=0;
//             arr[rear]=data;
//         }
//         else{
//             rear++;
//             arr[rear]=data;
//         }
//     }
//     void pop(){
    //     if(front==-1){
    //         cout<<"Q is empty"<<endl;
    //     }
    //     else if(front==rear){
    //         front=-1;
    //         rear=-1;
    //     }
    //     else if(front==size-1){
    //         front=0;
    //     }
    //     else{
    //         front++;
    //     }
    // }
// };

// class Dequeue{
//     public:
//     int size;
//     int *arr;
//     int front;
//     int rear;
//     Dequeue(int size){
//         this->size=size;
//         arr=new int[size];
//         front=-1;
//         rear=-1;
//     }
//     void pushrear(int data){
//         if(front==0 && rear==size-1){
//             cout<<"Q is full"<<endl;
//             return;
//         }
//         // if(front-rear==1){
//         //     cout<<"Q is full"<<endl;
//         // }
//         else if(front==-1){  //first element ins
//             front=rear=0;
//         }
//         else if(rear==size-1 && front!=0){  //circular ins
//             rear=0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear]=data;
//     }
//     void pushfront(int data){
//         if(front==0 && rear==size-1){
//             cout<<"Q is full"<<endl;
//             return;
//         }
//         else if(front==-1){  //first element ins
//             front=rear=0;
//         }
//         else if(front==0 && rear!=size-1){  //circular ins
//             front=size-1;
//         }
//         else{
//             front--;
//         }
//         arr[front]=data;
//     }
//     void popfront(){
//         if(front==-1){
//             cout<<"Q is empty"<<endl;
//         }
//         else if(front==rear){
//             front=-1;
//             rear=-1;
//         }
//         else if(front==size-1){
//             front=0;
//         }
//         else{
//             front++;
//         }
//     }
//     void poprear(){
//         if(front==-1){
//             cout<<"Q is empty"<<endl;
//         }
//         else if(front==rear){
//             front=-1;
//             rear=-1;
//         }
//         else if(rear==0){
//             rear=size-1;
//         }
//         else{
//             rear--;
//         }
//     }
// };

// void reverse(queue<int> &q){
//     stack<int>st;
//     while(!q.empty()){
//         int temp=q.front();
//         q.pop();
//         st.push(temp);
//     }
//     while(!st.empty()){
//         int temp=st.top();
//         st.pop();
//         q.push(temp);
//     }
// }
// void revrec(queue<int> &q){
//     if(q.empty()){
//         return;
//     }
//     int temp=q.front();
//     q.pop();
//     revrec(q);
//     q.push(temp);
// }

// void reverseK(queue<int> &q,int k){
//     if(k==0){
//         return;
//     }
//     stack<int>st;
//     int count=0;
//     while(!q.empty()){
//         int temp=q.front();
//         q.pop();
//         st.push(temp);
//         count++;
//         if(count==k){
//             break;
//         }
//     }
//     while(!st.empty()){
//         int temp=st.top();
//         st.pop();
//         q.push(temp);
//     }
//     count=0;
//     while(!q.empty() && q.size()-k!=0){
//         int temp=q.front();
//         q.pop();
//         q.push(temp);
//         count++;
//         if(count==q.size()-k){
//             break;
//         }
//     }
// }

// void Interleave(queue<int> &q){
//     int n=q.size();
//     int k=n/2;
//     int count=0;
//     queue<int>q2;
//     while(!q.empty()){
//         int temp=q.front();
//         q.pop();
//         q2.push(temp);
//         count++;
//         if(count==k){
//             break;
//         }
//     }
//     while(!q2.empty() && !q.empty()){
//         int temp=q2.front();
//         q2.pop();
//         q.push(temp);
//         int temp2=q.front();
//         q.pop();
//         q.push(temp2);
//     }
//     if(n&1){
//         int val=q.front();
//         q.pop();
//         q.push(val);
//     }
// }

//  void firstNegve(int arr[],int n,int k){
//     deque<int>q;
//     for(int i=0;i<k;i++){
//         if(arr[i]<0){
//             q.push_back(i);
//         }
//     }
//     for(int i=k;i<n;i++){
//         if(q.empty()){
//             cout<<"0"<<" ";
//         }
//         else{
//             cout<<arr[q.front()]<<" ";
//         }
//         while(i-q.front()>=k && !q.empty()){
//             q.pop_front();
//         }
//         if(arr[i]<0){
//             q.push_back(i);
//         }
//     }
//     if(q.empty()){
//         cout<<"0"<<" ";
//     }
//     else{
//         cout<<arr[q.front()]<<" ";
//     }
//  }

// string NonRepeated(string &str){
//     int freq[26]={0};
//     queue<char>q;
//     string ans="";
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         freq[ch-'a']++;
//         q.push(ch);
//         while(!q.empty()){
//             if(freq[q.front()-'a']>1){
//                 q.pop();      
//             }
//             else{
//                 ans.push_back(q.front());
//                 break;
//             }
//         }
//         if(q.empty()){
//             ans.push_back('#');
//         }
//     }
//     return ans;
// }

// int GasStation(vector<int> &gas,vector<int> &cost){
//     int deficit=0;
//     int balance=0;
//     int start=0;
//     for(int i=0;i<gas.size();i++){
//         balance+=gas[i]-cost[i];
//         if(balance<0){
//             deficit+=abs(balance);
//             start=i+1;
//             balance=0;
//         }
//     }
//     if(deficit>=balance){
//         return start;
//     }
//     else{
//         return -1;
//     }
// }

// vector<int>Maximum(vector<int> &nums,int k,vector<int> &ans){
//     deque<int>q;
//     for(int i=0;i<k;i++){
//         while(!q.empty() && nums[i]>=nums[q.back()]){
//             q.pop_back();
//         }
//         q.push_back(i);
//     }
//     ans.push_back(nums[q.front()]);
//     for(int i=k;i<nums.size();i++){
//         if(!q.empty() && i-q.front()>=k){
//             q.pop_front();
//         }
//         while(!q.empty() && nums[i]>=nums[q.back()]){
//             q.pop_back();
//         }
//         q.push_back(i);
//         ans.push_back(nums[q.front()]);
//     }
//     return ans;
// }

// class MyStack{
//     public:
//     queue<int>q;
//     void push(int x){
//         q.push(x);
//         for(int i=0;i<q.size()-1;i++){
//             int front=q.front();
//             q.pop();
//             q.push(front);
//         }
//     }
//     int pop(){
//         int top=q.front();
//         q.pop();
//         return top;
//     }
//     int top(){
//         return q.front();
//     }
//     bool empty(){
//         return q.empty();
//     }
// };

// int MaxMin(vector<int> &nums,int k){
//     deque<int>q,q2;
//     int ans=0;
//     for(int i=0;i<k;i++){
//         while(!q.empty() && nums[i]>=nums[q.back()]){
//             q.pop_back();
//         }
//         while(!q2.empty() && nums[i]<=nums[q2.back()]){
//             q2.pop_back();
//         }
//         q.push_back(i);
//         q2.push_back(i);
//     }
//     ans+=nums[q.front()]+nums[q2.front()];
//     for(int i=k;i<nums.size();i++){
//         if(!q.empty() && i-q.front()>=k){
//             q.pop_front();
//         }
//         if(!q2.empty() && i-q2.front()>=k){
//             q2.pop_front();
//         }
//         while(!q.empty() && nums[i]>=nums[q.back()]){
//             q.pop_back();
//         }
//         while(!q2.empty() && nums[i]<=nums[q2.back()]){
//             q2.pop_back();
//         }
//         q.push_back(i);
//         q2.push_back(i);
//         ans+=nums[q.front()]+nums[q2.front()];
//     }
//     return ans;
// }





int main(){
    // // insertion =rear,removal=front
    // queue<int>q;
    // q.push(5);
    // q.push(18);
    // q.push(10);
    // cout<<q.size()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    // // queue using array
    // Queue q(10);
    // q.push(3);
    // q.push(4);
    // q.push(10);
    // cout<<q.getSize()<<endl;
    // q.pop();
    // cout<<q.getSize()<<endl;
    // cout<<q.getFront()<<endl;

    // circuar queue

    // // Doubly ended Queue
    // // insrtion & removal from both front & rear
    // deque<int>dq;
    // dq.push_front(10);
    // dq.push_front(20);
    // dq.push_back(30);
    // dq.push_front(40);
    // cout<<dq.size()<<endl;
    // // dq.pop_front();
    // // dq.pop_back();
    // cout<<dq.front()<<endl;
    // while(!dq.empty()){
    //     cout<<dq.front()<<" ";
    //     dq.pop_front();
    // }

    // // reverse a Queue
    // queue<int>q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.push(6);
    // q.push(7);
    // q.push(8);
    // q.push(9);
    // // reverse(q);
    // // while(!q.empty()){
    // //     cout<<q.front()<<" ";
    // //     q.pop();
    // // }
    // revrec(q);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    // // reverse first k elements of Queue
    // int k=5;
    // reverseK(q,k);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    // // Interleave first & second halves
    // Interleave(q);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    // // first -ve in every kth group
    // // sliding window
    // int arr[]={12,-1,-7,8,-15,30,16,28};
    // int size=8;
    // int k=3;
    // firstNegve(arr,size,k);

    // // first non repeated char in a string
    // string str="zarcaazrd";
    // cout<<NonRepeated(str);

    // // Circular tour / Gas station
    // vector<int>gas={1,2,3,4,5};
    // vector<int>cost={3,4,5,1,2};
    // cout<<GasStation(gas,cost);

    // // sliding window Maximum
    // vector<int>nums={1,3,-1,-3,5,3,6,7};
    // int k=3;
    // vector<int>ans;
    // Maximum(nums,k,ans);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }

    // // stacks using Queue
    // MyStack s;
    // s.push(29);
    // s.push(10);
    // cout<<s.top();

    // // sum of min & max element of all subarray of size k
    // vector<int>nums={1,3,-1,-3,5,3,6,7};
    // int k=3;
    // cout<<MaxMin(nums,k);



    


    




    





    



    return 0;
}