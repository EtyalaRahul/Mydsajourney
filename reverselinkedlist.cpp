class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr;
        std::stack<int> ans;  
        ListNode* temp = head;
        
        while (temp != nullptr) {
            ans.push(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        while (temp != nullptr) {
            temp->val = ans.top();
            ans.pop();
            temp = temp->next;
        }
        
        return head;
    }
};

