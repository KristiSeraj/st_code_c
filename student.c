#include <stdio.h>
#include "student.h"
#include <stdlib.h>

void init_student(struct student *st, int id, char *name, float average)
{
	if (st)
	{
		st->id = id;
		st->name = name;
		st->average = average;
	}
}
void print_student(struct student *s)
{
	if (s == NULL)
		return;
	else
		printf("%s, %i, %f\n", s->name, s->id, s->average);
}
int compare_average(struct student *s1, struct student *s2)
{
	if (s1->average > s2->average)
		return (1);
	else if (s1->average < s2->average)
		return (-1);
	else
		return (0);
}
