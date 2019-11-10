// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program prints all  numbers from 1000-2000 with 5 numbers a line


#include <iostream>
#include <string>

int main() {
    // variables
    int counter;
    int num = 1000;

    // process
    for (counter = 2; num > 1000, num < 2001; counter++, num++) {
        if (counter % 5 == 1 && counter > 1) {
            std::cout << num << " " << std::endl;
        } else {
            std::cout << num << " ";
        }
    }
}
