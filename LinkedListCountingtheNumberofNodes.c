#include <stdio.h>
#include <stdlib.h>

struct Node{
    
    int data;
    struct Node*next;
}*first=NULL;





int main(int argc, char **argv)
{
	int A[]={38,18,28,48,58,69};
    
    create(A,6);
    
    /*display(first);*/
    
    RDisplay(first);
    
    
    printf(" The Linked List Contains %d nodes \n ",Count(first));     //calling the Count function by passing the first Struct node pointer
    printf("The Sum is %d \n " ,RSum(first));
    printf("Max is %d \n",RMax(first));
    
    return(0);
}



void create(int A[],int n){
    
    
    
    
    int i;
    struct Node *t,*last;
    
    
    first=(struct Node*)malloc(sizeof(struct Node));
    
    first->data=A[0];
    first->next=NULL;
    
    
    last=first;
    
    
    for(i=1;i<n;i++){
        
        
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        
        last->next=t;
        last =t;
        
    }
    
    
}


void display(struct Node *p){
    
    
    
    while(p!=NULL){
        
        
        printf("%d ",p->data);
        p=p->next;
    }
    
    
}



void RDisplay(struct Node *p){
    
    if(p!=NULL){
        
        
      
        RDisplay(p->next);
          printf("%d ",p->data);
    }
    
    printf(" \n ");
    
    
}


int Count(struct Node *p){
    
    
    int c=0;           
    
    while(p){           //while p is not null
        
        c++;            // increment c
        p=p->next;      //assign p the value of p->next
    }
    return c;
}


//recursive count function
int RCount(struct Node *p){
    
    
    
    if(p!=NULL)                    //if p is not equal to null
        return RCount(p->next)+1;   //recursive call to Rcount by passing (p->next)
        
        
        else
            return 0;
            
}
