//#include <stdio.h>
//void count_my(char c[])
//{
//	int i=0;
//	int a=0, b=0,e=0, d=0;
//	while (i <5)
//	{
//		
//			if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
//			{
//				a = a + 1;
//			}
//			else if (c[i] >= '0' && c[i] <= '9')
//			{
//				b = b + 1;
//			}
//			else if (c[i] == ' ')
//			{
//				e = e + 1;
//			}
//			else
//			{
//				d = d + 1;
//			}
//
//		
//		i++;
//	}
//	printf("%d,%d,%d,%d\n", a, b, e,d);
//}
//int main(void)
//{
//	int i = 0;
//	char  c[5];
//	for (i = 0; i < 5; i++)
//	{
//		c[i] = getchar();
//		getchar();
//	}
//	i = 0;
//	count_my(c);
//	while (i <5)
//	{
//		printf("%c", c[i]);
//		i++;
//	}
//	return 0;
//}
#include <stdio.h>
void main(void)
{
	
	char c;
	int a=0, b=0, e=0,d=0;
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			a = a + 1;
		}

		else
			if (c >= '0' && c <= '9')
			{
				b = b + 1;
			}
			else
				if (c == ' ')
				{
					e = e + 1;
				}

				else
				{
					d = d + 1;
				}
	}
		printf("%d,%d,%d,%d", a,b,c,d);
		
	}

