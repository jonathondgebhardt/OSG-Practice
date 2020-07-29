#include <osgDB/ReadFile>
#include <osgViewer/Viewer>

int main(int argc, char** argv)
{
    osg::ref_ptr<osg::Node> root{osgDB::readNodeFile("/home/jon/OpenSceneGraph-Data/cessna.osg")};

    osgViewer::Viewer viewer;
    viewer.setSceneData(root);

    return viewer.run();
}