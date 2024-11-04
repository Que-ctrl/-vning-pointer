#include <iostream>

using namespace std;

int main()
{
    
    // dubbel frigörning
    int num = 88; 
    int* ptr = new int(num); 

    std::cout << "pekaren pekar på: " << *ptr << std::endl;

    delete ptr;
    delete ptr; // frigör för andra gången.

    //Dangling pointers
    int num = 88; 
    int* ptr = new int(num); 

    std::cout << "pekaren pekar på: " << *ptr << std::endl;

    delete ptr; // daningling pointer
    //ptr = nullptr; behöver läggas till

    //Minnes läcka. Om man inte lägger tilld delete.
    int num = 88; 
    int* ptr = new int(num); 

    std::cout << "pekaren pekar på: " << *ptr << std::endl;

    return 0;



}