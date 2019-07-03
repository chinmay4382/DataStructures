#include<stdio.h>
#include<stdlib.h>

struct Node 
{ 
int data; 
struct Node *next; 
}; 

struct Node *head =NULL; 

void push(int data)
{
struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data=data;
new_node->next=head;
head=new_node;

}

void reverse()
{
	struct Node *prev=NULL,*curr=head,*next=NULL;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}	head =prev;
}

void print()
{
struct Node *node = head;
	while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
}


void main()
{
push(1);
push(2);
push(3);
push(4);
print();
printf("\n");
reverse();
print();
}
