// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     void removeDuplicates(ListNode* curr){
//         while(curr->next!=NULL)
//        { 
//             if(curr->val==curr->next->val){
//             ListNode* temp=curr->next;
//             curr->next=curr->next->next;
//             temp->next=NULL;
//             delete temp;
//         }
//             else
//                 curr=curr->next;
//        }
//     }
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL)
//             return NULL;
//         if(head->next==NULL){
//             return head;
//         }
//         ListNode* curr=head;
//          removeDuplicates(curr);
//              return head;
//     }
// };
class Solution {
public:
 ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;

        }
        ListNode*temp=head;
        while(temp->next!=NULL){
            if(temp->val==temp->next->val){
                ListNode*next_next=temp->next->next;
                temp->next->next=NULL;
                temp->next=next_next;
            }else{
                temp=temp->next;
            }
        }
        return head;
    }

};