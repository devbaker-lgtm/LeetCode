1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int tar,mx;
5        mx=nums[0];
6        vector<int> mi(nums.size());
7        mi[nums.size()-1] = nums[nums.size()-1];
8        for(int i=nums.size()-2;i>=0;i--)
9        {
10            mi[i]=nums[i];
11            mi[i]=min(nums[i],mi[i+1]);
12        }
13
14    for(int i=0;i<nums.size();i++)
15    {mx=max(mx,nums[i]);
16
17        //tar=*max_element(nums.begin(),nums.begin()+i+1)-*min_element(nums.begin()+i,nums.end());
18        tar=mx-mi[i];
19        if(tar<=k){
20            return i;
21        }
22    }
23return -1;
24    }
25};