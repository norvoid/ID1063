//Code by Arya 
//09-09-=2026
# include <stdio.h>

void output(char *input, char cha);
int main()
{
	char input[100];
	char cha;
	printf("Input :");
	fgets(input, sizeof(input), stdin);
	printf("\ncharacter :");
	scanf("%c", &cha);
	output(input,cha);
	return 0;
}

	

void output(char *input, char cha)
{
	for(int i=0; i<sizeof(input); i++){
		if(input[i]==cha){
			printf("Output :%d\n", i);
			return;
		}
	}
	printf("Output :-1");
}
