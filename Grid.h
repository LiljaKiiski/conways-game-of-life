#pragma once

class Grid {
    public:
        Grid(int width, int height);

    private:
        int width;
        int height;
        int size;
        bool* grid;
    
    void init_grid();
}; 