#include <stdio.h>
#include <conio.h>

void main()
{
    // Press ANY Key

    label1 :
        printf("Hello :) ...");
        getch();
    goto label1;

}