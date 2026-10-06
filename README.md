## CIS-165 Lab 3
# Course Information
# Course section: CIS-165-W099
# Lab: Lab 3
# Programs: diamond.cpp and game_time.cpp

## Initial Plans
# Plan for diamond.cpp
I will use separate output statements for each line of the diamond. I will carefully count the spaces and asterisks on each line so the output matches the required pattern exactly. The number of asterisks will increase toward the middle of the diamond and then decrease.

# Plan for game_time.cpp
I will store 78 minutes for Level 1 and 144 minutes for Level 2 in variables. I will use integer division to calculate the number of hours and the remainder operator to calculate the remaining minutes. I will also subtract the Level 1 time from the Level 2 time and convert the difference into hours and remaining minutes. I will store each calculation in a variable before displaying the results.

## How to Compile and Run
# diamond.cpp
To compile the program using g++, use:
g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond

# game_time.cpp
To compile the program using g++, use:
g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time


## Testing
Before each test, I calculated the expected result myself and then compared it with the actual program output.
Program/test	Values or pattern checked	Expected result before running	Actual output	Match or correction
diamond.cpp	Seven required lines	3 spaces/1 star, 2 spaces/3 stars, 1 space/5 stars, 0 spaces/7 stars, then the pattern decreases	Seven lines matched the required diamond pattern	Match
game_time.cpp — assigned values	78 and 144 minutes	Level 1: 1 hour, 18 minutes; Level 2: 2 hours, 24 minutes; Difference: 1 hour, 6 minutes	Level 1: 1 hour, 18 minutes; Level 2: 2 hours, 24 minutes; Difference: 1 hour, 6 minutes	Match
game_time.cpp — changed values	75 and 135 minutes	Level 1: 1 hour, 15 minutes; Level 2: 2 hours, 15 minutes; Difference: 1 hour, 0 minutes	Level 1: 1 hour, 15 minutes; Level 2: 2 hours, 15 minutes; Difference: 1 hour, 0 minutes	Match

After completing the changed-value test, I restored the originally assigned values of 78 minutes for Level 1 and 144 minutes for Level 2. I reran the programs after restoring the assigned values. The final version of game_time.cpp uses the original assigned values.

## Code Explanation
# diamond.cpp
The program creates the diamond by using separate cout statements for each of the seven lines. Each line contains a specific number of spaces followed by a specific number of asterisks. I checked the spaces by comparing each line of my program's output with the required pattern and counting the spaces before the asterisks.

# game_time.cpp
The program converts minutes into hours and remaining minutes using integer division and the remainder operator. For Level 1, 78 divided by 60 gives 1 hour with 18 minutes remaining. For Level 2, 144 divided by 60 gives 2 hours with 24 minutes remaining.

The difference between the two levels is calculated by subtracting 78 from 144, which gives 66 minutes. Dividing 66 by 60 gives 1 hour with 6 minutes remaining. I store these calculations in variables before displaying them so that the calculations are separate from the output and the result variables can be clearly displayed.
