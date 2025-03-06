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
        if (!head || !head->next || k == 0) return head; 
        ListNode* current = head;
        int length = 1; 
        while (current->next) 
        {
            length++;
            current = current->next;
        }
        k %= length;  
        if (k == 0) return head;  
        current->next = head;  
        int newTailPos = length - k;
        current = head;
        
        for (int i = 1; i < newTailPos; i++) 
        {
            current = current->next;
        }
        head = current->next;  
        current->next = nullptr;  
        return head;
    }
};
