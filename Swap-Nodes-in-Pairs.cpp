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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
      ListNode* temp=head,*cur=head->next;
        while(temp and temp->next){
            int a=cur->val;
            cur->val=temp->val;
            temp->val=a;
            temp=cur->next;
            if(temp)
            cur=temp->next;
        }
        return head;
    }
};