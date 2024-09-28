package main

import (
	"fmt"
)

func main() {
	var leng int
	fmt.Scan(&leng)

	var results []float64 = make([]float64, leng)

	for i := range results {
		fmt.Scan(&results[i])
	}

	fmt.Print(results[0], " ")

	for i := 1; i < leng-1; i++ {
		fmt.Print(((results[i-1] + results[i] + results[i+1]) / 3), " ")
	}
	fmt.Print(results[leng-1])
}
