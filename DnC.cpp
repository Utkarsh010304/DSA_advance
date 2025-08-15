#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;

// void merge(int *arr,int s,int e){
//     int mid=s+(e-s)/2;
//     int l1=mid-s+1;
//     int l2=e-mid;
//     int *left=new int [l1];
//     int *right=new int [l2];
//     int k=s;
//     for(int i=0;i<l1;i++){
//         left[i]=arr[k];
//         k++;
//     }
//     k=mid+1;
//     for(int i=0;i<l2;i++){
//         right[i]=arr[k];
//         k++;
//     }
//     int leftIndex=0;
//     int rightIndex=0;
//     int mainArrayIndex=s;
//     while(leftIndex<l1 && rightIndex<l2){
//         if(left[leftIndex]<right[rightIndex]){
//             arr[mainArrayIndex++]=left[leftIndex++];
//         }
//         else{
//             arr[mainArrayIndex++]=right[rightIndex++];
//         }
//     }
//     while(leftIndex<l1){
//         arr[mainArrayIndex++]=left[leftIndex++];
//     }
//     while(rightIndex<l2){
//         arr[mainArrayIndex++]=right[rightIndex++];
//     }
// }
// void mergeSort(int *arr,int s,int e){
//     if(s>=e) 
//     return ;
//     int mid=s+(e-s)/2;
//     mergeSort(arr,s,mid); //left part
//     mergeSort(arr,mid+1,e); //right part
//     merge(arr,s,e);
// }

// int partition(int *arr,int s, int e){
//     int pivotIndex=s;
//     int pivotElement=arr[s];
//     int count=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivotElement){
//             count++;
//         }
//     }
//     int rightIndex=s+count;
//     swap(arr[pivotIndex],arr[rightIndex]);
//     pivotIndex=rightIndex;
//     int i=s;
//     int j=e;
//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<pivotElement){
//             i++;
//         }
//         while(arr[j]>pivotElement){
//             j--;
//         }
//         if(arr[pivotIndex],arr[rightIndex]){
//             swap(arr[i],arr[j]);
//         }
//     }
//     return pivotIndex;
// }
// void quicksort(int *arr,int s, int e){
//     if(s>=e)
//     return ;
//     int p=partition(arr,s,e);
//     quicksort(arr,s,p-1);  //left
//     quicksort(arr,p+1,e);  //right
// }

// void permutation(string &str,int i){
//     if(i>=str.length()){
//         cout<<str<<" ";
//         return;
//     }
//     for(int j=i;j<str.length();j++){
//         swap(str[i],str[j]);
//         permutation(str,i+1);
//         swap(str[i],str[j]); //backtracking
//     }
// }

// int dx[]={1,0,0,-1};
// int dy[]={0,-1,1,0};
// char direction[]={'D','L','R','U'};
// bool issafe(int i,int j,int row,int col,int maze[][3],
//     vector<vector<bool> >&visited){
//         if((i>=0 && i<row) && (j>=0 && j<=col) &&
//         (maze[i][j]==1) && (visited[i][j]==false)){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// void solvemaze(int maze[3][3],int row,int col,int i,int j,
// vector<vector<bool> >&visited,vector<string>&path,string output){
//     if(i==row-1 && j==col-1){
//         path.push_back(output);
//     }
//     for(int k=0;k<4;k++){
//         int newx=i+dx[k];
//         int newy=j+dy[k];
//         char dir=direction[k];
//         if(issafe(newx,newy,row,col,maze,visited)){
//         visited[newx][newy]=true;
//         solvemaze(maze,row,col,newx,newy,visited,path,output+ dir);
//         visited[newx][newy]=false;
//         }
//     }
//     // // down
//     // if(issafe(i+1,j,row,col,maze,visited)){
//     //     visited[i+1][j]=true;
//     //     solvemaze(maze,row,col,i+1,j,visited,path,output+ 'D');
//     //     visited[i+1][j]=false;
//     // }
//     // // left
//     // if(issafe(i,j-1,row,col,maze,visited)){
//     //     visited[i][j-1]=true;
//     //     solvemaze(maze,row,col,i,j-1,visited,path,output+ 'L');
//     //     visited[i][j-1]=false;
//     // }
//     // // right
//     // if(issafe(i,j+1,row,col,maze,visited)){
//     //     visited[i][j+1]=true;
//     //     solvemaze(maze,row,col,i,j+1,visited,path,output+ 'R');
//     //     visited[i][j+1]=false;
//     // }
//     // // up
//     // if(issafe(i-1,j,row,col,maze,visited)){
//     //     visited[i-1][j]=true;
//     //     solvemaze(maze,row,col,i-1,j,visited,path,output+ 'U');
//     //     visited[i-1][j]=false;
//     // }
// }

// unordered_map<int,bool>rowCheck;
// unordered_map<int,bool>upperleftdiagonal;
// unordered_map<int,bool>bottomleftdiagonal;
// void printsolution(vector<vector<char>> &board,int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<endl;
// }
// bool issafe(int row,int col, vector<vector<char>> &board,int n){
//     if(rowCheck[row]==true){
//         return false;
//     }
//     if(upperleftdiagonal[n-1+col-row]==true){
//         return false;
//     }
//     if(bottomleftdiagonal[row+col]==true){
//         return false;
//     }
//     return true;

//     // int i=row;
//     // int j=col;
//     // while(j>=0){  //left row check
//     //     if(board[i][j]=='Q'){
//     //         return false;
//     //     }
//     //     j--;
//     // } 
//     // i=row;
//     // j=col;
//     // while(i>=0 && j>=0){  //left upper diagonal
//     //     if(board[i][j]=='Q'){
//     //         return false;
//     //     }
//     //     i--;
//     //     j--;
//     // }
//     // i=row;
//     // j=col;
//     // while(i<n && j<n){ //left bottom diagonal
//     //     if(board[i][j]=='Q'){
//     //         return false;
//     //     }
//     //     i++;
//     //     j--;
//     // }
//     // return true;
// }
// void solve(vector<vector<char>> &board,int col,int n){
//     if(col>=n){
//         printsolution(board,n);
//         return ;
//     }
//     for(int row=0;row<n;row++){
//         if(issafe(row,col,board,n)){
//             // board[row][col]='Q';
//             rowCheck[row]=true;
//             upperleftdiagonal[n-1+col-row]=true;
//             bottomleftdiagonal[row+col]=true;
//             // solve(board,col+1,n);
//             // board[row][col]='-';
//             rowCheck[row]=false;
//             upperleftdiagonal[n-1+col-row]=false;
//             bottomleftdiagonal[row+col]=false;
//         }
//     }
// }

// void parenthesis(int open,int close,vector<string> &ans,string output){
//     if(open==0 && close==0){
//         ans.push_back(output);
//         return;
//     }
//     if(open>0){
//         output.push_back('{');
//         parenthesis(open-1,close,ans,output);
//         output.pop_back();
//     }
//     if(close > open){
//         output.push_back('}');
//         parenthesis(open,close-1,ans,output);
//         output.pop_back();
//     }
// }

// void letters(vector<string>&ans,int index,string output,
//     string n,vector<string> &v){
//         if(index>=n.length()){
//             ans.push_back(output);
//             return;
//         }
//         int digit=n[index]-'0';
//         string value=v[digit];
//         for(int i=0;i<value.length();i++){
//             char ch=value[i];
//             output.push_back(ch);
//             letters(ans,index+1,output,n,v);
//             output.pop_back();
//         }
// }

// int inversion(vector<int>arr){
// int count=0;
// for(int i=0;i<arr.size();i++){
//     for(int j=i+1;j<arr.size();j++){
//         count=arr[i]>arr[j]?count+1:count;
//     }
// }
// return count;
// }

// int merged(vector<int>&arr,vector<int>&temp,int s,int e,int mid){
//     int i=s,j=mid+1,k=s;
//     int c=0;
//     while(i<=mid && j<=e){
//         if(arr[i]<=arr[j]){
//             temp[k++]=arr[i++];
//         }
//         else{
//             temp[k++]=arr[j++];
//             c+=mid-i+1;
//         }
//     }
//     while(i<=mid){
//         temp[k++]=arr[i++];
//     }
//     while(j<=e){
//         temp[k++]=arr[j++];
//     }
//     while(s<=e){
//         arr[s]=temp[s];
//         ++s;
//     }
//     return c;
// }
// int mergesort(vector<int>&arr,vector<int>&temp,int s,int e){
//     if(s>=e)return 0;
//     int mid=s+(e-s)/2;
//     int c=0;
//     c+=mergesort(arr,temp,s,mid);
//     c+=mergesort(arr,temp,mid+1,e);
//     c+=merged(arr,temp,s,e,mid);
//     return c;
// }
// int inversion(vector<int>arr){
//     int c=0;
//     vector<int>temp(arr.size(),0);
//     c=mergesort(arr,temp,0,arr.size()-1);
//     return c;
// }

// void merger(vector<int>&nums,int s,int e,int mid){
//     int total_len=e-s+1;
//     int gap=(total_len/2)+(total_len%2);
//     while(gap>0){
//         int i=s;
//         int j=s+gap;
//         while(j<=e){
//             if(nums[i]>nums[j]){
//                 swap(nums[i],nums[j]);
//             }
//             i++,j++;
//         }
//         gap=gap<=1?0:(gap/2)+(gap%2);
//     }
// }
// void inplacemerge(vector<int>&nums,int s,int e){
//     if(s>=e)return;
//     int mid=s+(e-s)/2;
//     inplacemerge(nums,s,mid);
//     inplacemerge(nums,mid+1,e);
//     merger(nums,s,e,mid);
// }

// int subsum(vector<int>&v,int s,int e){
//     if(s==e)
//     return v[s];
//     int maxleftsum=INT8_MIN , maxrightsum=INT8_MIN;
//     int mid=s+((e-s)>>1);
//     int maxleftbordersum=subsum(v,s,mid);
//     int maxrightbordersum=subsum(v,mid+1,e);
//     // cross bordr sum
//     int leftsum=0 , rightsum=0;
//     for(int i=mid;i>=s;i--){
//         leftsum+=v[i];
//         if(leftsum>maxleftsum) 
//         maxleftsum=leftsum;
//     }
//         for(int i=mid+1;i<=e;i++){
//         rightsum+=v[i];
//         if(rightsum>maxrightsum) 
//         maxrightsum=rightsum;
//     }
//     int crossbordersum=maxleftsum+maxrightsum;
//     return max(crossbordersum,max(maxleftsum,maxrightsum));
// }

// void quicksortinplace(int arr[],int s,int e){
//     if(s==e) return;
//     int pivot=e;
//     int i=s-1;
//     int j=s;
//     while(j<pivot){
//         if(arr[j]<arr[pivot]){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//         j++;
//     }
//     i++;
//     swap(arr[i],arr[pivot]);
//     quicksortinplace(arr,s,i-1);
//     quicksortinplace(arr,i+1,e);
// }

// void combination(vector<int> &a,int target,
//     vector<vector<int>>&ans,vector<int> &c,int index){
//         if(target==0){
//             ans.push_back(c);
//             return ;
//         }
//         if(target<0) return ;
//         for(int i=index;i<a.size();i++){
//             c.push_back(a[i]);
//             combination(a,target-a[i],ans,c,i);
//             c.pop_back();
//         }
// // }

// void combination2(vector<int> &a,int target,
//         vector<vector<int>>&ans,vector<int> &c,int index){
//      if(target==0){
//                 ans.push_back(c);
//                 return ;
//             }
//             if(target<0) return ;
//             for(int i=index;i<a.size();i++){
//                 if(i>index && a[i]==a[i-1]){
//                     continue;
//                 }
//                 c.push_back(a[i]);
//                 combination(a,target-a[i],ans,c,i+1);
//                 c.pop_back();
//             }
//     }

// void beautiful(vector<int> &v,int &n, int &ans,int currNum){
//     if(currNum==n+1){
//         for(int i=1;i<=n;i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         ans++;
//         return;
//     }
//     for(int i=1;i<=n;i++){
//         if(v[i]==0 && (currNum%i==0 || i%currNum==0) ){
//             v[i]=currNum;
//             beautiful(v,n,ans,currNum+1);
//             v[i]=0;
//         }
//     }
// }

// bool customers(vector<int>&counts,vector<int>&quantiy,
// int ithCustomer){
//     if(ithCustomer==quantiy.size()){
//         return true;
//     }
//     for(int i=0;i<counts.size();i++){
//         if(counts[i]>=quantiy[ithCustomer]){
//             counts[i]-=quantiy[ithCustomer];
//             if(customers(counts,quantiy,ithCustomer+1)){
//                 return true;
//             }
//             counts[i]+=quantiy[ithCustomer];
//         }
//     }
//     return false;
// }



int main(){
    
//     // merge sort 
//     int arr[]={3,6,1,19,32,21,0,7,10};
//     int n=9;
//     int s=0;
//     int e=n-1;
//     mergeSort(arr,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// // quick sort
// int arr[]={8,1,20,30,6,5,60,5};
// int n=8;
// int s=0;
// int e=n-1;
// quicksort(arr,s,e);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// // backtracking

// // permutation of a string
// string str="abc";
// int i=0;
// permutation(str,i);

// // rat in a maze
// int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
// if(maze[0][0]==0){
//     cout<<"no path exists";
//     return 0;
// }
// int row=3;
// int col=3;
// vector<vector<bool> >visited(row,vector<bool>(col,false));
// visited[0][0]=true;
// vector<string>path;
// string output="";
// solvemaze(maze,row,col,0,0,visited,path,output);
// for(auto i:path){
//     cout<<i<<" ";
// }
// cout<<endl;
// if(path.size()==0){
//     cout<<"no path esists";
// }

// // n Queen
// int n=4;
// vector<vector<char>>board(n,vector<char>(n,'-'));
// int col=0;
// solve(board,col,n);

// // Generate parenthesis
// int n=10;
// int open=n;
// int close=n;
// vector<string> ans;
// string output="";
// parenthesis(open,close,ans,output);
// for(auto i:ans){
//     cout<<i<<" ";
// }

// // letter combination of a phone number
// string n="9876";
// vector<string>ans;
// if(n.length()==0){
//     return 0;
// }
// int index=0;
// string output="";
// vector<string> v(10);
// v[2]="abc";
// v[3]="def";
// v[4]="ghi";
// v[5]="jkl";
// v[6]="mno";
// v[7]="pqrs";
// v[8]="tuv";
// v[9]="wxyz";
// letters(ans,index,output,n,v);
// for(auto i:ans){
//     cout<<i<<" ";
// }

// // count inversion
// vector<int>arr{8,4,2,1};
// cout<<inversion(arr);

// // Inplace merge sort
// vector<int>nums{8,4,2,1};
// int s=0;
// int e=nums.size()-1;
// inplacemerge(nums,s,e);
// for(auto i:nums){
//     cout<<i<<" ";
// }

// // max subarray sum
// vector<int>v{-2,1,-3,4,-1,2,1,-5,4};
// int s=0;
// int e=v.size()-1;
// cout<<subsum(v,s,e);

// // quicksort Inplace   
// int arr[]={4,1,3,9,7};
// int n=sizeof(arr)/sizeof(int);
// int s=0;
// int e=n-1;
// quicksortinplace(arr,s,e);
// for(auto i:arr){
//     cout<<i<<" ";
// }

// // combination sum
// vector<int>a{2,3,6,7};
// int target=7;
// vector<vector<int>>ans;
// vector<int>c;
// combination(a,target,ans,c,0);
// // for(int i=0;i<ans.size();i++){               
// //     for(int j=0;j<ans[i].size();j++){
// //         cout<<ans[i][j]<<" ";
// //     }
// //     cout<<endl;
// // }
// for(auto i:ans){
//     for(auto j:i){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// // comination sum-II without duplicate & same
// vector<int>a{2,5,2,1,2};
// int target=5;
// sort(a.begin(),a.end());
// vector<vector<int>>ans;
// vector<int>c;
// combination2(a,target,ans,c,0);
// // set<vector<int>>st;
// // for(auto e:ans){
// //     st.insert(e);
// // }
// // ans.clear();
// // for(auto e:st){
// //     ans.push_back(e);
// // }
// for(auto i:ans){
//     for(auto j:i){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// // Beautiful arrangement
// int n=3;
// vector<int>v(n+1);
// int ans=0;
// beautiful(v,n,ans,1);
// cout<<ans;

// // distributive repeating integers
// vector<int>nums{1,2,2,3,3,1,3};
// vector<int>quantity{2,3,2};
// unordered_map<int,int>countMap;
// for(auto i:nums){
//     countMap[i]++;
// }
// vector<int>counts;
// for(auto it:countMap){
//     counts.push_back(it.second);
// }
// sort(quantity.rbegin(),quantity.rend());
// cout<<customers(counts,quantity,0);

    return 0;
}