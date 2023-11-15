#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char str1ing1[20];
	char string2[] ="string literal";
	int i;

	printf("Enter a string: ");
	scanf("%s", str1ing1);

	printf("string1 is %s\nstring2 is: %s\n"
		"string1 with spaces between characters is: \n", 
		str1ing1, string2);

	for (int i = 0; str1ing1[i] != '\0'; i++) 
		printf("%c ", str1ing1[i]);
	
	printf("\n");
	system("pause");
	return 0;
}