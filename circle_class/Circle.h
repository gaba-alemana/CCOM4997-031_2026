# include <iostream>
# include <stdexcept> // To throw standard exceptions/errors for input validation


// Creating a Circle Class
class Circle {
    
    /*  Defining and initializing the attributes (variables)
        Setting them as private to avoid outside modification   */ 
    private:
        
        double radius ;
        const double pi = 3.14 ;


    // Defining methods (functions)
    public:

        /*  Default constructor 
            We can initialize the radius attribute to 5.0 as a default.
            There are two ways to initialize the attributes; the first one is more compact.
            The second one initializes the variable inside the brackets, but they both have the same purpose.   */
        
        // First way
        Circle() : radius(5.0) {}
        
        // Second way
        // Circle() { radius = 5.0 ; }


        // Function for the user to set/change the radius (Setter function)
        void set_radius(double rad) {

            // Input validation (the radius cannot be less than zero)
            if (rad < 0){
                throw std::invalid_argument("The radius of a circle must be a positive number.") ;
            }

            // Set radius
            radius = rad ;
        }


        /*  Parameterized constructor
            Create a circle instance with a radius specified by the user    */
        Circle(double rad ) {

            // Call set_radius function which checks for input validity to set the radius
            set_radius(rad);
        }


        // Calculating the circumference of the circle
        double calc_circumference() {

            return radius * pi * 2 ;
        }


        /*  Function for the user to see the radius (Getter function)
            The keyword const indicates that the attributes of the object will not be changed.  */
        double get_radius() const {

            return radius ;
        }


        /*  Overloading operators
            By overloading operators, we want to use C++ built in operators with user defined data types.
            Overloading operators work, in a way, like functions. 

            Syntax: 

                We specify the return type for when using the operator.
                Include the "operator" keyword followed by the operator we want to define for our class objects.
                We then include parameters either passed by reference or by value.
                
                return_type operator_keyword operator_to_overload (parameters) {}
                Circle operator+ (Circle circle2) 
        */

        /*  Overloading the addition operator
            We want to be able to add circle objects  */ 
        Circle operator+ (Circle &circle2) {

            return Circle(radius + circle2.radius) ;
        }


        /*  Overloading the multiplication operator
            We want to be able to multiply circle objects  */ 
        Circle operator* (Circle &circle2) {

            return Circle(radius * circle2.radius) ;
        }
} ;