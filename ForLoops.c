#include <stido>

int main()
{
	int n = 12;
	
	printf("Enter any value:");	
	scanf("%d", &n);	
	for (int i = 1 ; i <= n ;  i++)
	{
		printf("Counting %d\n", i);
	}
	
	printf("Counting Ends Here!\n");
	
	return 0;
}
