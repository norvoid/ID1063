//Code by Arya
//09-09-2026
# include <stdio.h> 

void printBorder(int count);

int main()
{
	int count;
	printf("Enter the count");
	scanf("%d", &count);
	printBorder(count);
	return 0;
}

void printBorder(int count)
{
	for(int i=0;i<count; i++)
	{
		printf("*");
	}
	printf("\n");
}

