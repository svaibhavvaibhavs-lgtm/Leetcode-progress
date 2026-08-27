class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i=0,j=0,c=0;
        ListNode*a=new ListNode();
        ListNode* ans=a;
        ListNode*a1=l1;;
        ListNode*a2=l2;
        ListNode*ne=new ListNode();


        while(a1!=NULL && a2!=NULL)
          {ne=new ListNode((a1->val+a2->val+c)%10);
            if(a==NULL)
              a=ne;
            else
            { a->next=ne;
             a=a->next; }
              c=(a1->val+a2->val+c)/10;
              a1=a1->next;
              a2=a2->next;
          }
          while(a1!=NULL)
          {
            ne=new ListNode((a1->val+c)%10);
            if(a==NULL)
            a=ne;
            else
            {a->next=ne;
            a=a->next;}
            c=(a1->val+c)/10;
            a1=a1->next;
          }
         while(a2!=NULL)
          {
           ne=new ListNode((a2->val+c)%10);
            if(a==NULL)
            a=ne;
            else
            {a->next=ne;
            a=a->next;}
            c=(a2->val+c)/10;
            a2=a2->next;
          }
          if(c>0)
           {ne=new ListNode(c);
           a->next=ne;
           }
           return ans->next;
    }   
};