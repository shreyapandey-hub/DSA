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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while (curr != NULL) {
            
            // Save next node
            ListNode* nextNode = curr->next;
            
            // Reverse the link
            curr->next = prev;
            
            // Move pointers
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
};