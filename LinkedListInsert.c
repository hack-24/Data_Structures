//Linked List Insert 


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


void Display(struct Node *p)
{
while(p!=NULL)
{
printf("%d ",p->data);
p=p->next;
}
}
void Insert(struct Node *p,int index,int x)  //Insert Function 
{
struct Node *t;                              //declaring a pointer t of type Struct Node
int i;
if(index < 0 || index > count(p))           //Checking the index if it is less than 0 or greater than the number of nodes in the linked list
return;
t=(struct Node *)malloc(sizeof(struct Node));     //Creating a node in heap using malloc 
t->data=x;                                        //assigning t the value of x
if(index == 0)
{
t->next=first;                 //if the node is first node in linked list
first=t;                       //assign first the value of t
}
else
{
for(i=0;i<index-1;i++)     
p=p->next;             //assigning the value of p = p->next
t->next=p->next;        //assigning t->next p->next
p->next=t;              //assigning p->next =t
}
}


int main()
{
int A[]={10,20,30,40,50};
create(A,5);
Insert(first,0,5);

Display(first);
return 0;
}