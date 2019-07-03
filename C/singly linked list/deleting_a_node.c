//deleting a node based on the given key
#include<stdio.h>
#include<stdlib.h>

struct Node 
{ 
int data; 
struct Node *next; 
}; 
struct Node *head=NULL;

void append(int data)
{
struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data=data;
new_node->next=NULL;
struct Node *tail=head;
if(head==NULL){
	head=new_node;
	return;
	}
while(tail->next!=NULL){
	tail=tail->next;
	
	}
tail->next=new_node;

}
void delete_node(int key)
{
	struct Node *curr=NULL , *prev = NULL;
	if(head->data==key){
		curr=head;
		head =head->next;
		free(curr);
		return;
	}
	else{
	prev=head;
	curr= head->next;
	while(curr->data!=key &&curr->next !=NULL )
	{
	prev = curr;
	curr = curr->next;
	}
	if(curr->data==key){
	prev->next = curr->next;
	free(curr);
	return;
	}
	else{
		printf("element not found");
	}
}	
}
void prinqqt(int key){
struct Node *curr = NULL, *prev=NULL;
 prev=head;
 curr=head->next;

 
	while (curr != NULL) 
  { 
     printf(" %d ", curr->data);
	  printf(" %d ", prev->data); 
 		if(key==curr->data){
 			printf("FOUND");
 			break;
		 }
     curr = curr->next; 
  	 prev= prev->next;
  } 
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
append(4);	
append(5);	
 delete_node(6);
print();
	
}
