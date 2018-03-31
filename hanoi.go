package main

import "fmt"

func hanoi(A, B, C string, pans int) {
	if pans == 0 {
		return
	}
	hanoi(A, C, B, pans-1)
	fmt.Printf("move NO.%d from %s to %s\n", pans, A, C)
	hanoi(B, A, C, pans-1)
}

func main() {
	hanoi("A", "B", "C", 5)
}
