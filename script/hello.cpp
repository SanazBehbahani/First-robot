#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    // Constructor for the world, printing Hello World!
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Hello World!\n");
            }

    // Load function. It is mandatory and receives information from world file.
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };

  // Register plugin with simulator.
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
