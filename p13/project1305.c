#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	while(argc-- != 1)
	{
		sum += atoi(argv[argc]);
	}
	
	printf("Total: %d", sum);
	
	return 0;
}