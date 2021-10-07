/*
 Leetcode 566. Reshape the Matrix
 In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

 You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

 The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

 If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 Input: mat = [[1,2],[3,4]], r = 1, c = 4
 Output: [[1,2,3,4]]
*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    auto row = mat.size();
    auto col = mat[0].size();
    if((r*c) != (row*col)) return mat;
        
    vector<vector<int>> reshaped(r, vector<int>(c,0));
        
    for(int i = 0; i < (row * col); i++){
        reshaped[i / c][i % c] = mat[i / col][i % col];
    }
        
    return reshaped;
}
