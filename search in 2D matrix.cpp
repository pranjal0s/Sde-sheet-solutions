//consider the whole matrix as a sorted long array and performe binary search to fing the element//

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int lo=0;
        int hi=(m*n)-1;
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/n][mid % n] == target) {
                return true;
            }
            if(matrix[mid/n][mid % n] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
    }
};
