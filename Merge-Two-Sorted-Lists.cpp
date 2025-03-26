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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail=dummy;
        ListNode* t1=list1,  *t2=list2;
        while(t1 and t2){
           if(t1->val<=t2->val){
             tail->next=new ListNode(t1->val);
             t1=t1->next;
             tail=tail->next;
           }else{
            tail->next=new ListNode(t2->val);
             t2=t2->next;
             tail=tail->next;
           }
        }
        if(t1){
            while(t1){
            tail->next=new ListNode(t1->val);
             t1=t1->next;
             tail=tail->next;
            }
        }
        if(t2){
            while(t2){
            tail->next=new ListNode(t2->val);
             t2=t2->next;
             tail=tail->next;
            }
        }
        return dummy->next;
    }
};