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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next)
            return head;
        ListNode* temp = head;
        int n = 0;
        while (temp) {
            n++;
            temp = temp->next;
        }
        k = k % n;
        if (k == 0)
            return head;
        k = n - k - 1;
        temp = head;
        while (k > 0) {
            k--;
            temp = temp->next;
        }
        ListNode* cur = temp->next;
        temp->next = NULL;
        ListNode* v = cur;
        while (v->next)
            v = v->next;
        v->next = head;

        return cur;
    }
};