#include <osg/ref_ptr>
#include <osg/Referenced>
#include <iostream>

class MonitoringTarget : public osg::Referenced
{
public:
    MonitoringTarget(int id) : id(id)
    {
        std::cout << "Constructing target " << this->id << "\n";
    }

protected:
    virtual ~MonitoringTarget()
    {
        std::cout << "Destructing target " << this->id << "\n";
    }

    int id;
};