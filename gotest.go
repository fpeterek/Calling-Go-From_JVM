package main

import "C"

import "fmt"

//export call_go
func call_go() {
    fmt.Println("Calling Go")
}

func main() { }

