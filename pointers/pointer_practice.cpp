# include <iostream>
# include <cstdlib> // For rand() and srand()
# include <time.h> // To use as a seed for random int generation
# include "pointer_practice.h"

// Simple pointer exercises

int main () {

    // Preparing array for the exercises

    int len = 10 ;
    IntArray array_a(len), array_b(len) ; // Create instance of an IntArray

    
    // Initializing array with random numbers
    srand(time(0)) ; // Use the current time as a seed so that rand() returns different ints on each run

    for (int i = 0; i < len; i++){

        array_a.insert(rand() % 51) ; // Generates numbers in [0, 50]
        array_b.insert(rand() % 51) ;
    }

    // Display array
    std::cout << array_a ;


    /* Exercise 1: Create a member function called max() for the IntArray class that...
       iterates through the array using pointer arithmetic, finds the biggest integer, and returns the pointer to that int.
       Test it in main. 
    */

    // Call max()
    int *ptr_max = NULL ;
    ptr_max = array_a.max() ;
    std::cout << "The biggest number is " << *ptr_max << std::endl << std::endl ;


    /* Exercise 2: Create a void member function called swap() for the IntArray class that...
       iterates through the array using pointer arithmetic, and swaps the elements of the array.
       Test it in main. 
    */

    // Call swap()
    array_a.swap() ;
    std::cout << "After swap..." << std::endl ;
    std::cout << array_a ;


    // Testing array resize
    array_a.resize(2) ;
    std::cout << "Displaying array after resizing..." << std::endl ;
    std::cout << array_a;

    array_a.insert(9) ;
    std::cout << array_a ;
    array_a.insert(25) ;
    std::cout << array_a ;
    array_a.insert(5) ;
    std::cout << array_a ;

    // Deleting elements of the IntArray queue
    array_a.remove() ;
    std::cout << array_a ;

    // Testing comparison overloaded operators
    std::cout << (array_a > array_b) << std::endl << (array_a == array_b) << std::endl ;

    return 0 ;
}
