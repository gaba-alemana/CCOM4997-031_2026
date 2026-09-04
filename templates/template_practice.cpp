# include <iostream>
# include "template_practice.h"


int main () {

     result ;
    Calculator<double> simple_calc = Calculator<double>(5.4, 3.05) ;

    result = simple_calc.add() ;

    std::cout << result << std::endl ;

    return 0 ;
}