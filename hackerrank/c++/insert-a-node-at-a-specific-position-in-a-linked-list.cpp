// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/insert-a-node-at-a-specific-position-in-a-linked-list.html .

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *head, int data,
                                           int position) {
    auto new_node = new SinglyLinkedListNode(data);
    if (position == 0) {
        new_node->next = head;
        return new_node;
    }
    auto pre = head, curr = head;
    while (position--) {
        pre = curr;
        curr = curr->next;
    }
    pre->next = new_node;
    new_node->next = curr;
    return head;
}
