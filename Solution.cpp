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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int acarreo, sum;
        bool empty1 = false, empty2 = false;
        
        sum = l1->val + l2->val;
        acarreo = sum / 10;
        //cout << acarreo;
        sum = sum % 10;
        //cout << sum;
        ListNode* res = new ListNode(sum);
        ListNode* tmp = res;
        l1 = l1 -> next;
        l2 = l2 -> next;
        
       if(l1 == NULL){ empty1 = true; }
       if(l2 == NULL){ empty2 = true; }
        while(!empty1 && !empty2){
            sum = l1->val + l2->val + acarreo;
            if(sum < 10){
                res->next = new ListNode(sum);
                res = res -> next;
                acarreo = 0;
            }
            else{
                acarreo = sum / 10;
                sum = sum % 10;
                res->next = new ListNode(sum);
                res = res -> next;
            }
            l1 = l1->next;
            l2 = l2->next;
            if(l1 == NULL){ empty1 = true; }
            if(l2 == NULL){ empty2 = true; }
        }
        while(l1 != NULL){  
            sum = l1->val + acarreo;
            if(sum < 10){
                res->next = new ListNode(sum); res = res -> next; l1 = l1->next; acarreo = 0;
            }
            else{
                acarreo = sum / 10;
                sum = sum % 10;
                res->next = new ListNode(sum);
                res = res -> next;
                l1 = l1->next;
            }
        }
        while(l2 != NULL){  
            sum = l2->val + acarreo;
            if(sum < 10){
                res->next = new ListNode(sum); res = res -> next; l2 = l2->next; acarreo = 0;
            }
            else{
                acarreo = sum / 10;
                sum = sum % 10;
                res->next = new ListNode(sum);
                res = res -> next;
                l2 = l2->next;
            }
        }
        if(acarreo > 0 && ((l1 == NULL) && (l2 == NULL))){
            res->next = new ListNode(acarreo);
        }
        return tmp;
    }
};
