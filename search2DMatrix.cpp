/*
 Leetcode 74 Search 2D Matrix
 Write an efficient algorithm that searches for a valuein an m*n matrix. Theis matrix has the following propertirs:
 1. Integers in each row are sorted from left to right
 2. the first integer of each row is greater than the last integer of the previous row
 
 Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
 Output: true
 */

#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> mat, int target){
    int i = 0;
    auto j = mat.size() - 1;
    
    while(i < mat[0].size() && j >= 0){
        if(mat[i][j] == target){
            return true;
        }
        else if(mat[i][j] > target){
            j--;
        }
        else if(mat[i][j] < target){
            i++;
        }
    }
    return false;
}
