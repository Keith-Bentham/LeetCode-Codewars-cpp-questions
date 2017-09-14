//
// Created by Keith Bentham
//

 struct ListNode {
     int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
     };

class ReverseLinkedList {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !(head -> next)) {
            return head;
        }
        while(head){
            nextNode = head->next;
            head->next = temp;
            temp = head;
            head = nextNode;
        }
        return temp;
    }
};