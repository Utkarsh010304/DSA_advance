#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;

// bool checkCircular(Node* head){
//     unordered_map<Node*,bool>vis;
//     Node* temp=head;
//     while(temp!=NULL){
//         if(vis.find(temp)!=vis.end){
//             vis[temp]=true;
//         }
//         else{
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;
// }

class trie{
    public:
    char data;
    trie* child;
    bool isTerminal;
    trie(char d){
        this->data=d;
        child=new trie(26);
        this->isTerminal=false;
    }
};

void insertWord(trie* root,string s){
    if(s.length()==0){
        root->isTerminal=true;
        return;
    }
    char ch=s[0];
    int index=ch-'a';
    trie* child;
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        child=new trie(ch);
        root->children[index]=child;
    }
    insertWord(child,s.substr(1));
}
int main(){
    // unordered_map<string,int>m;
    // // Insertion
    // pair<string,int>p=make_pair("scorpio",9);
    // m.insert(p);
    // pair<string,int>p2{"swift",8};
    // m.insert(p2);
    // m["fortuner"]=10;
    // // access
    // cout<<m.at("swift")<<endl;
    // cout<<m.at("scorpio")<<endl;
    // cout<<m["swift"]<<endl;
    // // search
    // cout<<m.count("scorpio")<<endl;
    // if(m.find("fortuner")!=m.end()){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }
    // cout<<m.size()<<endl;
    // cout<<m["hummer"]<<endl; //imp
    // cout<<m.size()<<endl;
    // // print
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // string s="thiruvananthpuram";
    // unordered_map<char ,int>freq;
    // for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     freq[ch]++;
    // }
    // for(auto i:freq){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // trie
    trie* root=new trie('-');
    insertWord(root,"coding");
// rough file worst code topics
    return 0;
}