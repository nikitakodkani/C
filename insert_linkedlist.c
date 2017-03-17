/*
Title: Insert data in linked list

Task:
Complete the insert function in your editor so that it creates a new Node (pass as the Node constructor argument) and inserts it 
at the tail of the linked list referenced by the  parameter. 
Once the new node is added, return the reference to the head node.

Input:
4
2
3
4
1

Output:
2 3 4 1

*/

#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    	struct Node* current;
    	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
    	new_node->data  = data;
    	new_node->next = NULL;
    	if (head == NULL) {
        	head = new_node;
    	} else {
        	current = head;
        	while (current->next!=NULL) {
            	current = current->next;
        	}
        	current->next = new_node;
    	}
    	return head;
    	//Complete this function
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}

int main()
{
	int T,data;
    	scanf("%d",&T);
    	Node *head=NULL;	
    	while(T-->0){
        	scanf("%d",&data);
        	head=insert(head,data);
    	}
  	display(head);
}
