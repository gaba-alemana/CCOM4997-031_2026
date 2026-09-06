# include <iostream>

// Defining dynamic int array class for the exercises
class IntArray {

    protected:
        int *arr = NULL ; // Pointer to an int
        int used = 0 ; // Track how many integers we have in the array
        int length = 0 ; // Length for the dynamic array

    public:

        // Default constructor
        IntArray() { }

        // Set length of dynamic array
        void set_length(int len) {
            
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

        
        // Overload assignment operator 
        IntArray& operator= (IntArray &array2){

            // Copy all attributes from other instance
            arr = array2.arr ;
            used = array2.used ;
            length = array2.length ;

            // Change other array pointer to NULL and update attributes
            array2.arr = NULL ;
            array2.used = 0 ;
            array2.length = 0 ;

            return *this ;
        }


        // Resize the IntArray
        void resize(int n) {

            // Create new circle with *this size + n new spaces
            IntArray arr2 = IntArray(length + n) ;

            // Save the elements of this array in the new instance array
            for(int i = 0; i < used; i++){

                arr2.insert(*(arr + i)) ;
            }

            delete[] arr ; // Eliminate array of this instance
            *this = arr2 ; // Copy other instance to this one

        }


        // Insert int at the end of the array
        void insert(int num) {
            
            if (used == length){
                std::cout << "Dynamic array full, resize..." << std::endl ;
            }

            else{
                // "Move" the amount of used spaces to dereference the pointer and add an int 
                *(arr + used) = num ;
                ++used ; 
            }
        }


        // Display the IntArray object (Other option: Overload the << insertion operator)
        void display() const {
            
            if (arr == NULL){
                std::cout << "The int array is empty." << std::endl ;
                std::cout << used << " spaces used of " << length << std::endl << std::endl ;
            }

            else{ 
                std::cout << "Array: " ;
                for (int i = 0; i < used; i++){
                    std::cout << *(arr + i) << " " ;
                }

                std::cout << std::endl ;
                std::cout << used << " spaces used of " << length << std::endl << std::endl ;
            }
        }
        


        // Exercise 1 Member Function

        // max()
        int* max() const {

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



        // Exercise 2 Member Function

        // swap()
        void swap() {

            int temp ; // Temporary variable to hold an int when swapping
            
            /*  Have two variables to use as indexes 
                (one to start at the beginning and the other to start at the tail)
            */

            for (int i = 0, k = used - 1; i < (used / 2); i++, k--){

                temp = *(arr + i) ; // Save int to swap on a temporary variable
                *(arr + i) = *(arr + k) ; 
                *(arr + k) = temp ; 

                // std::cout << *(arr + i) << std::endl ;

            }
        }
};