#include<stdio.h>
main()
{
	int a=10,b=5;
    int *p1, *p2,*p3;
    p1=&a;//pointer
    p2=&b;
    
    p3=p2;
    p2=p1;
    p1=p3;
    //printf("%d",sizeoff(double));
    printf("%u=>%d\n",p1,*p1);
	printf("%u=>%d\n",p1-1,*(p1-1));    
}
