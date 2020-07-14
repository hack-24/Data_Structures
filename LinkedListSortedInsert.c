//Inserting in a Sorted Linked List
#include <stdio.h>
#include <stdlib.h>



struct Node
{
int data;
struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;



void Display(struct Node *p)
{
while(p!=NULL)
{
printf("%d ",p->data);
p=p->next;
}
}
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


void SortedInsert(struct Node *p,int x)       //SortedInsert Function
{
struct Node *t,*q=NULL;                       //declaring a pointer t and q of type struct Node 

t=(struct Node*)malloc(sizeof(struct Node));     //creating a node in heap using malloc
t->data=x;                                       // assign x to t->data
t->next=NULL;                                    //set t->next ==NULL
if(first==NULL)                                  //if linked list is empty

first=t;                                         // assign t to first                   
else
{
while(p && p->data<x)                            // check if data to be inserted is less than the node data
{
q=p;                                             //assign p to q
p=p->next;                                       //assign p->next to p
}
if(p==first)                                      //if the node is to be inserted at first position
{
t->next=first;                                   //assign first to t->next                             
first=t;                                         //assign t to first
}  
else
{
t->next=q->next;                                //assign q->next to t->next
q->next=t;                                      //assign t to q->next
}
}
}



int main()
{
int A[]={10,20,30,40,50};
create(A,5);
printf(“%d\n”,SortedInsert(first,15));
Display(first);
return 0;
}