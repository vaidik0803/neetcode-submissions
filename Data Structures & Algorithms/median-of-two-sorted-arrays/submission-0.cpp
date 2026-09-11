class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int i=nums1.size()-1,j=nums2.size()-1,x=nums1.size()+nums2.size()-1;
              vector<int>merged(x+1);
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                merged[x]=nums1[i];
                x--;i--;
            }
            else{
                merged[x]=nums2[j];
                x--;j--;
            }
        }
      while(i>=0){
      merged[x--]=nums1[i--];
      }
      while(j>=0){
      merged[x--]=nums2[j--];
     }
     int t=nums1.size()+nums2.size();
       double ans;
      if(t%2==0){
     int mid=(merged.size()/2)-1;
       ans=(merged[mid]+merged[mid+1])/2.0;
     }
      else{
     int mid=(merged.size()/2);
      ans=merged[mid];
      }

     return ans;
    }
};