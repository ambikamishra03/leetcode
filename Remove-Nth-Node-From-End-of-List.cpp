/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || (head->next==NULL and n==1)) return NULL;
        int s=0;
        ListNode* temp=head;
        while(temp){
          s++;
          temp=temp->next;
        }
        temp=head;
        // cout<<s;
        n=s-n-1;
        if(n==-1) return head->next;
        while(n>0){
            n--;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};