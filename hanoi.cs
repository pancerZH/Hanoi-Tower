using System;
namespace Hanoi
{
    class Hanoi
    {
        static void hanoi(char A, char B, char C, int pans)
        {
            if(pans == 0)
                return;
            
            hanoi(A,C,B,pans-1);
            Console.WriteLine("move No.{0} from {1} to {2}", pans, A, C);
            hanoi(B,A,C,pans-1);
        }

        static void Main(string[] args)
        {
            hanoi('A','B','C',3);
        }
    }
}