#include "stats.h"

Statistics::Stats Statistics::Stats::ComputeStatistics(const std::vector<float>& S2) {
    for(int i=0,i<S2.size(),++i)
    {   
      sum = sum + S2[i];
    }
    average = sum/S2.size();
    min = *min_element(S2.begin(),S2.end());
    max = *max_element(S2.begin(),S2.end());
    return *this;
    //Implement statistics here
}
