#include <stdio.h>
#include <stdlib.h>
// declaring the Structure
struct Node{
    
    int data;
    struct Node*next;
}*first=NULL;





int main(int argc, char **argv)
{
	int A[]={38,18,28,48,58,69};     //creating an araay
     
    create(A,6);       //Calling the Create Function
    
       display(first); //calling the display function
    
    RDisplay(first); //calling the recursive display function
    
    
    printf(" The Linked List Contains %d nodes \n ",Count(first));
    printf("The Sum is %d \n " ,RSum(first));
    printf("Max is %d \n",RMax(first));
    
    return(0);
}



void create(int A[],int n){
    
    
    
    
    int i;
    struct Node *t,*last;     //Declaring  a pointer t and last of type struct Node *
    
    
    first=(struct Node*)malloc(sizeof(struct Node)); //Creating a node of size (Struct node)
    
    first->data=A[0];  //assigning the first element of the array to first->data
	
    first->next=NULL;  // assigning NULL to first->next
    
    
    last=first;      //assigning the first node the value of last node
    
    
    for(i=1;i<n;i++){
        
        
        t=(struct Node *)malloc(sizeof(struct Node));      //create n nodes of size struct Node
        t->data=A[i];  // Assigning A[i] to t->data
        t->next=NULL;
        
        last->next=t;
        last =t;
        
    }
    
    
}


void display(struct Node *p){
    
    
    
    while(p!=NULL){
        
        
        printf("%d ",p->data); //printing the elements of linked list
        p=p->next;
    }
    
    
}



void RDisplay(struct Node *p){
    
    if(p!=NULL){
        
        
      
        RDisplay(p->next); //recursive call to RDisplay
          printf("%d ",p->data);
    }
    
    printf(" \n ");
    
    
}
