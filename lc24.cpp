class Solution {
public:
    ListNode* check(ListNode* h,int c,int k)
    {
        if(c==0||h==NULL )
         return NULL;
         if(c<=1 || k==0)
         return h;
         int i;
        ListNode* pre=NULL;
        ListNode* cur=h;
        ListNode*front=cur->next;
   for(i=1;i<=c;i++)
   {
    cur->next=pre;
    pre=cur;
    cur=front;
    if(front!=NULL)
    front=front->next;
    if(i%2==0)
    {
        pre->next->next=check(cur,c-2,k--);
        return pre;
    }
     
   }
         return NULL;
      
    }
    ListNode* swapPairs(ListNode* head) {
        int c=1,k;
        ListNode* cu=head;
        if(head==NULL || head->next==NULL)
         return head;
        while(cu->next!=NULL)
         {
            c++;
         cu=cu->next;
         }
         k=c/2;        
        return check(head,c,k);
    }
};