#pragma once
#include "Header.h"
#include <string>
#include <iostream>
#include <cstring>
#include <fstream>
void buildTree(int height) {
    int max_Stars = 1 + 2 * (height - 1);
    for (int i = 0; i <= height; i++) {
        int row_Stars = 1 + 2 * (i - 1);
        int space = (max_Stars - row_Stars) / 2;
        std::cout << std::string(space, ' ');
        for (int j = 0; j < row_Stars; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;



    }
}
