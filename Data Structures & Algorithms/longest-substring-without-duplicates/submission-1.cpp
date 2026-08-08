class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        if(n==0)return 0;
        unordered_set<char>st;
        int Max=INT_MIN;
        while(j<n){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            Max=max(Max,j-i+1);
            j++;

        }
        return Max;
    }
};
