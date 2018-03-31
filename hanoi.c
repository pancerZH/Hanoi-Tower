#include <stdio.h>

void hanoi(char A, char B, char C, int pans)
{
    if(pans == 0)
        return;

    hanoi(A,C,B,pans-1);
    printf("move No.%d from %c to %c\n", pans, A, C);
    hanoi(B,A,C,pans-1);
}

int main()
{
    hanoi('A','B','C',3);
    return 0;
}