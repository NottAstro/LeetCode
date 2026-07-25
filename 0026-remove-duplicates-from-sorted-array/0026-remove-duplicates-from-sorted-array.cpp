class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=0,j=0,n=a.size();
        while(i<n and j<n){
            a[i]=a[j];
            while(j<n and a[j]==a[i])
                ++j;
            i=i+1;
        }
        
        return i;
    }
};