#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& S2) {
    for(int i=0,i<S2.size(),i++)
    {   
      sum = sum + S2[i];
    }
    average = sum/S2.size();
    //Implement statistics here
}
