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
    int getlength(ListNode* head){
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }

    ListNode* getmid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* reversell(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
    }

    return prev;
}
    bool isPalindrome(ListNode* head) {
        //length of ll
        int len=getlength(head);
        //find mid
        ListNode* mid=getmid(head);
        //update mid as per even/odd length
        //even length matlab same mid use karo
        //odd length matlab mid+1 use karo
        ListNode*finalMid=NULL;
        if(head==NULL || head->next==NULL)
            return true;
           
        if(len%2==0){
            //even
            finalMid=mid;
        }
        else{
            //odd
            finalMid=mid->next;
        }
        //reverse second half
       finalMid = reversell(finalMid);
        //compare 
        ListNode*temp=head;
        while(temp!=NULL && finalMid!=NULL){
            if(temp->val!=finalMid->val){
                return false;
            }
            temp=temp->next;
            finalMid=finalMid->next;
        }
        return true;
    }
};