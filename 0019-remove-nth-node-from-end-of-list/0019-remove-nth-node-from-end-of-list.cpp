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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // Count all members in list
        int count = 0;
        ListNode *curr = head;
        while (curr != nullptr)
        {
            count++;
            curr = curr->next;
        }

        // Advance list up to n member
        curr = head;
        ListNode *prev = nullptr;
        for (int i = 0; i < count - n; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        // Delete n member from list by skipping curr ref
        if (prev == nullptr)
        {
            head = curr->next;
        }
        else
        {
            prev->next = curr->next;
        }
        
        return head;
    }
};