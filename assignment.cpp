#include <cpp_api/navigation_bridge.h>
#include <iostream>

int main(int argc, char *argv[])
{
    Navigation nav;

    std::cout<<"\nTakeOff at altitude (5)...\n";
    if(nav.take_off(5)){
        std::cout<<"\nTakeOff Failed.. exiting\n";
        exit(0);
    }

    std::cout<<"\nGoing waypoint (6.5,0,5)\n";
    if(nav.position_set(6.5,0,5)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }

    std::cout<<"\nGoing waypoint (6.5,6.5,5)\n";
    if(nav.position_set(6.5,6.5,5)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }

    std::cout<<"\nGoing waypoint (0,6.5,5)\n";
    if(nav.position_set(0,6.5,5)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }

    std::cout<<"\nGoing waypoint (0,0,5)\n";
    if(nav.position_set(0,0,5)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }

    std::cout<<"\nLanding Now...\n";
    if(nav.land(false)){
        std::cout<<"\nLand Failed.. exiting\n";
        exit(0);
    }

}
