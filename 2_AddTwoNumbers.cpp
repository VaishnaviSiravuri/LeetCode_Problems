class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummyhead = new ListNode(0);
        ListNode* tail = dummyhead;
        int carry = 0; 

        while ( l1 != nullptr || l2 != nullptr || carry != 0){
            
            int digit1 = (l1 != nullptr ) ? l1->val : 0;
            int digit2 = (l2 != nullptr ) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            int carry = sum / 10; 

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next; 

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* result = dummyhead->next;
        delete dummyhead;
        return result;
    }
};