#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void arithmetic()
{
	int x = 6;

	if (fork() == 0)
		printf("p1 x = %d\n", --x);
	printf("p2 x = %d\n", ++x);
}
int main()
{
	arithmetic();
	return 0;
}