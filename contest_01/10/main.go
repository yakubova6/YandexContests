package main

import "fmt"

func main() {
	var x uint16
	steps := 0

	fmt.Scan(&x)

	for x > 1 {
		if x%2 == 0 {
			x /= 2
			steps += 1
		} else {
			x = 3*x + 1
			steps += 1
		}
	}
	fmt.Println(steps)
}
