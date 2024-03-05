This code runs to show an intersection in which two traffic signal strategies have been successfully implemented. The first strategy involves the traffic signals changing in a cross patterned manner; the horizontal ones change at the same time whilst the vertical ones change together afterward. In our second strategy, each traffic signal will change in a manner that the change will be noticed in only one signal at a time. 

Both of the strategies will avoid any sort of vehicle collision, and vehicles will always move according to the traffic signal changes. 
In order to carry out inheritance, polymorphism, and also to illustrate our strategies, we have made classes Intersection1 and Intersection2, which are two instances of the base class, Intersection.

There is no requirement for user input.

The number of vehicles can be changed mainly through the drawvehicle() and position() functions in the vehicle class, which should be called in the specific strategy class that the vehicle needs to move in. First, the user must specify the specific x and y coordinates in order to declare the position and size of the car, and then they must call the drawvehicle() function whilst passing in the required RGB values.

The class TrafficSignal has been used to draw ellipses strategically at planned instances in order to implement our traffic signals.

The class Road has been used to mainly specify the beginning and ending points for vehicle motion.

Our code shows 4 vehicles, all moving in different directions.

This illustration has been displayed through an infinite loop; for the first 400 counts, the strategy in Intersection1() will be implemented, and for the next 400 counts, the strategy in Intersection2() will be implemented. This will be followed by again, the first strategy for 400 counts, and so on.

The graphics header file has been submitted along with our source file and this txt file.

The goal of this program is to illustrate the implementation of various traffic strategies, and their effects on vehicle motion in an intersection.

Submitted by:
Danaa Younus (21L-5482), Afroze Najam (21L-5375), Samreen Riaz (21L-7533)
BCS 2D