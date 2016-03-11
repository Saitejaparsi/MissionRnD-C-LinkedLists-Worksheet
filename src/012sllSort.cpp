/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int data;
	struct node *next;
}s;
void swap(s *i, s *j);
void sll_012_sort(struct node *head){
	s *i, *j,*k;
	int e=0;
	i = head;
	for (k = head; k->next != NULL; k = k->next);
	while (i != NULL)
	{
		e = 0;
		for (j = i; j !=k; j = j->next)
		{
			if ((j->data) > (j->next->data))
			{
				swap(j, j->next);
				e = 1;
			}
		}
		if (e == 0)
			break;
		else
			k = j;
	}
}
void swap(s *i, s *j)
{
	int temp;
	temp = i->data;
	i->data = j->data;
	j->data = temp;
}