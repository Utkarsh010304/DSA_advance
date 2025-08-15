#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<climits>
using namespace std;
// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }

// int fibDP(int n,vector<int> &dp){
//         if(n==0 || n==1){
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     dp[n]=fibDP(n-1,dp)+fibDP(n-2,dp);
//     return dp[n];
// }

// int fibTabu(int n){
//     vector<int>dp(n+1,-1); //-1 can be removed
//     dp[0]=0;
//     if(n==0) return dp[0];
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

// int fibSpace(int n){
//     int prev=0;
//     if(n==0) return 0;
//     int curr=1;
//     if(n==1) return 1;
//     int ans;
//     for(int i=2;i<=n;i++){
//         ans=curr+prev;
//         prev=curr;
//         curr=ans;
//     }
//     return ans;
// }

// int houseRobber(vector<int> &nums,int i,vector<int> &dp){
//     if(i>=nums.size()) return 0;
//     if(dp[i]!=-1) return dp[i];
//     int include=nums[i]+houseRobber(nums,i+2,dp);
//     int exclude=houseRobber(nums,i+1,dp);
//     dp[i]=max(include,exclude);
//     return dp[i];
// }

// int houseTabu(vector<int> &nums){
//     int n=nums.size();
//     vector<int>dp(n,-1);
//     dp[n-1]=nums[n-1];
//     for(int i=n-2;i>=0;i--){
//         int temp=0;
//         if(i+2<n){
//             temp=dp[i+2];
//         }
//         int include=nums[i]+temp;
//         int exclude=dp[i+1];
//         dp[i]=max(include,exclude);
//     }
//     return dp[0];
// }

// int houseSpace(vector<int> &nums){
//     int n=nums.size();
//     int prev=nums[n-1];
//     int next=0;
//     int curr;
//     for(int i=n-2;i>=0;i--){
//         int temp=0;
//         if(i+2<n){
//             temp=next;
//         }
//         int include=nums[i]+temp;
//         int exclude=prev;
//         curr=max(include,exclude);
//         next=prev;
//         prev=curr;
//     }
//     return prev;
// }

// int coinChange(vector<int> coins,int amount){
//     if(amount==0) return 0;
//     int mini=INT_MAX;
//     for(int i=0;i<=coins.size();i++){
//         if(amount-coins[i]>=0){
//             int rec=coinChange(coins,amount-coins[i]);
//             int ans=1+rec;
//             mini=min(mini,ans);
//         }
//     }
//     if(mini==INT_MAX) return -1;
//     return mini;
// }
// int coinTopDown(vector<int> &coins,int amount,vector<int> &dp){
//     if(amount==0) return 0;
//     if(dp[amount]!=-1) return dp[amount];
//     int mini=INT_MAX;
//     for(int i=0;i<=coins.size();i++){
//         if(amount-coins[i]>=0){
//             int rec=coinTopDown(coins,amount-coins[i],dp);
//             int ans=1+rec;
//             mini=min(mini,ans);
//         }
//     }
//     dp[amount]=mini;
//     if(mini==INT_MAX) return -1;
//     return dp[amount];
// }
// int coinTabu(vector<int> &coins,int amount,vector<int> &dp){
//     dp[0]=0;
//     for(int x=1;x<=amount;x++){
//         int mini=INT_MAX;
//         for(int i=0;i<=coins.size();i++){
//             if(x-coins[i]>=0){
//                 int rec=dp[x-coins[i]];
//                 if(rec!=INT_MAX){
//                     int ans=1+rec;
//                    mini=min(ans,mini);
//                 }
//             }
//         }
//         dp[x]=mini;
//     }
//     return dp[amount];
// }

// int paintRec(int n,int k){
//     if(n==1) return k;
//     if(n==2) return k+k*(k-1);
//     int ans=(paintRec(n-1,k)+paintRec(n-2,k))*(k-1);
//     return ans;
// }
// int paintTopDown(int n,int k,vector<int> &dp){
//     if(n==1) return k;
//     if(n==2) return k+k*(k-1);
//     if(dp[n]!=-1) return dp[n];
//     dp[n]=(paintTopDown(n-1,k,dp)+paintTopDown(n-2,k,dp))*(k-1);
//     return dp[n];
// }
// int paintTabu(int n,int k){
//     vector<int>dp(n+1,-1);
//     dp[1]=k;
//     dp[2]=k+k*(k-1);
//     for(int i=3;i<=n;i++){
//         dp[i]=(dp[i-1]+dp[i-2])*(k-1);
//     }
//     return dp[n];
// }
// int paintSpace(int n,int k){
//     int prev2=k;
//     int prev1=k+k*(k-1);
//     if(n==1) return prev2;
//     if(n==2) return prev1;
//     int curr;
//     for(int i=3;i<=n;i++){
//         curr=(prev1+prev2)*(k-1);
//         prev2=prev1;
//         prev1=curr;
//     }
//     return curr;
// }

// int KnapsackRec(int capacity,int v[],int profit[],int i,int n){
//     // if(i==n-1){
//     //     if(v[i]<=capacity){
//     //         return profit[i];
//     //     }
//     //     else{
//     //         return 0;
//     //     }
//     // }
//     if(i>=n) return 0;
//     int include=0;
//     if(v[i]<=capacity){
//         include=profit[i]+KnapsackRec(capacity-v[i],v,profit
//         ,i+1,n);
//     }
//     int exclude=KnapsackRec(capacity,v,profit,i+1,n);
//     int ans=max(include,exclude);
//     return ans;
// }
// int KnapsackTop(int capacity,int v[],int profit[],int i,int n,vector<vector<int>> &dp){
//         if(i>=n) return 0;
//         if(dp[capacity][i]!=-1) return dp[capacity][i];
//     int include=0;
//     if(v[i]<=capacity){
//         include=profit[i]+KnapsackTop(capacity-v[i],v,profit
//         ,i+1,n,dp);
//     }
//     int exclude=KnapsackTop(capacity,v,profit,i+1,n,dp);
//     dp[capacity][i]=max(include,exclude);
//     return dp[capacity][i];
// }
// int Knapsacktabu(int capacity,int v[],int profit[],int i,int n,vector<vector<int>> &dp){
//     for(int row=0;row<=capacity;row++){
//         dp[row][n]=0;
//     }
//     for(int i=0;i<=capacity;i++){
//         for(int j=n-1;j>=0;j--){
//             int include=0;
//             if(v[j]<=i){
//                 include=profit[j]+dp[i-v[j]][j+1];
//             }
//             int exclude=dp[i][j+1];
//             dp[i][j]=max(include,exclude);
//         }
//     }
//     return dp[capacity][0];
// }
// int KnapsackSpace(int capacity,int v[],int profit[],int n){
//     vector<int>next(capacity+1,0);
//     vector<int>curr(capacity+1,-1);
//         for(int j=n-1;j>=0;j--){
//             for(int i=0;i<=capacity;i++){
//             int include=0;
//             if(v[j]<=i){
//                 include=profit[j]+next[i-v[j]];
//             }
//             int exclude=next[i];
//             curr[i]=max(include,exclude);
//         }
//         next=curr;
//     }
//     return curr[capacity];
// }

// int commonRec(string s1,string s2,int i,int j){
    // if(i>=s1.size()) return 0;
    // if(j>=s2.size()) return 0;
//     int ans=0;
//     if(s1[i]==s2[j]){
//         ans=1+commonRec(s1,s2,i+1,j+1);
//     }
//     else{
//         ans=max(commonRec(s1,s2,i,j+1),commonRec(s1,s2,i+1,j));
//     }
//     return ans;
// }
// int commonTop(string &s1,string &s2,int i,int j,vector<vector<int>> &dp){
//     if(i>=s1.size()) return 0;
//     if(j>=s2.size()) return 0;
    // if(s1[i]==s2[j]){
    //     dp[i][j]=1+commonTop(s1,s2,i+1,j+1,dp);
    // }
    // else{
    //     dp[i][j]=max(commonTop(s1,s2,i,j+1,dp),commonTop(s1,s2,i+1,j,dp));
    // }
//     return dp[i][j];
// }
// int commonTabu(string &s1,string &s2){
//     vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,0));
    // for(int i1=s1.length()-1;i1>=0;i1--){
    //     for(int j2=s2.length()-1;j2>=0;j2--){
    //         if(s1[i1]==s2[j2]){
    //             dp[i1][j2]=1+dp[i1+1][j2+1];
    //         }
    //         else{
    //             dp[i1][j2]=max(dp[i1][j2+1],dp[i1+1][j2]);
    //         }
    //     }
    // }
//     return dp[0][0];
// }
// int commonSpace(string s1,string s2){
//     vector<int>curr(s1.length()+1,0);
//     vector<int>next(s1.length()+1,0);
//     int ans=0;
//         for(int j2=s2.length()-1;j2>=0;j2--){
//             for(int i1=s1.length()-1;i1>=0;i1--){
//             if(s1[i1]==s2[j2]){
//                 ans=1+next[i1+1];
//             }
//             else{
//                 ans=max(next[i1],curr[i1+1]);
//             }
//             curr[i1]=ans;
//         }
//         next=curr;
//     }
//     return next[0];
// }

// int editRec(string &a,string &b,int i,int j){
//     if(i==a.length())return b.length()-j;
//     if(j==b.length())return a.length()-i;
//     int ans=0;
//     if(a[i]==b[j]){ //match
//         ans=editRec(a,b,i+1,j+1);
//     }
//     else{
//         int replace=1+editRec(a,b,i+1,j+1);
//         int insert=1+editRec(a,b,i,j+1);
//         int deletion=1+editRec(a,b,i+1,j);
//         ans=min(insert,min(replace,deletion));
//     }
//     return ans;
// }
// int editTop(string a,string b,int i,int j,vector<vector<int>> &dp){
//     if(i==a.length())return b.length()-j;
//     if(j==b.length())return a.length()-i;
//     int ans=0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(a[i]==b[j]){ //match
//         ans=editTop(a,b,i+1,j+1,dp);
//     }
//     else{
//         int replace=1+editTop(a,b,i+1,j+1,dp);
//         int insert=1+editTop(a,b,i,j+1,dp);
//         int deletion=1+editTop(a,b,i+1,j,dp);
//         ans=min(insert,min(replace,deletion));
//     }
//     dp[i][j]=ans;
//     return dp[i][j];
// }
// int editTabu(string a,string b){
//     vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,-1));
//     for(int col=0;col<=b.length();col++){
//         dp[a.length()][col]=b.length()-col;
//     }
//     for(int row=0;row<=a.length();row++){
//         dp[row][b.length()]=a.length()-row;
//     }
//     for(int i=a.length()-1;i>=0;i--){
//         for(int j=b.length()-1;j>=0;j--){
//             int ans=0;
//             if(a[i]==b[j]){ //match
//             ans=dp[i+1][j+1];
//             }
//             else{
//             int replace=1+dp[i+1][j+1];
//             int insert=1+dp[i][j+1];
//             int deletion=1+dp[i+1][j];
//             ans=min(insert,min(replace,deletion));
//             }
//             dp[i][j]=ans;
//         }
//     }
//     return dp[0][0];
// }
// int editSpace(string a,string b){
//     vector<int>curr(a.length()+1,0);
//     vector<int>next(a.length()+1,0);
//     for(int row=0;row<=a.length();row++){
//         next[row]=a.length()-row;
//     }
//         for(int j=b.length()-1;j>=0;j--){
//             curr[a.length()]=b.length()-j; //imp
//             for(int i=a.length()-1;i>=0;i--){
//             int ans=0;
//             if(a[i]==b[j]){ //match
//             ans=next[i+1];
//             }
//             else{
//             int replace=1+next[i+1];
//             int insert=1+next[i+1];
//             int deletion=1+curr[i+1];
//             ans=min(insert,min(replace,deletion));
//             }
//             curr[i]=ans;
//         }
//         next=curr;
//     }
//     return next[0];
// }

// int longestRec(vector<int> &nums,int curr,int prev){
//     if(curr>=nums.size()) return 0;
//     int include=0;
//     if(prev==-1 || nums[curr]>nums[prev]){
//         include=1+longestRec(nums,curr+1,curr);
//     }
//     int exclude=longestRec(nums,curr+1,prev);
//     int ans=max(include,exclude);
//     return ans;
// }
// int longestTop(vector<int> &nums,int curr,int prev,vector<vector<int>> &dp){
//     if(curr>=nums.size()) return 0;
//     if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
//     int include=0;
//     if(prev==-1 || nums[curr]>nums[prev]){
//         include=1+longestTop(nums,curr+1,curr,dp);
//     }
//     int exclude=longestTop(nums,curr+1,prev,dp);
//     int ans=max(include,exclude);
//     dp[curr][prev+1]=ans;
//     return dp[curr][prev+1];
// }
// int longestTabu(vector<int> &nums){
//     vector<vector<int>> dp(nums.size()+1, vector<int>(nums.size()+1, 0));
//     for(int i = nums.size() - 1; i >= 0; i--){
//         for(int j = i - 1; j >= -1; j--){
//             int include = 0;
//             if(j == -1 || nums[i] > nums[j]){
//                 include = 1 + dp[i+1][i+1];
//             }
//             int exclude = dp[i+1][j+1];
//             dp[i][j+1] = max(include, exclude);
//         }
//     }
//     return dp[0][0];
// }
// int longestSpace(vector<int> &nums){
//     int n=nums.size();
//     vector<int>currRow(n+1,0);
//     vector<int>nextRow(n+1,0);
//     for(int i = n - 1; i >= 0; i--){
//         for(int j = i - 1; j >= -1; j--){
//             int include = 0;
//             if(j == -1 || nums[i] > nums[j]){
//                 include = 1 + nextRow[i+1];
//             }
//             int exclude = nextRow[j+1];
//             currRow[j+1] = max(include, exclude);
//         }
//         nextRow=currRow;
//     }
//     return nextRow[0];
// }
// int longestBS(vector<int> &nums){
//     vector<int>ans;
//     ans.push_back(nums[0]);
//     for(int i=1;i<nums.size();i++){
//         if(nums[i]>ans.back()){
//             ans.push_back(nums[i]);
//         }
//         else{
//             int index=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
//             ans[index]=nums[i];
//         }
//     }
//     return ans.size();
// }

// bool canPlaceOnTop(vector<int> &bottom, vector<int> &top) {
//     return top[0] <= bottom[0] && top[1] <= bottom[1] && top[2] <= bottom[2];
// }
// int longestSpace(vector<vector<int>> &cuboids){
//     int n=cuboids.size();
//     vector<int>currRow(n+1,0);
//     vector<int>nextRow(n+1,0);
//     for(int i = n - 1; i >= 0; i--){
//         for(int j = i - 1; j >= -1; j--){
//             int include = 0;
//             if(j == -1 || canPlaceOnTop(cuboids[i],cuboids[j])){
//                 int height=cuboids[i][2];
//                 include = height + nextRow[i+1];
//             }
//             int exclude = nextRow[j+1];
//             currRow[j+1] = max(include, exclude);
//         }
//         nextRow=currRow;
//     }
//     return nextRow[0];
// }
// int maxHeight(vector<vector<int>> &cuboids){
//     for(auto &cuboid :cuboids){
//         sort(cuboid.begin(),cuboid.end());
//     }
//         sort(cuboids.begin(),cuboids.end());
//         int ans=longestSpace(cuboids);
//         return ans;
// }

// int guess(int s,int e){
//     if(s>=e) return 0;
//     int ans=INT_MAX;
//     for(int i=s;i<=e;i++){
//         ans=min(ans,i+max(guess(s,i-1),guess(i+1,e)));
//     }
//     return ans;
// }
// int guessTop(int s,int e,vector<vector<int>> &dp){
//     if(s>=e) return 0;
//     if(dp[s][e]!=-1) return dp[s][e];
//     int ans=INT_MAX;
//     for(int i=s;i<=e;i++){
//         ans=min(ans,i+max(guessTop(s,i-1,dp),guessTop(i+1,e,dp)));
//     }
//     dp[s][e]=ans;
//     return dp[s][e];
// }
// int guessTabu(int n){
//     vector<vector<int>>dp(n+2,vector<int>(n+1,0));
//     for(int start=n-1;start>=1;start--){
//         for(int end=1;end<=n;end++){
//             if(start>=end) {continue;}
//             int ans=INT_MAX;
//             for(int i=start;i<=end;i++){
//                 ans=min(ans,i+max(dp[start][i-1],dp[i+1][end]));
//             }
//             dp[start][end]=ans;
//         }
//     }
//     return dp[1][n];
// }
int main(){
    // fibonacci NO
    // int n=7;
    // cout<<fib(n);

    // top down approach =rec+memoization
    // create DP array
    // vector<int>dp(n+1,-1);
    // int ans=fibDP(n,dp);
    // for(auto i:dp){
    //     cout<<i<<" ";
    // }
    // cout<<ans<<endl;

    // // bottom up aproach=tabulation method
    // cout<<fibTabu(n);
    
    // // space optimization
    // cout<<fibSpace(n);

    // // house robber 198
    // vector<int>nums={1,2,3,1};
    // int i=0;
    // top down 
    // vector<int>dp(nums.size()+1,-1);
    // cout<<houseRobber(nums,i,dp);
    // // bootom up
    // cout<<houseTabu(nums);
    // space optimization
    // cout<<houseSpace(nums)<<endl;

    // // coin change 322
    // vector<int>coins{1,2,5};
    // int amount=11;
    // cout<<coinChange(coins,amount);
    // // top down
    // int n=amount;
    // vector<int>dp(n+1,-1);
    // cout<<coinTopDown(coins,amount,dp);
    // // tabulation
    // int n=amount;
    // vector<int>dp(n+1,INT_MAX);
    // cout<<coinTabu(coins,amount,dp)<<endl;

    // // painting fence algo
    // int n=3;
    // int k=3;
    // cout<<paintRec(n,k)<<endl;
    // // topDown
    // vector<int>dp(n+1,-1);
    // cout<<paintTopDown(n,k,dp)<<endl;
    // // tabulation
    // cout<<paintTabu(n,k)<<endl;
    // // space optimization
    // cout<<paintSpace(n,k)<<endl;

    // // 0/1 knapsack problem
    // int capacity=50;
    // int v[]={10,20,30};
    // int profit[]={60,100,120};
    // int i=0;
    // int n=3; 
    // cout<<KnapsackRec(capacity,v,profit,i,n); 
    // // topDown
    // vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));
    // cout<<KnapsackTop(capacity,v,profit,i,n,dp)<<endl;
    // // tabulation method
    // vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));
    // cout<<Knapsacktabu(capacity,v,profit,i,n,dp)<<endl;
    // // space optimization
    //  cout<<KnapsackSpace(capacity,v,profit,n); 

    // // longest common subsequence 1143
    // string s1="abced";
    // string s2="abcde";
    // int i=0;
    // int j=0;
    // cout<<commonRec(s1,s2,i,j);
    // // topDown
    // vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,-1));
    // cout<<commonTop(s1,s2,i,j,dp)<<endl;
    // // tabulation
    // cout<<commonTabu(s1,s2)<<endl;
    // // space optimization
    // cout<<commonSpace(s1,s2)<<endl;

    // // longest palindromic subsequence
    // string s="aba";
    // string a=s;
    // reverse(s.begin(),s.end());
    // int ans=commonSpace(s,a);
    // cout<<ans<<endl;

    // // edit distance 72
    // string a="horse";
    // string b="ros";
    // int i=0;
    // int j=0;
    // cout<<editRec(a,b,i,j)<<endl;
    // // topDown
    // vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,-1));
    // cout<<editTop(a,b,i,j,dp)<<endl;
    // // tabulation
    // cout<<editTabu(a,b)<<endl;
    // // space optimization
    // cout<<editSpace(a,b)<<endl;
   
    // // longest increasing subsequence
    // vector<int>nums{10,9,2,5,3,7,101,18};
    // int curr=0;
    // int prev=-1;
    // cout<<longestRec(nums,curr,prev);
    // // topDown
    // vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
    // cout<<longestTop(nums,curr,prev,dp);
    // // tabulation
    // cout<<longestTabu(nums)<<endl;
    // // space optimization
    // cout<<longestSpace(nums)<<endl;
    // // binary search
    // cout<<longestBS(nums)<<endl;

    // // max height of stacking cuboid 1691
    // vector<vector<int>>cuboids{{50,45,20},{97,37,53},{45,23,12}};
    // cout<<maxHeight(cuboids)<<endl;

    // 375 guess no higher or lower
    int n=3;
    int s=1;
    int e=n;
    // cout<<guess(s,e)<<endl;
    // // topDown
    // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    // cout<<guessTop(s,e,dp)<<endl;
    // // tabulation
    // cout<<guessTabu(n)<<endl;
    // space optimization


    return 0;
}