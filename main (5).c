#include <stdio.h>
void main()
{
    int mark;
    printf("Enter the mark you wish to assign a grade");
    scanf("%d", &mark);
    if(mark<0 ||mark > 100)
    {
        printf("Wrong input");
    }
    else if(mark<60)
    {
        printf("fail");
    }
    else if(mark>=75 && mark<80)
    {
        printf("B");
    }
    else if(mark>=70 && mark<75)
    {
        printf("C");
    }
    else if(mark>=60 && mark<70)
    {
        printf("D");
    }
    else
    {
        printf("A");
    }
    return 0;
}
