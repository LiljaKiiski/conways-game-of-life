#include <iostream>
#include "Grid.h"

using namespace std;

Grid::Grid(int width, int height){
    this->width = width;
            this-> height = height;
            this->size = width*height;

            grid = new bool[size];

            init_grid();

            cout << grid[0] << endl;
}

void Grid::init_grid(){
    for (int i = 0; i < size; i++){
        grid[i] = false;
    }
}