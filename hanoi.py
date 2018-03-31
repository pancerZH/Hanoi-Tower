def hanoi(A, B, C, pans):
    if pans is 0:
        return

    hanoi(A,C,B,pans-1)
    print('move No.{} from {} to {}'.format(pans,A,C))
    hanoi(B,A,C,pans-1)

hanoi('A','B','C',3)