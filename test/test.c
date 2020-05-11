#include <stdio.h>
void func(int *p) {
    int i;
    if (!p)
        func(&i);
    else if (p < &i)
        printf("Stack grows upward\n");
    else
        printf("Stack grows downward\n");
}

void test(int a, int b, int c)
{
	int d;
	int e;
	int f;
	printf("%d, %d, %d,%d, %d, %d\n", &a, &b, &c, &d, &e, &f);
}

void main()
{
	test(5, 6, 7);
	func(NULL);
}

