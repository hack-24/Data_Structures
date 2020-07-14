//Display a Linked List


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
struct Node *t,*last;                                //declaraing a pointer t and last of type struct Node
first=(struct Node *)malloc(sizeof(struct Node));    //creating a node in heap using malloc
first->data=A[0];                                    // assigning the first value in link list to data[0]
first->next=NULL;
last=first;                                           //Assigning value of first node to last
for(i=1;i<n;i++)
{
t=(struct Node*)malloc(sizeof(struct Node));           
t->data=A[i];                                         //Assigning the value of A[i] to t->data
                            
t->next=NULL;                                          // Assigning t->next =NULL
last->next=t;                                          // Assigning last->next =t 
last=t;                                                //Assigning last=t
}
}


void Display(struct Node *p)                           //Display Function
{ 
while(p!=NULL)                                        //Checking if  p is NULL or not
{
printf("%d ",p->data);                                //printing the value inside node
p=p->next;                                            //assigning the value of p->next to p
}

}




void RDisplay(struct Node *p)                          //Recursive Display function
{
if(p!=NULL)
{
RDisplay(p->next);                                     //Recursive Call to RDisplay
printf("%d ",p->data);                                 //printing the data
}
}



int main()
{
struct Node *temp;
int A[]={3,5,7,10,25,8,32,2};                           //Array decalaration and initialization

create(A,8);                                             // calling create function
Display(first);                                          //Calling Display Function
return 0;
}