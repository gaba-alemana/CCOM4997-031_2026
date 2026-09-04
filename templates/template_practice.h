# include <iostream>
# include <cmath> // For pow


// Calculator Class
template <typename T>
class Calculator {

    private:
        T val1 ;
        T val2 ;

    public:

        // Parameterized constructor
        Calculator(T a, T b) {

            val1 = a ;
            val2 = b ;
        }

        // Addition 
        T add() {

            return val1 + val2 ;
        }

} ;