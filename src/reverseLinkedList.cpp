/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node* reverseLL(struct node* head, struct node* prev);

struct node * reverseLinkedList(struct node *head) {
	
	return reverseLL(head,NULL);
}


struct node* reverseLL(struct node* head, struct node* prev){

	if (head == NULL)
		return head;

	/*if it has one node*/
	if (head->next == NULL){
		head->next = prev;
		return head;

		}
	else{

		struct node* temp = head->next;

		head->next = prev;

		head = reverseLL(temp, head);

		return head;
		}


	}