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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 != nullptr) {
            return list2;
        }
        if (list2 != nullptr) {
            if (list1->val == list2->val) {
                ListNode *temp = list1->next;
                list1->next = list2;
                list1->next->next = mergeTwoLists(temp,list2->next);
            } else if (list1->val < list2->val) {
                list1->next = mergeTwoLists(list1->next,list2);
            } else {
                ListNode *temp = list1;
                list1 = list2;
                list2 = list2->next;
                list1->next = temp;
                list1->next = mergeTwoLists(list1->next,list2);
            }
        } 
        return list1;  
    }
};
