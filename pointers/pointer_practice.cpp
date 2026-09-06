# include <iostream>
# include <cstdlib> // For rand() and srand()
# include <time.h> // To use as a seed for random int generation
# include "pointer_practice.h"

// Simple pointer exercises

int main () {

    // Preparing array for the exercises

    int len = 7 ;
    IntArray array(len) ; // Create instance of an IntArray
    
    // Initializing array with random numbers
    srand(time(0)) ; // Use the current time as a seed so that rand() returns different ints on each run

    for (int i = 0; i < len; i++){

        array.insert(rand() % 51) ; // Generates numbers in [0, 50]
    }

    // Display array
    array.display() ;


    /* Exercise 1: Create a member function called max() for the IntArray class that...
       iterates through the array with pointers, finds the biggest integer, and returns the pointer to that int.
       Test it in main. 
    */

    // Call max()
    int *ptr_max = NULL ;
    ptr_max = array.max() ;
    std::cout << "The biggest number is " << *ptr_max << std::endl << std::endl ;


    /* Exercise 2: Create a void member function called swap() for the IntArray class that...
       iterates through the array with pointers, and swaps the elements of the array.
       Test it in main. 
    */

    // Call swap()
    array.swap() ;
    std::cout << "After swap..." << std::endl ;
    array.display() ;

    // Resizing array 
    array.resize(3) ;
    std::cout << "Displaying array after resizing..." << std::endl ;
    array.display() ;

    array.insert(9) ;
    array.insert(25) ;
    array.insert(5) ;
    array.display() ;


    return 0 ;
}
