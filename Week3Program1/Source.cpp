#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int max = 0, combo;
	char x[201], y[201], ans[201], mem[201];
	scanf("%s %s", &x, &y);
	for (int i = 0; x[i] != '\0'; i++)
	{
		for (int j = 0; y[j]!='\0'; j++)
		{
			combo = 0;
			if (x[i] == y[j])
			{
				mem[0] = x[i];
				combo++;
				for (int k = 1; x[i + k] != '\0' && y[j + k] != '\0'; k++)
				{
					if (x[i + k] == y[j + k])
					{
						mem[combo] = x[i + k];
						combo++;
						if (combo > max)
						{
							max = combo;
							for (int n = 0; n < max; n++)
							{
								ans[n] = mem[n];
							}
						}
					}
					else
					{
						
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < max; i++)
	{
		printf("%c", ans[i]);
	}
}