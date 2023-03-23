#include <stdio.h>

int main()
{
	int i = 0 , j;

	while(i<100)
	{
		j = 1;
		while(j<10)
		{
			printf("%d ", j);
			j++;
		}

		printf("\n");
		i++;
	}

	return 0;

}
