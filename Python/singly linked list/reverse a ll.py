class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def push(self,new_data):
        new_node=Node(new_data)
        new_node.next=self.head

        self.head=new_node

    def print(self):
        temp= self.head
        while(temp):
            print(temp.data, end=' ')
            temp=temp.next

    def reverse(self):
        prev = None
        curr = self.head
        while(curr is not None):
            next=curr.next
            curr.next=prev
            prev=curr
            curr=next
        self.head = prev



llist = LinkedList() 
llist.push(20) 
llist.push(4) 
llist.push(15) 
llist.push(10)
llist.print()
print('\n')
llist.reverse()
llist.print()
