
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.



#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();  // no of row in matrix
        int m = matrix[0].size(); // no of column on matrix
        int low = 0, high = (m*n)-1;
        while(low<=high){
            int mid = (low+high)/2;
            int row = mid/m, col = mid%m;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};