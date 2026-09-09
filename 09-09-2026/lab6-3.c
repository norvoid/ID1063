//Code by Arya
//09=-09-2026
# include<stdio.h>

void swap(char *name); 
int main()
{
	char name[100];
	printf("Enter name: ");
	fgets(name, sizeof(name), stdin);
	swap(name);
	return 0;
}


void swap(char *name)
{
	char t;
	t = name[0];
	name[0] = name[1];
	name[1] = t;
	printf("Swapped name:%s", name);
}


