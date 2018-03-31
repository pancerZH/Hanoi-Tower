#include <iostream>

void hanoi(char A, char B, char C, int pans)
{
    if(pans == 0)
        return;

    hanoi(A,C,B,pans-1);
    std::cout<<"move No."<<pans<<" from "<<A<<" to "<<C<<std::endl;
    hanoi(B,A,C,pans-1);
}

int main()
{
    hanoi('A','B','C',3);
    return 0;
}