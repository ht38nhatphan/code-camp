// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/list-cycle.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::detectCycle(ListNode *A) {
    if (A == NULL)
        return NULL;
    if (A == A->next)
        return A;
    if (A->next == NULL)
        return NULL;
    ListNode *slow = A, *fast = A;
    while (fast && fast->next) {
        fast = fast->next;
        fast = fast->next;
        slow = slow->next;
        if (slow == fast) {
            break;
        }
    }
    if (slow != fast)
        return NULL;
    ListNode *curr = A;
    while (curr != slow) {
        curr = curr->next;
        slow = slow->next;
    }
    return curr;
}
