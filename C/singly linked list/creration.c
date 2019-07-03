// A simple C program to introduce 
// a linked list 
#include<stdio.h> 
#include<stdlib.h> 

struct Node 
{ 
int data; 
struct Node *next; 
}; 

struct Node *head =NULL; 


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
//struct Node* head = NULL; 
struct Node *second = NULL; 
struct Node *third = NULL; 
	
// allocate 3 nodes in the heap 
head = (struct Node*)malloc(sizeof(struct Node)); 

second = (struct Node*)malloc(sizeof(struct Node)); 
third = (struct Node*)malloc(sizeof(struct Node)); 


head->data = 1; //assign data in first node 
head->next = second; // Link first node with
 
second->data = 2; 
second->next = third; 
	
third->data = 3; //assign data to third node 
third->next = NULL; 
	
printList(); 

return 0; 
} 

