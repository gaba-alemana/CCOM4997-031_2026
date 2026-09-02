# include <iostream>
# include <cstdlib> // For rand() and srand()
# include <time.h> // To use as a seed for random int generation

// Simple pointer exercises

// Defining dynamic array class for the exercises
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
            
            if (used == length){
                std::cout << "Dynamic array full, resize..." << std::endl ;
            }

            else{
                // "Move" the amount of used spaces to dereference pointer and add the int 
                *(arr + used) = num ;
                ++used ; 
            }
        }

        // Display the IntArray object (Other option: Overload the << insertion operator)
        void display(){
            
            if (arr == NULL){
                std::cout << "The int array is empty." << std::endl ;
            }

            else{ 
                std::cout << "Array: " ;
                for (int i = 0; i < used; i++){
                    std::cout << *(arr + i) << " " ;
                }

                std::cout << std::endl ;
            }
        }
        


        // Exercise 1 Member Function

        // max()
        int* max() {

            int max_num = 0 ; // Variable to store the biggest int
            int * ptr_max = NULL ; // Variable to store the pointer

            // Iterate through the IntArray
            for (int i = 0; i < used; i++){

                // Save the number and its pointer if its bigger than the int stored in max_num
                if (*(arr + i) > max_num){

                    max_num = *(arr + i) ;
                    ptr_max = arr + i ;
                }
            }

            return ptr_max ;
        }
        

};



int main () {

    // Preparing array for the exercises

    int len = 10 ;
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
    std::cout << "The biggest number is " << *ptr_max << std::endl ;


     /* Exercise 2: Create a void member function called swap() for the IntArray class that...
       iterates through the array with pointers, and swaps the elements of the array.
       Test it in main. 
    */

    // Call swap()
    array.display() ;

    


    return 0 ;
}
