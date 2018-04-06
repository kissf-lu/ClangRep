#include <stdio.h>

int main(void)
{
	int dogs = 0;

	printf("How many dogs do you want?\n");
	scanf_s("%d", &dogs);
	printf("are you sure dogs num: %d", dogs);
	printf("end!");

	return 0;
}