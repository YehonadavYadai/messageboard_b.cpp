#include <string>
#include <vector>
#include "Direction.hpp"

using namespace std;

namespace ariel {

    class Board {
        uint limit_up;
        uint limit_down;
        uint limit_right;
        uint limit_left;

        uint rows;
        uint cols;
        vector<vector<char>> board;
         
    public:
        Board() {
            rows = 10;
            cols = 10;
            board = vector<vector<char>>(rows , vector<char> (cols, '_'));
            limit_down=4294967295;
            limit_up=0;
            limit_left=4294967295;
            limit_right=0;

           
        }
        void post(uint row, uint col, Direction direction, std::string message);
        std::string read(uint row, uint col, Direction direction, uint length);
        void show();
        void resize(uint row, uint cow);
    };
}