//
// Created by Keith Bentham
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class DeleteNodeInLinkedList {
public:
    void deleteNode(ListNode *node) {
        *node = *node->next;
    }
};