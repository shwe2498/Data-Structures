/*
 Leetcode 118 Pascal's Triangle
 iven an integer numRows, return the first numRows of Pascal's triangle.

 In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

                        1
                    1       1
                 1      2       1
            1       3       3       1
        1       4       6       4       1
 
 Input: numRows = 5
 Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> out(numRows);
    for(int i = 0; i < numRows; i++){
        out[i].resize(i + 1);
        out[i][0] = out[i][i] = 1;
        for(int j = 1; j < i; j++){
            out[i][j] = out[i - 1][j - 1] + out [i - 1][j];
        }
    }
    
    return out;
}
