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
	
struct Node *curr =head,*curr1 = head;

if(curr==NULL)
{
	return;
}
while(curr != NULL)
	{
		printf(" %d ",curr->data);
			curr1=head;
		while (curr1 != NULL)
			{
				
				printf(" %d ",curr1->data);
					curr1 =curr1->next;

			}
	curr =curr->next;
	
	}	
	
		
}

void removeDups() 
{ 
    struct Node *ptr1, *ptr2, *dup; 
    ptr1 = head; 
  
    while (ptr1 != NULL && ptr1->next != NULL) 
    { 
        ptr2 = ptr1; 
  

        while (ptr2->next != NULL) 
        { 
            if (ptr1->data == ptr2->next->data) 
            { 
                dup = ptr2->next; 
                ptr2->next = ptr2->next->next; 
                free(dup); 
            } 
            else 
                ptr2 = ptr2->next; 
        } 
        ptr1 = ptr1->next; 
    } 
} 



void printList() 
{ 
struct Node *n =head; 

  while (n != NULL) 
  { 
     printf(" %d ", n->data); 
     n = n->next; 
  } 
}

void main()
{
	push(1);
	push(2);
	push(3);
	push(1);
	push(1);
	printList();
	removeDups();
	printf("\n");
	printList();
	
}
