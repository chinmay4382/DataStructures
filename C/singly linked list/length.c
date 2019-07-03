#include<stdio.h>
#include<stdlib.h>

struct Node { 
int data; 
struct Node *next; 
}; 
struct Node *head=NULL;


void length(){
	int count=0;
struct Node *curr=head;
while(curr!=NULL){
	curr=curr->next;
	count++;
}
printf("%d",count);

}

void append(int data){
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



void main(){
append(1);
append(2);
append(3);
append(4);	
length();
}
