#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
// class stack{
//     public:
//     int *arr;
//     int size;
//     int top;
//     stack(int size){
//         arr=new int[size];
//         this->size=size;
//         top=-1;
//     }
//     void push(int data){
//         if(size-top>1){
//             top++;
//             arr[top]=data;
//         }
//         else{
//             cout<<"stack overflow"<<endl;
//         }
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"stack underflow"<<endl;
//         }
//         else{
//             top--;
//         }
//     }
//     int getTop(){
//         if(top==-1){
//             cout<<"No element in stack"<<endl;
//         }
//         else{
//             return arr[top];
//         }
//     }
//     int getSize(){
//         return top+1;
//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// class stack{
//     public:
//     int *arr;
//     int size;
//     int top1;
//     int top2;
//     stack(int size){
//         arr=new int[size];
//         this->size=size;
//         top1=-1;
//         top2=size;
//     }
//     void push1(int data){
//         if(top2-top1==1){
//             cout<<"stack overflow"<<endl;
//         }
//         else{
//             top1++;
//             arr[top1]=data;
//         }
//     }
//     void push2(int data){
//         if(top2-top1==1){
//             cout<<"stack overflow"<<endl;
//         }
//         else{
//             top2--;
//             arr[top2]=data;
//         }
//     }
//     void pop1(){
//         if(top1==-1){
//             cout<<"stack underflow"<<endl;
//         }
//         else{
//             top1--;
//         }
//     }
//     void pop2(){
//         if(top2==size){
//             cout<<"stack underflow"<<endl;
//         }
//         else{
//             top2++;
//         }
//     }
//     void print(){
//         cout<<"top1  "<<top1<<endl;
//         cout<<"top2  "<<top2<<endl;
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// void findmiddle(stack<int> &s,int &totalSize){
//     if(s.size()==totalSize/2+1){
//         cout<<s.top()<<endl;
//         return ;
//     }
    
//     int temp=s.top();
//     s.pop();
//     findmiddle(s,totalSize);
//     s.push(temp);
// }


// void insertAtbottom(stack<int> &s,int &target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     int temp=s.top();
//     s.pop();
//     insertAtbottom(s,target);
//     s.push(temp);
// }

// void reverse(stack<int> &s){
//     if(s.empty()){
//         return;
//     }
//     int topElement=s.top();
//     s.pop();
//     reverse(s);
//     insertAtbottom(s,topElement);
// }

// bool paranthesis(string &s){
//     stack <char> st;
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         if(ch=='(' || ch=='{' || ch=='['){
//             st.push(ch);
//         }
//         else{
//             if(!st.empty()){
//                 char topCh=st.top();
//                 if(ch==')' && topCh=='('){
//                     st.pop();
//                 }
//                 else if(ch=='}' && topCh=='{'){
//                     st.pop();
//                 }
//                 else if(ch==']' && topCh=='['){
//                     st.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     if(st.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void insertSorted(stack<int> &s,int target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     if(s.top()>=target){
//         s.push(target);
//         return;
//     }
//     int topElemnet=s.top();
//     s.pop();
//     insertSorted(s,target);
//     s.push(topElemnet);
// }
// void sortStack(stack<int> &s){
//     if(s.empty()){
//         return;
//     }
//     int topElement=s.top();
//     s.pop();
//     sortStack(s);
//     insertSorted(s,topElement);
// }

// class MinStack{
//     public:
//     vector<pair<int,int>>v;
//     MinStack(){}
//     void push(int data){
//         if(v.empty()){
//             pair<int,int>p=make_pair(data,data);
//             v.push_back(p);
//         }
//         else{
//             pair<int,int>p;
//             p.first=data;
//             p.second=min(data,v.back().second);
//             v.push_back(p);
//         }
//     }
//     void pop(){
//         v.pop_back();
//     }
//     int top(){
//         return v.back().first;
//     }
//     int getmin(){
//         return v.back().second;
//     }
// };

// int longestValid(string &s){
//     stack<int> st;
//     st.push(-1);
//     int maxLen=0;
//     for(int i=0;i<s.length();i++){
//         int ch=s[i];
//         if(ch=='('){
//             st.push(i);
//         }
//         else{
//             st.pop();
//             if(st.empty()){
//                 st.push(i);
//             }
//             else{
//                 int len=i-st.top();
//                 maxLen=max(len,maxLen);
//             }
//         }
//     }
//     return maxLen;
// }

// vector<int>nextSmaller(vector<int> &v){
//     stack<int>st;
//     st.push(-1);
//     vector<int>ans(v.size());
//     for(int i=v.size()-1;i>=0;i--){
//         int curr=v[i];
//         while(st.top()>=curr){
//             st.pop();
//         }
//         ans[i]=st.top();
//         st.push(curr);
//     }
//     return ans;
// }

// vector<int>prevSmaller(vector<int> &v){
//     stack<int>st;
//     st.push(-1);
//     vector<int>ans(v.size());
//     for(int i=0;i<v.size();i++){
//         int curr=v[i];
//         while(st.top()>=curr){
//             st.pop();
//             }
//         ans[i]=st.top();
//         st.push(curr);
//     }
//     return ans;
// }

// vector<int>nextSmaller(vector<int> &v){
//     stack<int>st;
//     st.push(-1);
//     vector<int>ans(v.size());
//     for(int i=v.size()-1;i>=0;i--){
//         int curr=v[i];
//         while(st.top()!=-1 && v[st.top()]>=curr){
//             st.pop();
//         }
//         ans[i]=st.top();
//         st.push(i);
//     }
//     return ans;
// }
// vector<int>prevSmaller(vector<int> &v){
//     stack<int>st;
//     st.push(-1);
//     vector<int>ans(v.size());
//     for(int i=0;i<v.size();i++){
//         int curr=v[i];
//         while(st.top()!=-1 && v[st.top()]>=curr){
//             st.pop();
//             }
//         ans[i]=st.top();
//         st.push(i);
//     }
//     return ans;
// }
// int AreaHistogram(vector<int> &heights){
//     int size=heights.size();
//     vector<int>prev=prevSmaller(heights);
//     vector<int>next=nextSmaller(heights);
//     int maxArea=INT8_MIN;
//     for(int i=0;i<heights.size();i++){
//         int length=heights[i];
//         if(next[i]==-1){
//             next[i]=size;
//         }
//         int width=next[i]-prev[i]-1;
//         int area=length*width;
//         maxArea=max(area,maxArea);
//     }
//     return maxArea;
// }

// string removeDuplicate(string &s){
//     stack<char>st;
//     for(auto ch:s){
//         if(!st.empty() && st.top()==ch){
//             st.pop();
//         }
//         else{
//             st.push(ch);
//         }
//     }
//     string ans;
//     while(!st.empty()){
//         ans+=st.top();
//         st.pop();
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }

// int reversalcount(string s){
//     if(s.size() & 1){
//         return -1;
//     }
//     stack<char>st;
//     int ans=0;
//     for(char ch:s){
//         if(ch=='{'){
//             st.push(ch);
//         }
//         else{
//             if(!st.empty() && st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 st.push(ch);
//             }
//         }
//     }
//     while(st.size()>=2){
//         char a=st.top();
//         st.pop();
//         char b=st.top();
//         st.pop();
//         if(a==b){
//             ans+=1;
//         }
//         else{
//             ans+=2;
//         }
//     }
//     return ans;
// }

// int celebrity(vector<vector<int>> &M,int n){
//     stack<int>st;
//     for(int i=0;i<n;i++){
//         st.push(i);
//     }
//     while(st.size()!=1){
//         int a=st.top();
//         st.pop();
//         int b=st.top();
//         st.pop();
//         if(M[a][b]){
//             st.push(b);
//         }
//         else{
//             st.push(a);
//         }
//     }
//     int mayBeCeleb=st.top();
//     for(int i=0;i<n;i++){
//         if(M[mayBeCeleb][i]!=0){
//             return -1;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(M[i][mayBeCeleb]==0 && i!=mayBeCeleb){
//             return-1;
//         }
//     }
//     return mayBeCeleb;
// }


// class Nstack{
//     int *a,*top,*next;
//     int n;
//     int size;
//     int freeSpot;
//     public:
//     Nstack(int _n,int _s):n(_n),size(_s){
//         freeSpot=0;
//         a=new int[size];
//         top=new int[n];
//         next=new int[size];
//         for(int i=0;i<n;i++){
//             top[i]=-1;
//         }
//         for(int i=0;i<size;i++){
//             next[i]=i+1;
//         }
//         next[size-1]=0;
//     }
//     bool push(int data,int st){
//         if(freeSpot==-1){
//             return false;
//         }
//         int index=freeSpot;
//         freeSpot=next[index];
//         a[index]=data;
//         next[index]=top[st-1];
//         top[st-1]=index;
//         return true;
//     }
//     int pop(int st){
//         if(top[st-1]==-1){
//             return -1;
//         }
//         int index=top[st-1];
//         top[st-1]=next[index];
//         int popElement=a[index];
//         next[index]=freeSpot;
//         freeSpot=index;
//         return popElement;
//     }
//     ~Nstack(){
//         delete[]a;
//         delete[]top;
//         delete[]next;
//     }
// };

// int stockSpan(vector<int> &prices){
//     int span=1;
//     stack<pair<int,int>>st;
//     int i=0;
//     while(!st.empty() && st.top().first<=prices[i]){
//         span+=st.top().second;
//         st.pop();
//         i++;
//     }
//     st.push({prices[i],span});
//     return span;
// }

// class car{
//     public:
//     int pos,speed;
//     car(int p,int s):pos(p),speed(s){};
// };
// static bool mycomp(car&a,car&b){
//     return a.pos<b.pos;
// }
// int carFleet(vector<int> &pos,vector<int> &speed,int target){
//     vector<car>cars;
//     for(int i=0;i<pos.size();i++){
//         car Car(pos[i],speed[i]);
//         cars.push_back(Car);
//     }
//     sort(cars.begin(),cars.end(),mycomp);
//     stack<float>st;
//     for(auto var:cars){
//         float time=(target-var.pos)/((float)var.speed);
//         while(!st.empty() && time>=st.top()){
//             st.pop();
//         }
//         st.push(time);
//     }
//     return st.size();
// }

// void carFleetII(vector<vector<int>> &cars){
//     vector<double>ans(cars.size(),-1);
//     stack<int>st;
//     for(int i=cars.size()-1;i>=0;--i){
//         while(!st.empty() && cars[st.top()][1]>=cars[i][1]){
//             st.pop();
//         }
//         while(!st.empty()){
//             double coltime=(double)(cars[st.top()][0]-cars[i][0])/(cars[i][1]-cars[st.top()][1]);
//             if(ans[st.top()]==-1 || coltime<=ans[st.top()]){
//                 ans[i]=coltime;
//                 break;
//             }
//             st.pop();
//         }
//         st.push(i);
//     }
//     for(auto val:ans){
//         cout<<val<<" ";
//     }
// }
int main(){
    // // creation
    // stack<int>st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.pop();
    // cout<<"check element on top "<<st.top()<<endl;
    // cout<<"size of stack "<<st.size()<<endl;
    // if(st.empty())
    // cout<<"stack is empty"<<endl;
    // else
    // cout<<"stack is not empty"<<endl;

    // // print
    // stack<int>st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // // Inbuilt stack
    // stack s(10);
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // while(!s.isEmpty()){
    //     cout<<s.getTop()<<" ";
    //     s.pop();
    // }
    // cout<<s.getSize()<<endl;

    // // 2 stack in an array
    // stack s(10);
    // s.push1(10);
    // s.push1(20);
    // s.push2(30);
    // s.print();

    // // reverse a string using stack
    // string str="Ankita";
    // stack<char> s;
    // for(int i=0;i<str.size();i++){
    //     s.push(str[i]);
    // }
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }

    // // find middle element
    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // int totalSize=s.size();
    // if(s.size()==0){
    //     cout<<"stack is empty"<<endl;
    // }
    // findmiddle(s,totalSize);

    // // insert at bottom
    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // int target=s.top();
    // s.pop();
    // insertAtbottom(s,target);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }

    // // reverse a stack
    // reverse(s);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }

    // // valid paranthesis
    // string s="(){[]}";
    // cout<<paranthesis(s);

    // // sort a stack
    // stack<int>s;
    // s.push(7);
    // s.push(11);
    // s.push(3);
    // s.push(5);
    // s.push(9);
    // cout<<endl;
    // sortStack(s);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }

    // min stack

    // // Longest valid paranthesis
    // string s=")()()";
    // cout<<longestValid(s);

    // // next smaller element
    // vector<int>v{2,1,4,3};
    // vector<int>ans=nextSmaller(v);
    // for(auto i:ans){
    //     cout<<i<<","<<" ";
    // }

    // // prev smaller element
    // vector<int>ans=prevSmaller(v);
    // for(auto i:ans){
    //     cout<<i<<","<<" ";
    // }

    // // largest rectangular area in a histogram
    // vector<int>heights{2,1,5,6,2,3};
    // cout<<AreaHistogram(heights);

    // // remove all adjaccent duplicate strings
    // string s="abbaca";
    // string ans=removeDuplicate(s);
    // cout<<ans;

    // // min bracket reversal
    // string s="}{{}}{{{";
    // cout<<reversalcount(s);

    // // celebrity problem
    // vector<vector<int>>M{{0,1,0},{0,0,0},{0,1,0}};
    // int n=3;
    // cout<<celebrity(M,n);

    // // N stacks in an array
    // Nstack s(3,6);
    // cout<<s.push(10,1)<<endl;
    // cout<<s.push(14,2)<<endl;
    // cout<<s.push(12,1)<<endl;
    // cout<<s.push(17,3)<<endl;
    // cout<<s.pop(1)<<endl;
    // cout<<s.pop(2)<<endl;
    // cout<<s.pop(3)<<endl;
 
    // // online stack span   wrong code
    // vector<int>prices{100,80,60,70,60,75,85};
    // cout<<stockSpan(prices);

    // // car fleet
    // vector<int>pos{10,8,0,5,3};
    // vector<int>speed{2,4,1,1,3};
    // int target=12;
    // cout<<carFleet(pos,speed,target);

    // // car fleet II
    // vector<vector<int>>cars{{3,4},{5,4},{6,3},{9,1}};
    // carFleetII(cars);







 


  



   

    return 0;
}