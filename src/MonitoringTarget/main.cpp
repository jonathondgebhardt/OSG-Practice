#include "MonitoringTarget.h"

MonitoringTarget* createMonitoringTarget(int x)
{
    osg::ref_ptr<MonitoringTarget> target{new MonitoringTarget(x)};
    return target.release();
}

int main(int argc, char** argv)
{
    std::cout << "Example 1:\n";
    {
        osg::ref_ptr<MonitoringTarget> target{new MonitoringTarget(0)};
        std::cout << "Referenced count before referring: " << target->referenceCount() << "\n";

        const auto anotherTarget{target};
        std::cout << "Referenced count after referring: " << target->referenceCount() << "\n";
    }

    std::cout << "\n\n";

    std::cout << "Example 2:\n";
    for(auto i{1}; i < 5; ++i)
    {
        osg::ref_ptr<MonitoringTarget> subTarget{new MonitoringTarget(i)};
    }

    std::cout << "\n\n";

    std::cout << "Example 3:\n";
    createMonitoringTarget(6);
}