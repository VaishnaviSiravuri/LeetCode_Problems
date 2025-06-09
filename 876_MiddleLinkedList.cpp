#include <iostream>
using namespace std; 

class Solution{

    public:
        ListNode* middlenode (ListNode* head) {
            ListNode* slow = head;
            ListNode* fast = head;

            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
};