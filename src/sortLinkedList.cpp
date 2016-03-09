/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *i, *j,*temp;
	int e = 0;
	if (head != NULL){
		i= head;
		while (i!= NULL){
			e = 0;
			j = head;
			temp = j;
			while (j->next != NULL){
				if ((j->next)->num < j->num)
				{
					if (j == head){
						i = head;
						j = j->next;
						head = j;
						i->next = j->next;
						head->next = i;
					}
					else
					{
						i = j;
						j = j->next;
						i->next = j->next;
						j->next =i;
						temp->next = j;
					}
					e = 1;
				}
				temp = j;
				j = j->next;
			}
			if (e == 0)
				return head;
		}
	}
	return NULL;
}
//over