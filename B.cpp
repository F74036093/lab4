#include <iostream>
#include <string.h>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include "Sudoku.h"

#define ON 1
#define OFF 0


using namespace std;

int main(int argc, const char * argv[]) {
    
    int arr_test[12][12] = {{4, 2, 6, 8, 7, 3, 9, 5, 1,-1,-1,-1}
        ,{ 0, 0, 3, 9, 5, 0, 6, 0, 4,-1,-1,-1}
        ,{ 9, 0, 1, 6, 2, 4, 8, 0, 0,-1,-1,-1}
        ,{-1,-1,-1, 1, 3, 2, 0, 8, 7, 9, 5, 6}
        ,{-1,-1,-1, 0, 8, 0, 1, 9, 0, 4, 2, 0}
        ,{-1,-1,-1, 4, 9, 6, 2, 3, 0, 8, 7, 1}
        ,{ 1, 0, 0, 0, 4, 0,-1,-1,-1, 6, 9, 5}
        ,{ 0, 0, 4, 0, 6, 0,-1,-1,-1, 1, 3, 7}
        ,{ 6, 9, 5, 0, 1, 7,-1,-1,-1, 2, 8, 4}
        ,{ 3, 1, 2,-1,-1,-1, 7, 4, 0, 5, 0, 9}
        ,{ 7, 4, 8,-1,-1,-1, 0, 6, 9, 3, 0, 2}
        ,{ 0, 6, 0,-1,-1,-1, 3, 1, 0, 7, 0, 8}};
    
    Sudoku ss;
    //ss.GiveQuestion();
    //ss.ReadInTest(arr_test);
    ss.ReadIn();
    ss.Solve();
    return 0;
}


