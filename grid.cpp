#include <iostream>

using namespace std;

class Grid {
    private:
        int width;
        int height;
        int size;
        bool* grid;

        void init_grid(){
            for (int i = 0; i < size; i++){
                grid[i] = false;
            }
        }

    public:
        Grid(int width, int height){
            this->width = width;
            this-> height = height;
            this->size = width*height;

            grid = new bool[size];

            init_grid();

            cout << grid[0] << endl;
        }
};

int main(){
    Grid grid(5, 5);
}