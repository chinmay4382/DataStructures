#include<stdio.h>
#include<stdlib.h>

struct Node 
{ 
int data; 
struct Node *next; 
}; 

struct Node *head =NULL; 
struct Node *head1 =NULL; 

void append(int data)
{
struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data=data;
new_node->next=NULL;
struct Node *tail=head1;
if(head1==NULL)
	{
	head1=new_node;
	return;
	}
while(tail->next!=NULL)
	{
	tail=tail->next;
	
	}
tail->next=new_node;

}


void push(int data)
{
struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data=data;
new_node->next=head;
head=new_node;

}

int length()
	{
int count=0;
struct Node *curr=head;
	while(curr != NULL)
		{
			count++;
		}
return count;
	}

void pallin()
	{
struct Node *curr=head;
struct Node *curr1=head1;
int flag=1;
while(curr!=NULL || curr1!=NULL)
{
	if(curr->data !=curr1->data)
	{
		flag=0;
		break;
	}
	
}

if(flag==0)
{
printf("not a pallindrome");

}
else{
	printf("It is a pallindrome");
}
		
   }
		
void clone()
{
struct Node *curr=head;
printf("reached here ");
	while(curr != NULL)
		{
			append(curr->data);
			curr=curr->next;			
		}
	
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
void print1()
{
struct Node *node = head1;
	while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
}


int main()
{
	
push(1);
push(2);
push(2);
push(1);
print();
printf("\n");
clone();
print1();	
printf("\n");
reverse();
print();
printf("\n");
pallin();
	


}
