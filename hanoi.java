public class hanoi
{
    public static void hanoi_(char A, char B, char C, int pans)
    {
        if(pans == 0)
            return;
        
            hanoi_(A,C,B,pans-1);
            System.out.printf("move No.%d from %c to %c\n", pans, A, C);
            hanoi_(B,A,C,pans-1);
    }

    public static void main(String[] args)
    {
        hanoi_('A','B','C',3);
    }
}