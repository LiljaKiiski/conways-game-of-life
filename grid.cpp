#include <iostream>

using namespace std;

class Grid {
    private:
        int width;
        int height;
        bool* grid;

    public:
        Grid(int width, int height){
            this->width = width;
            this-> height = height;

            *grid = new bool[width * height];

            cout << grid[0] << endl;
        }
};

int main(){
    Grid grid(5, 5);
}