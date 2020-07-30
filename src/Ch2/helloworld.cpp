#include <osgDB/ReadFile>
#include <osgViewer/Viewer>

int main(int argc, char** argv)
{
    osg::ArgumentParser arguments(&argc, argv);
    std::string filename;
    arguments.read("--model", filename);

    if(filename.empty() == false)
    {
        osg::ref_ptr<osg::Node> root{osgDB::readNodeFile(filename)};

        osgViewer::Viewer viewer;
        viewer.setSceneData(root);

        return viewer.run();
    }

    osg::notify(osg::FATAL) << "Could not run osgViewer with no filename";

    return EXIT_FAILURE;
}