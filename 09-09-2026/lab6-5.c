//Code by Arya
//09-09-2026
# include <stdio.h>
# include <string.h>

void palin(char *input)
{
	int len = strlen(input);
	int c= (len/2)-1;
	for(int i=0; i<(len/2)-1;i++){
		if(input[i]==input[len-2-i]){
			c--;
		}
	}
		if(c==0){
			printf("Output: Palindrome\n");
		}else{
			printf("Output: Not a Palindrome\n");
		}
	
}

	
int main()
{
	char input[100];
	printf("Input : ");
	fgets(input, sizeof(input), stdin);
	palin (input);
	return 0;
}
