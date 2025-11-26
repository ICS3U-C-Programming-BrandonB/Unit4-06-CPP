// Copyright (c) 2025 Brandon All rights reserved.
// Created By: Brandon
// Date: November 26th, 2025
// Program to show all valid color combos

#include <iostream>

int main() {
    for (int red = 0; red < 256; red++) {
        for (int green = 0; green < 256; green++) {
            for (int blue = 0; blue < 256; blue++) {
                std::cout << "\033[1;38;2;" << red
                    << ";" << green << ";" << blue
                    << "mRGB(" << red << ", " << green << ", " << blue
                    << ")\033[0m" << std::endl;
            }
        }
    }
}
