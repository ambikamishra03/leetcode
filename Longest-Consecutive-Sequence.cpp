class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>mp;
        int cnt=0,res=0;
        for(auto i:nums) mp[i]++;
        for(auto i:mp){
            if(mp.find(i.first-1)==mp.end()){
              cnt=1;
            }else{
                cnt++;
            }
            res=max(res,cnt);
        }
        return res;
    }
};