#include <stdio.h>
 
int main()
{
	int number=1;
	int squared=0;

	printf("Enter a number to show all squares from 1 up until the number\n");
	scanf("%d",&squared);

	int limit=squared+1;

	printf("n | n^2\n");
	printf("-------------\n");
	while(number<limit) {
	squared=number*number;
	printf("%d | %d\n", number, squared);
	number++;
	}
	
return(0);
}
