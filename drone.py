#!/usr/bin/env python
import time
from flyt_python import api
drone = api.navigation() 
time.sleep(3)

print ('Take Off...')
drone.take_off(5.0)

print ('Acheiving Waypoint 1...')
drone.position_set(6.5,0,0,relative=True)
print ('Acheiving Waypoint 2...')
drone.position_set(0,6.5,0,relative=True)
print ('Acheiving Waypoint 3...')
drone.position_set(-6.5,0,0,relative=True)
print ('Acheiving Waypoint 4...')
drone.position_set(0,-6.5,0,relative=True)

print ('Landing')
drone.land(async=False)

#shutdown the instance
drone.disconnect()
 