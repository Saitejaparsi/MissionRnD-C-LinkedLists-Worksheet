/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (K<2||head==NULL)
		return NULL;
	else
	{
		struct node *i, *j;
		int c = 2;
		for (i = head, j = head->next; j!= NULL; j = j->next)
		{
			if (c == K)
			{
				i->next = j->next;
				i = i->next;
				if (j->next!=NULL)
					j=j->next;
				c = 2;
			}
			else
			{
				c++;
				i = j;
			}
		}
		return head;
	}
}