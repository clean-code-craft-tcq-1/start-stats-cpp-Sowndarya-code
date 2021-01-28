#include <vector>
#include <algorithm> 
namespace Statistics {
    class Stats
    {
        public:
        Stats ComputeStatistics(const std::vector<float>& S2);
        //vector<float> S1;
        float average,min,max;
        float sum = 0.0F;
    };
    class EmailAlert 
    {
        public:
        bool emailSent;
    };
    class LEDAlert
    {
        public:
        bool ledGlows;
    };
}
