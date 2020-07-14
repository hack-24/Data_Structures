
  //Count and Sum Linked List
	   
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



int count(struct Node *p)      //Count Function 
{
int l=0;                      // initializing l to 0
while(p)                      // Checking While p is not equal to Null
{
l++;                         // Incrementing l
p=p->next;                   //assigning p to p->next
}
return l;                   //return l
}


int Rcount(struct Node *p)             //Recursive Count function
{ 

if(p!=NULL)                             //Checking if p is not NULL
return Rcount(p->next)+1;               //RECURSIVE CALL TO RCOUNT
else
return 0;

}



int sum(struct Node *p)                   //sum function 
{
int s=0;
while(p!=NULL)                           ///While p is not NULL 
{                         
s+=p->data;                               //increment s by s+=p->data
p=p->next;                                //Assign p equals p->next
}
return s;                                 //return s
}



int Rsum(struct Node *p)                  //Recursive Count function
{
if(p==NULL)                               //checking if p is null
return 0;
else
return Rsum(p->next)+p->data;              //recursive call to Rsum
}


int main()
{
int A[]={3,5,7,10,25,8,32,2};
create(A,8);
printf(“Count %d\n”,count(first));
printf(“Sum %d\n”,sum(first);
return 0;
}