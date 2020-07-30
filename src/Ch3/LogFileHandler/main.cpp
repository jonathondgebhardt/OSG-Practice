#include <osgDB/ReadFile>
#include <osgViewer/Viewer>
#include <fstream>

class LogFileHandler : public osg::NotifyHandler
{
public:
    LogFileHandler(const std::string& file)
    {
        this->log.open(file);
    }

    virtual ~LogFileHandler()
    {
        this->log.close();
    }

    virtual void notify(osg::NotifySeverity severity, const char* msg)
    {
        this->log << msg;
    }

protected:
    std::ofstream log;
};

int main(int argc, char** argv)
{
    osg::setNotifyLevel(osg::INFO);
    osg::setNotifyHandler(new LogFileHandler("output.txt"));

    osg::ArgumentParser args{&argc, argv};
    osg::ref_ptr<osg::Node> root{osgDB::readNodeFiles(args)};
    
    if(root == nullptr)
    {
        OSG_FATAL << args.getApplicationName() << ": No data loaded.\n";
        return EXIT_FAILURE;
    }

    osgViewer::Viewer viewer;
    viewer.setSceneData(root.get());

    return viewer.run();
}