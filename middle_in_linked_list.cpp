class Solution {
public:
    int length_of_linked_list(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {  
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* find_middle(ListNode* list, int count) {
        ListNode* temp = list;
        int cnt = 0;
        while (cnt < count) {  
            temp = temp->next;
            cnt++;
        }
        return temp;
    }

    ListNode* middleNode(ListNode* head) {
        int length = length_of_linked_list(head);
        int middle = length / 2;
        return find_middle(head, middle);  
    }
};

