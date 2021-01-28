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
    
    class IAlerter
    {
        virtual void checkAndAlert(std::vector<float>) = 0;
    };
    
    class EmailAlert : public IAlerter
    {
        public:
        bool emailSent;
        void checkAndAlert(std::vector<float>) {};
    };
    class LEDAlert : public IAlerter
    {
        public:
        bool ledGlows;
        void checkAndAlert(std::vector<float>) {};
    };

    class StatsAlerter : public IAlerter
    {
        public:
        StatsAlerter (float f_max_thres, std::vector<IAlerter*> &f_Alerters) : m_thresh(f_max_thres),m_Alerters(f_Alerters) {}
        //std::vector<float> S3;
        void checkAndAlert(std::vector<float> S3) override;
        float m_thresh;
       std::vector<IAlerter*> &m_Alerters;
       
    };
}
