#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>



void first_line(int c)
{
	int i = 0;
	while (i <= c)
	{
		printf("%i", c);
		i++;
	}
	printf("\n");
}

void second_line(int c)
{
        int i = 0;
        while (i <= c)
        {
		if (i == 0)
		{
                	printf("%i", c);
		}
		if (i == c)
		{
			printf("%i", c);
		}
		else
		{
			c -= 1;
			printf("%i", c);
		}
		i++;
        }
        printf("\n");
}

int main() 
{

    int n;
    scanf("%d", &n);
    first_line(n);
    second_line(n);
    return 0;
}
