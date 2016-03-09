/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int num;
	struct node *next;
};
struct node * numberToLinkedList(int N) {
	if(N < 0)
		N = -N;
	struct node *head=NULL,*cur;
	if (N != 0){
		int r, m = N, i = 1;;
		while(m>0)
		{
			head= (struct node *)malloc(sizeof(struct node));
			head->next= NULL;
			r = m % 10;
			m = m / 10;
			if (i!=0){
				head->num = r;
				head->next = NULL;
				cur = head;
				i = 0;
			}
			else
			{
				head->num = r;
				head->next = cur;
				cur = head;
			}
		}
		return head;
	}
	else{
		head = (struct node *)malloc(sizeof(struct node));
		(head->num) = N;
		(head->next) = NULL;
		return head;
	}
}
//over
