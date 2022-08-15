# CPP_RandomGenerator
Get random nuber from user input!


![image](https://user-images.githubusercontent.com/42646031/184685841-0f2352cc-46d9-461b-b533-f879836a256c.png)

code:
```
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
```
