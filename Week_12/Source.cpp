#include<stdio.h>
#include<string.h>
int Parin(char* x, int n)
{
	int check = 0;
	if (n > 0)
	{
		check = 1;
		for (int i = 0; i < n / 2; i++)
		{
			if (x[i] != x[n - 1 - i])
			{
				printf("Not Palindrome");
				check = 0;
				break;
			}
			else
			{
				check = 1;
			}
		}
	}
	return check;
}
int main()
{
	char a[100];

	int n;
	scanf("%[^\n]", a);
	n = strlen(a);
	if (Parin(a, n) == 1)
	{
		printf("Palindrome");
	}
	return 0;
}