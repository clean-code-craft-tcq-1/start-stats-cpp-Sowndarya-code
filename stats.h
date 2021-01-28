#include <vector>

namespace Statistics {
    class Stats()
    {
        public:
        Stats ComputeStatistics(const std::vector<float>& );
        float average,min,max;
    };
}
