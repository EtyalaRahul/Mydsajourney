class Solution {
public:
    int length_of_linkedlist(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

public:
    ListNode* remove_element(ListNode* head, int val) {
        ListNode* temp = head;
        if (val == 0) {
            ListNode* new_head = head->next;
            delete head;
            return new_head;
        }
        for (int i = 0; i < val - 1; i++) {
            temp = temp->next;
        }
        ListNode* remove = temp->next;
        temp->next = temp->next->next;
        delete remove;
        return head;
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = length_of_linkedlist(head);
        int val = k - n;
        return remove_element(head, val);
    }
};
