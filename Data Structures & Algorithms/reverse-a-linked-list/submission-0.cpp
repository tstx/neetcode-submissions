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

// [0,1]         [1,0]
// 0 -> 1        0 -> null
// 1 -> null     1 -> 0
// Jeden Knoten einmal durchlaufen und seinen next-Zeiger
// auf den vorherigen Knoten umbiegen, bis die Liste rückwärts zeigt.


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
