# include <iostream>

// Template Introduction

    /* 
        Templates work as a blueprint when creating functions or classes; they are like a placeholder for a data type.
        Instead of defining a function for a specific data type, we can create a generic one with templates for multiple data types.
        This helps us be more conscise and reduce code.

        Syntax: template < typename T >
        Note: A template cannot be defined inside a function; hence, the templates should be created outside main.
    
    */


// Template for calculating the max element in an array and returning said element
template < typename T >
T max_element(T array[], int size){

    T max = array[0] ; // Set max value to the first element in the array
    for (int i = 1; i < size; i++){

        if (array[i] > max){
            max = array[i] ;
        }
    }

    return max ;
}



int main() {

    // Arrays to test the template
    int size = 5 ;
    int int_arr[size] = {40, 5, 67, 19, 1} ;
    char char_arr[size] = {'h', 'a', 'A', 'z', 'K'} ;
    float float_arr[size] = {9.5, 23.1, 12.0, 5, 12.5} ;

    // Variables to store the maximum value for each array
    int int_max ; 
    char char_max ;
    float float_max ;

    // Calling template function
    int_max = max_element(int_arr, size) ;
    char_max = max_element(char_arr, size) ;
    float_max = max_element(float_arr, size) ;

    std::cout << "Max elements in the arrays: " << int_max << " " << char_max << " " << float_max << std::endl ;












    return 0 ;
}