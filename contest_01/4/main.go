package main

import "fmt"

func main() {
	var s int
	fmt.Scan(&s)

	summa5 := s / 5000
	s %= 5000
	summa1 := s / 1000
	s %= 1000
	summa05 := s / 500
	s %= 500
	summa02 := s / 200
	s %= 200
	summa01 := s / 100

	fmt.Println(summa5, summa1, summa05, summa02, summa01)
}
