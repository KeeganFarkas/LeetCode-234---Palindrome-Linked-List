// Runtime: 270ms - Beats 85.62%
// Memory: 132.6MB - Beats 6.76%
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
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        vector<int> reverse_nums;

        while (true){
            nums.push_back(head->val);
            if (!head->next)
                break;
            head = head->next;
        }

        reverse_nums = nums;
        reverse(reverse_nums.begin(), reverse_nums.end());

        if (nums == reverse_nums)
            return true;
        else
            return false;
    }
};
