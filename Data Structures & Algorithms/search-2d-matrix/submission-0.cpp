class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            int st=0,end=n-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(target==matrix[i][mid]){
                    return true;
                }
              else  if(target>matrix[i][mid]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return false;
    }
};