#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *next;
}*first=NULL;


void create(int A[],int n)
{
int i;
struct Node *t,*last;
first=(struct Node *)malloc(sizeof(struct Node));
first->data=A[0];
first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
t=(struct Node*)malloc(sizeof(struct Node));
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}
}


struct Node * LSearch(struct Node *p,int key)              //Linear Search Function
{
struct Node *q;                                           //declaring a pointer of type struct node
while(p!=NULL)                                            //while loop to check if p is not equal to null
{
if(key==p->data)                                         //Checking if key is equal to p->data
	{
q->next=p->next;                                         //assign p->next to q->next
p->next=first;                                           //assign first to p->next
first=p;                                                 //assign first to p
return p; 
}
q=p;
p=p->next;
}
return NULL;
}



struct Node * RSearch(struct Node *p,int key)              //RecursiveSearch function
{
if(p==NULL)                                                //check if p is null then return 
return NULL;
if(key==p->data)                                           //if key is equal to p->data return p
return p;
return RSearch(p->next,key);                               //Recursive call to RSearch passing p->next and Key




int main()
{
struct Node *temp;
int A[]={3,5,7,10,25,8,32,2};
create(A,8);
temp=Search(first,8);
printf(“%d”,temp->data);
return 0;
}