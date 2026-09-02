# include <iostream>
# include <cstdlib> // For rand() and srand()
# include <time.h> // To use as a seed for random int generation

// Simple pointer exercises

// Defining dynamic array class 
class IntArray {

    protected:
        int *arr = NULL ; // Pointer to an int
        int used = 0 ; // Track how many integers we have in the array

    public:
        int length = 0 ; // Length for the dynamic array

        // Set length of dynamic array
        void set_length(int len){
            
            length = len;
            arr = new int[length];
        }

        // Parameterized Constructor
        IntArray(int len) {

            set_length(len) ;
        }
        
        // Destructor
        ~IntArray() {
            
            // If the pointer is not NULL (the array is not empty), delete the whole array
            if (arr != NULL) delete[] arr ;
        }

        // Insert int at the end of the array
        void insert(int num){

            // "Move" the amount of used spaces to dereference pointer and add the int 
            *(arr + used) = num ;
            ++used ; 
        }

        // Display the IntArray object
        void display(){

            std::cout << "Array: " ;
            for (int i = 0; i < used; i++){
                std::cout << *(arr + i) << " " ;
            }

            std::cout << std::endl ;
        }

};


int main () {

    // Preparing array for the exercises

    int len = 5 ;
    IntArray array(len) ; // Create instance of an IntArray
    
    // Initializing array with random numbers for the exercises
    srand(time(0)) ; // Use the current time as a seed so that rand() returns different ints on each run

    for (int i = 0; i < len; i++){

        array.insert(rand() % 51) ;
    }

    array.display() ;


    /* Exercise 1: 
       Iterate through the array with pointers, find the biggest integer, and return the pointer to that int.
    */

    // 

    


    return 0 ;
}
