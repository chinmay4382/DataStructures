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

void append(int data)
{
struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data=data;
new_node->next=NULL;
struct Node *tail=head;
if(head==NULL)
	{
	head=new_node;
	return;
	}
while(tail->next!=NULL)
	{
	tail=tail->next;
	
	}
tail->next=new_node;

}
void insertAfter(int data,int pos)
{
struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data=data;
int i=pos;
struct Node *tail=head->next;
struct Node *prev=head;

while(i!=1)
	{
	tail=tail->next;
	prev=prev->next;
	i--;
   }

new_node->next=tail;
prev->next=new_node;
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
append(1);
append(2);
append(3);
push(6);
push (3);
insertAfter(10,2);
push(9);
print();	
}
