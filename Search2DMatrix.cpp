#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols-1;

        while( row < rows && col>=0 ){
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col]>target){
                col-=1;
            }
            else{
                row+=1;
            }
        } 
        return false;
    }
};
