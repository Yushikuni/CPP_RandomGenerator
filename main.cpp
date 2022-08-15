/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int min, max;
    
    srand(time(0));
    
    std::cout<<"Get minimum:";
    std::cin>>min;
    std::cout<<"Get maximum:";
    std::cin>> max;
    
    std::cout<<"Random number from "<<min<<" to "<<max<<" is: " << rand()%(++max-min)<<std::endl;
    return 0;
}
