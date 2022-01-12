#ifndef _WIN32
  #include <unistd.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>

#include <gazebo/gazebo_config.h>
#include <dlfcn.h>

#include <list>
#include <string>

#include <sdf/sdf.hh>
#include <boost/filesystem.hpp>

#include "gazebo/common/CommonTypes.hh"
#include "gazebo/common/SystemPaths.hh"
#include "gazebo/common/Console.hh"
#include "gazebo/common/Exception.hh"

#include "gazebo/physics/PhysicsTypes.hh"
#include "gazebo/sensors/SensorTypes.hh"
#include "gazebo/rendering/RenderTypes.hh"
#include "gazebo/util/system.hh"

static double test(void)
{
    double aaaaa = 1;
    double b = aaaaa;
}
