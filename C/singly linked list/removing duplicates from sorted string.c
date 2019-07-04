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

void removeDuplicates()
{
	struct Node *curr = head;
	struct Node *next_next;
	if(curr == NULL)
		return;
		
	while(curr->next != NULL)
	{
		if(curr->data == curr->next->data)
			{
			next_next =curr->next->next;
			free(curr->next);
			curr->next=next_next;
			}	
		else
			{
			curr=curr->next;
			}
	}
}

//void printList(struct Node *n) 
void printList() 
{ 
struct Node *n =head; 

  while (n != NULL) 
  { 
     printf(" %d ", n->data); 
     n = n->next; 
  } 
} 

int main()
{
push(13);
push(13);
push(14);
push(15);
push(16);
printList();
removeDuplicates();
printList();	
	
}
