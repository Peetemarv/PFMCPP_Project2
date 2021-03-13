#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 -int
 -float 
 -bool
 -char
 -void
 -double


 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    //int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int wheels = 0;
    int cars = 0;
    int door = 0;

    float oilCapacity = 0.0f;
    float gazCapacity = 0.0f;
    float speedCapacity = 0.0f;

    double numberOne = 0.1234;
    double numberTwo = 0.5678;
    double numberThree = 1.9012;

    bool convertible = false;
    bool fourByFour = false;
    bool automatic = false;

    char characterOne = 'A';
    char characterTwo = 'B';
    char characterThree = 'C';
    
    ignoreUnused(wheels, cars, door, oilCapacity, gazCapacity, speedCapacity, numberOne, numberTwo, numberThree, convertible, fourByFour, automatic, characterOne, characterTwo, characterThree);
   
    //ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool refreshPage(bool refreshButton = false, float lastRefreshTime = 0.0f)
{
     ignoreUnused(refreshButton, lastRefreshTime);
     return {}; 
}
/*
 2)
 */
bool closeWindow (bool closeWindowButton = false)
{
    ignoreUnused(closeWindowButton);
    return {}; 
}
/*
 3)
 */
bool maximizeWindow(bool maximizeWindowButton = false)
{
    ignoreUnused(maximizeWindowButton);
    return {}; 
}
/*
 4)
 */
bool minimizeWindow(bool minimizeWindowButton = false)
{
    ignoreUnused(minimizeWindowButton);
    return {}; 
}
/*
 5)
 */
bool restartComputer(bool restartComputerButton = false)
{
    ignoreUnused(restartComputerButton);
    return {}; 
}
/*
 6)
 */
bool putInSleepMode(bool putInSleepModeButton = false, float numOfSecInactiveMouse = 0.0f)
{
    ignoreUnused(putInSleepModeButton, numOfSecInactiveMouse);
    return {}; 
}
/*
 7)
 */
bool startFan(float lastStartFanTime = 0.0f, float computerBodyTemperature = 0.0f)
{
    ignoreUnused(lastStartFanTime, computerBodyTemperature);
    return {}; 
}
/*
 8)
 */
 bool stopFan(float lastStartFanTime = 0.0f, float computerBodyTemperature = 0.0f)
{
    ignoreUnused(lastStartFanTime, computerBodyTemperature);
    return {}; 
}
/*
 9)
 */
bool splitScreen(bool splitScreenButton = false)
{
    ignoreUnused(splitScreenButton);
    return {}; 
}
/*
 10)
 */
bool fullScreen(bool fullScreenButton = false)
{
    ignoreUnused(fullScreenButton);
    return {}; 
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto refreshedPage = refreshPage(false, 0.5f);
    
    //2)
    auto closedWindow = closeWindow (false);
    
    //3)
    auto maximizedWindow = maximizeWindow (false);
    
    //4)
    auto minimizedWindow = minimizeWindow(false);
    
    //5)
    auto restartedComputer = restartComputer(false);
    
    //6)
    auto sleepMode = putInSleepMode(false, 0.9f);
   
    //7)
    auto startedFan = startFan(1.5f, 3.5f);
    
    //8)
    auto stopedFan = stopFan(0.0f, 0.0f);
    
    //9)
    auto splitedScreen = splitScreen(false);
   
    //10)
    auto screenFull = fullScreen(false);
    
    
    ignoreUnused(carRented, refreshedPage, closedWindow, maximizedWindow, minimizedWindow, restartedComputer, sleepMode, startedFan, stopedFan, splitedScreen, screenFull);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
