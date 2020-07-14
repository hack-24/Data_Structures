
 // Max element from Linked List
 
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


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


int Max(struct Node *p)       //Max Function
{
int max=INT32_MIN;           //initializing max to INT_32MIN

while(p)                     //while p is no equal to NULL
{
if(p->data>max)              //check if p->data > max
max=p->data;                 //assign max=p->data
p=p->next;                   //assign p to p->next
}
return max;
}

int RMax(struct Node *p)          //Recursive Max Function
{
int x=0;                         //Inititalixing x to 0

if(p==0)                          //check if p is zero
return INT32_MIN;                 //return INT32_MIN
x=RMax(p->next);                  //RECURSUVE CALL TO RMAX
if(x>p->data)
return x;                         
else
return p->data;
}



int main()
{
int A[]={3,5,7,10,25,8,32,2};
create(A,8);
printf(“Max %d\n”,Max(first);
return 0;
}