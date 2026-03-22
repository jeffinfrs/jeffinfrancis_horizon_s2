#Rover Motion Program

This program calculates the distance between two points and finds the time taken by a rover using velocity, acceleration and maximum speed.

Input:

Orgin Coordinates, Destination Coordinates, Initial velocity, acceleration, max speed.

Output:
Distance and time required.

Example Input:
Orgin Coordinates - 0 0 

Destination Coordinates - 100 40

Initial velocity - 2 

Acceleration - 1 

Maximum Speed - 10 

Example Output:
Distance to destination: 107.7 m   
Time required: 13.2 seconds   

How it works:
Distance is calculated using the distance formula.  
Time is calculated based on motion equations. 
If the rover reaches max speed constant speed motion is used. 
If not acceleration formula is used. 

Files:
rover.c → Main program
output.png → Screenshot of program output
