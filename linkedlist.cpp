#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;
    Node(){
        this->data=0;
        this->next=NULL;
        this->random=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->random=NULL;
    }
    ~Node(){
        cout<<"deltion of node -"<<this->data<<endl;
    }
};
void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// // I want to insert anode at the head of the LL
// void insertAtHead(Node* &head,Node* & tail,int data){
//     if(head==NULL){
//         Node *newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     // 1.create a newnode
//     Node* newnode=new Node(data);
//     // 2.point next of newnode to head
//     newnode->next=head;
//     // 3.head ko starting me le aao
//     head=newnode;
// }
// // I want to insert anode at the head of the LL
// void insertAtTail(Node * &head,Node* &tail ,int data){
//     if(head==NULL){
//         Node *newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     Node *newnode=new Node(data);
//     tail->next=newnode;
//     tail=newnode;
// }
// void print(Node* &head){
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
int findlength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
// void insertAtPosition(int pos,Node* &head,Node* &tail,int data){
//     if(head==NULL){
//         Node* newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     if(pos==0){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     int len=findlength(head);
//     if(pos>=len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     // creating new node
//     Node* newnode=new Node(data);
//     // find the pos. of prev & curr
//     int i=1;
//     Node* prev=head;
//     while(i<pos){
//         prev=prev->next;
//         i++;
//     }
//     Node*curr=prev->next;
//     // linking of newnode to prev & curr
//     newnode->next=curr;
//     prev->next=newnode;
// }

// void deleteNode(Node* &head,Node* &tail,int pos){
//     if(head==NULL){
//         cout<<"cant delete"<<endl;
//         return;
//     }
//     if(pos==1){
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     int len=findlength(head);
//     if(pos==len){
//         int i=1;
//         Node* prev=head;
//         while(i<pos-1){
//             prev=prev->next;
//             i++;
//         }
//         prev->next=NULL;
//         Node* temp=tail;
//         tail=prev;
//         delete temp;
//         return;
//     }
//     int i=1;
//     Node*prev=head;
//     while(i<pos-1){
//         prev=prev->next;
//         i++;
//     }
//     Node* curr=prev->next;
//     prev->next=curr->next;
//     curr->next=NULL;
//     delete curr;
// }






// // doubly linked list
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(){
//         this->data=0;
//         this->prev=NULL;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }
//     ~Node(){
//         cout<<"deletion -"<<this->data<<endl;
//     }
// };

// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int getlength(Node* head){
//     int len=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }

// void insertAtHead(Node* &head,Node* &tail,int data){
//     if(head==NULL){
//         Node* newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     Node* newnode=new Node(data);
//     newnode->next=head;
//     head->prev=newnode;
//     head=newnode;
// }

// void insertAtTail(Node* &head,Node* &tail,int data){
//     if(head==NULL){
//         Node* newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     Node* newnode=new Node(data);
//     tail->next=newnode;
//     newnode->prev=tail;
//     tail=newnode;
// }

// void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
//     if(head==tail){
//         Node* newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;

//     }
//     if(pos==0){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     int len=getlength(head);
//     if(pos>=len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     Node* newnode=new Node(data);
//     int i=1;
//     Node* prevnode=head;
//     while(i<pos){
//         prevnode=prevnode->next;
//         i++;
//     }
//     // Node* curr=prevnode->next;
//     // // insertion of newnode
//     // prevnode->next=newnode;
//     // newnode->prev=prevnode;
//     // newnode->next=curr;
//     // curr->prev=newnode;

//     // without creatingcurr node
//     prevnode->next->prev=newnode;
//     newnode->next=prevnode->next;
//     prevnode->next=newnode;
//     newnode->prev=prevnode;
// }

// void deletepos(Node* &head,Node* &tail,int pos){
//     if(head==NULL){
//         cout<<"deletion not possible"<<endl;
//         return;
//     }
//     if(head->next==NULL){
//         Node* temp=head;
//         head=NULL;
//         tail=NULL;
//         delete temp;
//         return;
//     }
//     int len=getlength(head);
//     if(pos>len){
//         cout<<"enter a valid len"<<endl;   
//         return;
//     }
//     if(pos==1){
//         Node* temp=head;
//         head=head->next;
//         head->prev=NULL;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     len=getlength(head);
//     if(pos==len){
//         Node*temp=tail;
//         tail=tail->prev;
//         temp->prev=NULL;
//         tail->next=NULL;
//         delete temp;
//         return;
//     }
//     int i=1;
//     Node* left=head;
//     while(i<pos-1){
//         left=left->next;
//         i++;
//     }
//     Node* curr=left->next;
//     Node* right=curr->next;
//     left->next=right;
//     right->prev=left;
//     curr->next=NULL;
//     curr->prev=NULL;
//     delete curr;
// }




// Node* reversed(Node* &prev,Node* &curr){
//     // if(curr==NULL){
//     //     return prev;
//     // }
//     // Node* right=curr->next;
//     // curr->next=prev;
//     // reversed(curr,right);
//     while(curr!=NULL){
//         Node* temp=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=temp;
//     }
//     return prev;
// }

// Node* getmiddle(Node* &first){
//     if(first==NULL){
//         cout<<"It is empty"<<endl;
//         return first;
//     }
//     if(first->next==NULL){
//         return first;
//     }
//     Node* slow=first;
//     Node* fast=first->next;
//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     return slow;
// }

// Node* reversekNodes(Node* &head,int k){
//     if(head==NULL){
//         cout<<"it is empty"<<endl;
//         return head;
//     }
//     int len=getlength(head);
//     if(k>len){
//         // cout<<"enter a valid length"<<endl;
//         return head;
//     }
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* right=curr->next;
//     int count=0;
//     while(count<k){
//         right=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=right;
//         count++;
//     }
//     if(right!=NULL){
//         head->next=reversekNodes(right,k);
//     }
//     return prev;
// }

// bool checkLoop(Node* &head){
//     if(head==NULL){
//         return false;
//     }
//     Node* slow=head;
//     Node* fast=head;
//     while( fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             return true;
//         }
//     }
//     return false;
// }


// Node* staringpoint(Node* &head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node* slow=head;
//     Node* fast=head;
//     while( fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//     }
//     while(slow!=fast){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     return slow;
// }

// Node* removeloop(Node* &head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node* slow=head;
//     Node* fast=head;
//     while( fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//     }
//     Node* prev=fast;
//     while(slow!=fast){
//         prev=fast;
//         slow=slow->next;
//         fast=fast->next;
//     }
//     prev->next=NULL;
//     return slow;
// }

// Node* reversed(Node* head){
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* right=curr->next;
//     while(curr!=NULL){
//         right=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=right;
//     }
//     return prev;
// }
// bool checkpallindrome(Node* &head){
//     if(head==NULL){
//         return true;
//     }
//     if(head->next==NULL){
//         return true;
//     }
//     // fnd the middle
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     // reversing
//     Node* reversekahead=reversed(slow->next);
//     slow->next=reversekahead;
//     // compare
//     Node* temp1=head;
//     Node* temp2=reversekahead;
//     while(temp2!=NULL){
//         if(temp1->data != temp2->data){
//             return false;
//         }
//         else{
//         temp1=temp1->next;
//         temp2=temp2->next;
//         }
//     }
//     return true;
// }

// void removeDuplicates(Node* &head){
//     if(head==NULL){
//         return ;
//     }
//     if(head->next==NULL){
//         return ;
//     }
//     Node* curr=head;
//     while(curr!=NULL){
//         if((curr->next!=NULL) && (curr->data==curr->next->data)){
//             Node* temp=curr->next;
//             curr->next=curr->next->next;
//             temp->next=NULL;
//             delete temp;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
// }

// void sortcount(Node* &head){
//     int zero=0;
//     int one=0;
//     int two=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             zero++;
//         }
//         else if(temp->data==1){
//             one++;
//         }
//         else{
//             two++;
//         }
//         temp=temp->next;
//     }
//     temp=head;
//         while(zero--){
//             temp->data=0;
//             temp=temp->next;
//         }
//         while(one--){
//             temp->data=1;
//             temp=temp->next;
//         }
//         while(two--){
//             temp->data=2;
//             temp=temp->next;
//         }
// }

// Node* sortoptimized(Node* &head){
//     Node* zeroHead=new Node(-1);
//     Node* zerotail=zeroHead;
//     Node* oneHead=new Node(-1);
//     Node* onetail=oneHead;
//     Node* twoHead=new Node(-1);
//     Node* twotail=twoHead;

//     Node* curr=head;
//     while(curr!=NULL){
//         Node* temp=curr;
//         curr=curr->next;
//         temp->next=NULL;
//         if(temp->data==0){
//             zerotail->next=temp;
//             zerotail=temp;
//         }
//          else if(temp->data==1){
//             onetail->next=temp;
//             onetail=temp;
//         }
//         else{
//             twotail->next=temp;
//             twotail=temp;
//         }
//     }
//     // join them  remove dummy nodes
//     Node* temp=oneHead;
//     oneHead=oneHead->next;
//     temp->next=NULL;
//     delete temp;
//     temp=twoHead;
//     twoHead=twoHead->next;
//     temp->next=NULL;
//     delete temp;
//     if(oneHead!=NULL){
//         zerotail->next=oneHead;
//         if(twoHead!=NULL)
//             onetail->next=twoHead;
//     }
//     else{
//         if(twoHead!=NULL)
//             zerotail->next=twoHead;
//     }
//     temp=zeroHead;
//     zeroHead=zeroHead->next;
//     temp->next=NULL;
//     delete temp;
//     return zeroHead;
// }

// Node* add(Node* &head1,Node* &head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     head1=reversed(head1);
//     head2=reversed(head2);
//     Node* anshead=NULL;
//     Node* anstail=NULL;
//     int carry=0;
//     while(head1!=NULL && head2!=NULL){
//         int sum=carry+head1->data+head2->data;
//         int digit=sum%10;
//         carry=sum/10;
//         Node* newnode=new Node(digit);
//         if(anshead==NULL){
//             anshead=newnode;
//             anstail=newnode;
//         }
//         else{
//             anstail->next=newnode;
//             anstail=newnode;
//         }
//         head1=head1->next;
//         head2=head2->next;
//     }
//     while(head1!=NULL){
//         int sum=carry+head1->data;
//         int digit=sum%10;
//         carry=sum/10;
//         Node* newnode=new Node(digit);
//         anstail->next=newnode;
//         anstail=newnode;
//         head1=head1->next;
//     }
//     while(head2!=NULL){
//         int sum=carry+head2->data;
//         int digit=sum%10;
//         carry=sum/10;
//         Node* newnode=new Node(digit);
//         anstail->next=newnode;
//         anstail=newnode;
//         head2=head2->next;
//     }
//     while(carry!=0){
//         int sum=carry;
//         int digit=sum%10;
//         carry=sum/10;
//         Node* newnode=new Node(digit);
//         anstail->next=newnode;
//         anstail=newnode;
//     }
//     anshead=reversed(anshead);
//     return anshead;
// }

// void fun(int &pos,Node* &head,int &ans){
//     if(head==NULL){
//         return;
//     }
//     fun(pos,head->next,ans);
//     if(pos==0){
//         ans=head->data;
//     }
//     pos--;
// }
// int back(int pos,Node* &head,int &ans){
//     fun(pos,head,ans);
//     return ans;
// }

// Node* intersection(Node* &head1,Node* &head2){
//     Node* a=head1;
//     Node* b=head2;
//     while(a->next && b->next){
//         if(a==b){
//             return a;
//         }
//         a=a->next;
//         b=b->next;
//     }
//     if(a->next==NULL &&b->next==NULL && a!=b){
//         return NULL;
//     }
//         if(a->next==NULL){
//             int Bdifflen=0;
//             while(b->next){
//                 Bdifflen++;
//                 b=b->next;
//             }
//             while(Bdifflen--){
//                 head2=head2->next;
//             }
//         }
//         else{
//             int Adiifflen=0;
//             while(a->next){
//                 Adiifflen++;
//                 a=a->next;
//             }
//             while(Adiifflen--){
//                 head1=head1->next;
//             }
//         }
//         while(head1!=head2){
//             head1=head1->next;
//             head2=head2->next;
//         }
//         return head1;
// }

// Node* merges(Node* &head1,Node* &head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     Node* ans=new Node(-1);
//     Node* aptr=ans;
//     while(head1!=NULL && head2!=NULL){
//         if(head1->data<=head2->data){
//             aptr->next=head1;
//             aptr=head1;
//             head1=head1->next;
//         }
//         else{
//             aptr->next=head2;
//             aptr=head2;
//             head2=head2->next;
//         }
//     }
//     if(head1){
//         aptr->next=head1;
//     }
//     if(head2){
//         aptr->next=head2;
//     }
//     return ans->next;
// }
// Node* findmid(Node* &head){
//     Node*slow=head;
//     Node* fast=head->next;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     return slow;
// }
// Node* mregesort(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node* mid=findmid(head);
//     Node* left=head;
//     Node* right=mid->next;
//     mid->next=NULL;
//     left=mregesort(left);
//     right=mregesort(right);
//     Node* mergeLL=merges(left,right);
//     return mergeLL;
// }

// Node* mergedrecursion(Node* a, Node* b){
//     if(!a)return b;
//     if(!b)return a;
//     Node* ans=0;
//     if(a->data<b->data){
//         ans=a;
//         a->bottom=mergedrecursion(a->bottom,b);
//     }
//     else{
//         ans=b;
//         b->bottom=mergedrecursion(a,b->bottom);
//     }
//     return ans;
// }
// Node* flatten(Node* &head){
//     if(!head) return 0;
//     Node* mergeLL=mergedrecursion(head,flatten(head->next));
//     return mergeLL;
// }


// Node* helper(Node* first,unordered_map<Node*,Node*> &mp){
//     if(first==NULL)return NULL;
//     Node* newfirst=new Node(first->data);
//     mp[first]=newfirst;
//     newfirst->next=helper(first->next,mp);
//     if(first->random){
//         newfirst->random=mp[first->random];
//     }
//     return newfirst;
// }
// Node* helper2(Node*first){
//     if(first==NULL) return 0;
//     Node* it=first;
//     while(it){
//         Node* clone=new Node(it->data);
//         clone->next=it->next;
//         it->next=clone;
//         it=it->next->next;
//     }
//     it=first;
//     while(it){
//         Node* clone=it->next;
//         clone->random=it->random?it->random->next:nullptr;
//         it=it->next->next;
//     }
//     it=first;
//     Node* clonehead=it->next;
//     while(it){
//         Node* temp=it->next;
//         it->next=it->next->next;
//         if(temp->next){
//             temp->next=temp->next->next;
//         }
//         it=it->next;
//     }
//     return clonehead;
// }
// Node* clone(Node* first){
//     // unordered_map<Node*,Node*>mp;
//     // old->new node mapping
//     // return helper(first,mp);//using map
// }

// Node* rotate(Node* &first,int k){
//     if(first==NULL){
//         return 0;
//     }
//     int len=findlength(first);
//     int actualK=k%len;
//     if(actualK==0){
//         return first;   
//     }
//     int lastNodepos=len-actualK-1;
//     Node* lastNode=first;
//     for(int i=0;i<lastNodepos;i++){
//         lastNode=lastNode->next;
//     }
//     Node* newhead=lastNode->next;
//     lastNode->next=NULL;
//     Node* it=newhead;
//     while(it->next){
//         it=it->next;
//     }
//     it->next=first;
//     return newhead;
// }

// void linkDelete(Node* first,int m,int n){
//     if(first==NULL){
//         return ;
//     }
//     Node* it=first;
//     for(int i=0;i<m-1;++i){
//         if(!it) return;
//         it=it->next;
//     }
//     if(!it)return;
//     Node* Mnode=it;
//     it=Mnode->next;
//     for(int i=0;i<n;++i){
//         if(!it) break;
//         Node* temp=it->next;
//         delete it;
//         it=temp;
//     }
//     Mnode->next=it;
//     linkDelete(it,m,n);
// }

// vector<int>critical(Node* &head){
//     vector<int>ans={-1,-1};
//     Node* prev=head;
//     if(prev==NULL) return ans;
//     Node* curr=head->next;
//     if(curr==NULL)return ans;
//     Node* nextnode=head->next->next;
//     if(nextnode==NULL) return ans;
//     int firstCP=-1;
//     int lastCP=-1;
//     int minDist=INT8_MAX;
//     int i=1;
//     while(nextnode){
//         bool isCP=((curr->data>prev->data && curr->data>nextnode->data)) ||
//         ((curr->data<prev->data && curr->data<nextnode->data))  ?
//         true:false;
//         if(isCP && firstCP==-1){
//             firstCP=i;
//             lastCP=i;
//         }
//         if(isCP){
//             minDist=min(minDist,i-lastCP);
//             lastCP=i;
//         }
//         ++i;
//         prev=prev->next;
//         curr=curr->next;
//         nextnode=nextnode->next;
//     }
//     if(lastCP==firstCP){
//         return ans;
//     }
//     else{
//     ans[0]=minDist;
//     ans[1]=lastCP-firstCP;
//     }
//     return ans;
// }


// Node* mergeSum(Node* & head){
//     if(!head) return 0;
//     Node* slow=head;
//     Node* fast=head->next;
//     Node* lastNode=0;
//     int sum=0;
//     while(fast){
//         if(fast->data!=0){
//             sum+=fast->data;
//         }
//         else{
//             slow->data=sum;
//             lastNode=slow;
//             slow=slow->next;
//             sum=0;
//         }
//         fast=fast->next;
//     }
//     Node* temp=slow;
//     lastNode->next=NULL;
//     while(temp){
//         Node* tempkaNext=temp->next;
//         delete temp;
//         temp=tempkaNext;
//     }
//     return head;
// }


// vector<int>nextLarger(Node* &head){
//     vector<int>ll;
//     while(head){
//         ll.push_back(head->data);
//         head=head->next;
//     }
//     stack<int>st;
//     for(int i=0;i<ll.size();++i){
//         while(!st.empty() && ll[i]>ll[st.top()]){
//             int kids=st.top();
//             st.pop();
//             ll[kids]=ll[i];
//         }
//         st.push(i);
//     }
//     while(!st.empty()){
//         ll[st.top()]=0;
//         st.pop();
//     }
//     ll[ll.size()-1]=0;
//     return ll;
// }
int main(){
    // // printing the linked list
    // Node *first=new Node(10);
    // Node *second=new Node(20);
    // Node *third=new Node(30);
    // Node *fourth=new Node(40);
    // Node *fifth=new Node(50);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=NULL;
    // cout<<"printing the linked list"<<endl;
    // print(first);

    // // insertion
    // Node *head =new Node(10);
    // Node *head =NULL;
    // Node *tail=NULL;
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,50);
    // insertAtTail(head,tail,10);
    // print(head);
    // cout<<endl;

    // insertAtTail(head,tail,20);
    // insertAtTail(head,tail,30);
    // insertAtTail(head,tail,40);
    // print(tail);

    // // insert at any pos
    // insertAtPosition(3,head,tail,101);
    // cout<<endl;
    // print(head);

    // // deleteion
    // deleteNode(head,tail,3);
    // print(head);

    // // doubly linked list
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* head=first;
    // Node* tail=third;
    // first->next=second;
    // second->prev=first;
    // second->next=third;
    // third->prev=second;
    // print(first);

    // // insertAtHead(head,tail,5);
    // // cout<<endl;
    // // print(head);

    // // insertAtTail(head,tail,40);
    // // cout<<endl;
    // // print(head);

    // insertAtPosition(head,tail,15,3);
    // cout<<endl;
    // print(head);

    // deletion
    // deletepos(head,tail,1);
    // print(head);

    // // Questions
    // // reverse a linkedlist
    // // singly LL uncomment
    // Node *head =NULL;
    // Node *tail=NULL;
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,50);
    // insertAtTail(head,tail,10);
    // print(head);
    // cout<<endl;
    // Node*prev=NULL;
    // Node*curr=head;
    // head=reversed(prev,curr);
    // print(head);

    // // middle element of LL
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);
    // Node* fifth=new Node(50);
    // Node* sixth=new Node(60);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;
    // print(first);
    // // cout<<endl;
    // // cout<<"middle is "<<getmiddle(first)->data<<endl;

    // // reverse a LL in k nodes
    // int k=4;
    // first=reversekNodes(first,k);
    // cout<<endl;
    // print(first);

    // // loop detection
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);
    // Node* fifth=new Node(50);
    // Node* sixth=new Node(60);
    // Node* seventh=new Node(70);
    // Node* eight=new Node(80);
    // Node* ninth=new Node(90);
    // Node* tenth=new Node(100);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=seventh;
    // seventh->next=eight;
    // eight->next=ninth;
    // ninth->next=tenth;
    // tenth->next=fifth;
    // cout<<"ans is "<<checkLoop(first)<<endl;

    // // starting point of loop
    // cout<<"ans is - "<<staringpoint(first)->data<<endl;

    // // removal of loop
    // removeloop(first);
    // print(first);

    // // check pallindrome
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(20);
    // Node* fifth=new Node(10);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=NULL;
    // cout<<"ans is-> "<<checkpallindrome(first)<<endl;

    // // // remove duplicates
    // Node* first=new Node(1);
    // Node* second=new Node(2);
    // Node* third=new Node(2);
    // Node* fourth=new Node(0);
    // Node* fifth=new Node(0);
    // Node* sixth=new Node(1);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=NULL;
    // print(first);
    // removeDuplicates(first);
    // print(first);

    // // sort 0 1 2
    // // 1.using count no. of 0 1 2
    // sortcount(first);   // data replacement
    // cout<<endl;
    // print(first);

    // // 2.optimized  //pointer replacement
    // // cout<<"optmized"<<endl;
    // write a deconstructor to delete nodes
    // first=sortoptimized(first);
    // cout<<"optmized"<<endl;
    // print(first);

    // // add two numbers
    // Node* head1=new Node(2);
    // Node* second1=new Node(4);
    // head1->next=second1;
    // Node* head2=new Node(2);
    // Node* second2=new Node(3);
    // Node* third2=new Node(4);
    // head2->next=second2;
    // second2->next=third2;
    // Node* ans=add(head1,head2);
    // print(ans);

    // // // kth node from the back
    // Node* first=new Node(1);
    // Node* second=new Node(2);
    // Node* third=new Node(3);
    // Node* fourth=new Node(4);
    // Node* fifth=new Node(5);
    // Node* sixth=new Node(6);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=NULL;
    // print(first);
    // int pos=3;
    // int ans=-1;
    // cout<<endl;
    // cout<<back(pos,first,ans);

    // // intersection of 2 LL
    // Node* head2=new Node(2);
    // Node* second2=new Node(3);
    // Node* third2=new Node(4);
    // head2->next=second2;
    // second2->next=third2;
    // third2->next=fourth;
    // cout<<endl;
    // cout<<intersection(first,head2)->data;

    // // merge two sorted list
    // third2->next=NULL;
    // print(first);
    // first=merges(first,head2);
    // cout<<endl;
    // print(first);

    // // mrege sort in LL
    // Node* first=new Node(6);
    // Node* second=new Node(3);
    // Node* third=new Node(2);
    // Node* fourth=new Node(0);
    // Node* fifth=new Node(5);
    // Node* sixth=new Node(2);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=NULL;
    // print(first);
    // // first=mregesort(first);
    // cout<<endl;
    // print(first);

    // flatten LL

    // clone LL with random pointer
    // first->random=sixth;
    // fifth->random=second;
    // third->random=fourth;
    // fourth->random=NULL;
    // clone(first);

    // // rotate list k times
    // int k=2;
    // first=rotate(first,k);
    // cout<<endl;
    // print(first);

    // // deletes n nodes after skiiping m nodes
    // int m=1;
    // int n=1;
    // linkDelete(first,m,n);
    // print(first);

    // // lc2058 diff bw two critical points
    // Node* first=new Node(0);
    // Node* second=new Node(1);
    // Node* third=new Node(2);
    // Node* fourth=new Node(0);
    // Node* fifth=new Node(5);
    // Node* sixth=new Node(7);
    // Node*seventh=new Node(6);
    // Node* eight=new Node(0);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=seventh;
    // seventh->next=eight;
    // eight->next=NULL;
    // print(first);
    // vector<int>val;
    // val=critical(first);
    // cout<<endl;
    // for(auto i:val){
    //     cout<<i<<" ";
    // }

    // // // merge Nodes in bw zeros
    // mergeSum(first);
    // cout<<endl;
    // print(first);

    // // Next greater node in LL
    // vector<int>ans=nextLarger(first);
    // cout<<endl;
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    





    


    
   
    
    
   





   
   




   


    

   
    




    return 0;
}