/* Program 1.1 from PTRTUT10.TXT   6/10/97 */

#include <stdio.h>

int a, b;
int *ptr;

int main(void)
{
    a = 1;
    b = 2;
    ptr = &b;
	printf("ptr: %d\n",ptr);
	printf("ptr: %d\n",ptr);
	showNumber(b);
	return 0;
}
void showNumber(int number){
	printf("%d\n",number);
}