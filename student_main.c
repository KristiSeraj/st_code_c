#include <stdio.h>
#include "student.h"

int main(void)
{
	int cp;
	struct student s1, s2;
	
	init_student(&s1, 12, "Bob", 95);
	init_student(&s2, 15, "John", 87);
	print_student(&s1);
	print_student(&s2);
	cp = compare_average(&s1, &s2);
	printf("%i\n", cp);
	
	return (0);
}
