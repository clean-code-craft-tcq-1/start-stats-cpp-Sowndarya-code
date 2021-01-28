#include <vector>

namespace Statistics {
    class Stats()
    {
        public:
        Stats ComputeStatistics(const std::vector<float>& S2);
        vector<float> S1;
        float average,min,max;
    };
}
