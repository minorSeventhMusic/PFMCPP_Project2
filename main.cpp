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
 Primitives:
 Integer                int
 Boolean                bool
 Character              char
 Floating Point         float
 Double Floating Point  double
 Valueless              void
 Modifiers: //-> not really covered yet, just found them online
 signed/unsigned 
 short/long         
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
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
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int numberOfPets = 0;
    int emptyRooms = 1;
    int usedComputers = 3;
    bool isHungry = true;
    bool hasPets = false;
    bool hasProgrammedBefore = true;
    char grade = 'A';
    char houseNumber = 123;
    char petName = 'C';
    float squareMeters = 34.7f;
    float percentageOfPopulation = 20.f;
    float valueOfSomething = 0.134f;
    double sizeOfShoes = 36.5;
    double weightOfPet = 20.1;
    double someNumber = 135.246;
    
    ignoreUnused(numberOfPets, emptyRooms, usedComputers, isHungry, hasPets, hasProgrammedBefore, grade, houseNumber, petName, squareMeters, percentageOfPopulation, valueOfSomething, sizeOfShoes, weightOfPet, someNumber);

    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
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
int firstFunction(int firstNumber)
{
    ignoreUnused(firstNumber);
    return {};
}
/*
 2)
 */
int house(int rooms, float squareMeters, bool inhabited = true)
{
    ignoreUnused(rooms, squareMeters, inhabited);
    return {};
}
/*
 3)
 */
bool dinner(int peopleEating = 6, bool allHungry = false, float percentageHungry = 50.f)
{
    ignoreUnused(peopleEating, allHungry, percentageHungry);
    return {};
}
/*
 4)
 */
int uselessFunction (int aNumber, char aCharacter)
{
    ignoreUnused(aNumber, aCharacter);
    return{};
}
/*
 5)
 */
int nicePattern(int numberOfColours, bool hasCircles, bool hasSquares = true)
{
    ignoreUnused(numberOfColours, hasCircles, hasSquares);
    return {};
}
/*
 6)
 */
float someCalculation (float firstNumber, float secondNumber)
{
    ignoreUnused(firstNumber,secondNumber);
    return {};
}
/*
 7)
 */
double testOfSomething (bool hasTested, double result)
{
    ignoreUnused(hasTested, result);
    return{};
}
/*
 8)
 */
int lovelySong(bool songIsCatchy = true, int numberOfVerses = 4)
{
    ignoreUnused(songIsCatchy, numberOfVerses);
    return{};
}
/*
 9)
 */
int functionWithThreeNumbers(int firstNumber, int secondNumber, int thirdNumber = 8)
{
    ignoreUnused(firstNumber, secondNumber, thirdNumber);
    return {};
}
/*
 10)
 */
void lastFunction(bool noMoreFunctions = true)
{
    ignoreUnused(noMoreFunctions);
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
    int firstFunctionCalled = firstFunction(1);
    //2)
    auto myHouse = house(5, 134.f);
    //3)
    auto thisDinner = dinner();
    //4)
    auto notSoUseless = uselessFunction(1, 'a');
    //5)
    auto myPattern = nicePattern(5, true, false);
    //6)
    auto difficultCalculation = someCalculation(4326.738f, 98264.57283f);
    //7)
    auto testOfThis = testOfSomething(true, 6.8);
    //8)
    auto myLovelySong = lovelySong(true, 8);
    //9)
    auto someThreeNumbers = functionWithThreeNumbers(1,2,3);
    //10)
    lastFunction();

    ignoreUnused(firstFunctionCalled, myHouse, thisDinner, notSoUseless, myPattern, difficultCalculation, testOfThis, myLovelySong, someThreeNumbers);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
