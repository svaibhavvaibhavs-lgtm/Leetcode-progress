class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* c=NULL;
        Node* nh=NULL;
        Node* newnode=NULL;
         Node* r=head;
         map<Node*,Node*>m;
        while(r!=NULL)
          {
            if(nh==NULL)
             {
                newnode= new Node(r->val);
                c=newnode;
                nh=c;
                m[r]=c;
             }
             else
             {
             newnode=new Node(r->val);
             c->next=newnode;
             c=c->next;
             m[r]=c;
             }
             r=r->next;
          }
          c=nh;
          r=head;
         while(r!=NULL)
         {
            c->random=m[r->random];
             r=r->next;
             c=c->next;
         }
          return nh;
    }

};