#include <cpp_api/navigation_bridge.h>
#include <iostream>

int main(int argc, char *argv[])
{
    Navigation nav;

    std::cout<<"\nTakeOff at altitude (5)...\n";
    nav.take_off(5)

    std::cout<<"\nGoing waypoint (6.5,0,5)\n";
    nav.position_set(6.5,0,5)
    
    std::cout<<"\nGoing waypoint (6.5,6.5,5)\n";
    nav.position_set(6.5,6.5,5)

    std::cout<<"\nGoing waypoint (0,6.5,5)\n";
    nav.position_set(0,6.5,5)

    std::cout<<"\nGoing waypoint (0,0,5)\n";
    nav.position_set(0,0,5)

    std::cout<<"\nLanding Now...\n";
    nav.land(false)

}
