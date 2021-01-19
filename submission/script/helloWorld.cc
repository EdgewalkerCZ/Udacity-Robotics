#include <gazebo/gazebo.hh>

namespace gazebo
{
    class HelloWorldPlugin : public WorldPlugin
    {
        public: HelloWorldPlugin(): WorldPlugin()
        {
            printf("Welcome to Joe's World!\n");
        }

        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
    };
    GZ_REGISTER_WORLD_PLUGIN(HelloWorldPlugin)
}