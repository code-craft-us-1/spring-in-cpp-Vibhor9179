#include "stats.h"
#include<cmath>
using namespace std;

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& nums) {
    //Implement statistics here
    Statistics::Stats ans;
    ans.average = NAN;
    ans.min = NAN;
    ans.max = NAN;

    if(nums.size())
    {
        float sum = 0;
        for(auto it : nums)
        {
            sum += it;
            ans.min = (ans.min < it)? ans.min : it;
            ans.max = (ans.max > it)? ans.max : it;
        }
        ans.average = sum/nums.size();
    }
    return ans;


}
