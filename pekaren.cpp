#include <iostream>

using namespace std;
int main()
{
    int value_a = 1;
    int value_b = 2;
    int value_c;
    

    cout << " ******** VALUE_A ********" << endl;
    cout << " " << endl;
    int *ptra = &value_a;
    cout << "This is the starting point. int value_a = 1" << endl;
    cout << " " << endl;
    cout << "This is the value of value_a: " << *ptra << endl; // with the * it shouws the value
    cout << "This is the memory adress of value_a using ptr: " << ptra << endl; // * without star it shows the adress.
    cout << "I will now dereference the pointer (give it a new value). | *ptra = 11; | ptra is the name of the pointer" << endl;
    *ptra = 11; // assigning a new value to value_a using dereferencing
    cout << "This is the value of value_a after dereferencing: " << value_a << endl;
    cout << "This is the value of ptra after dereferencing: " << *ptra << endl;
    cout << "This is the memory adress of value_a after dereferencing: " << ptra << endl; //  its the same it will not change
    cout << " " << endl;
    cout << "pointer --> " << *ptra << " " << " Value_a --> " << value_a << endl;
    cout << "memory adress pointer --> " << ptra << " " << " memory adress value_a --> " << &value_a << endl;
    cout << " " << endl;
    cout << "I will now dereference the pointer (give it a new value). | *ptra = 111; | ptra is the name of the pointer" << endl;
    *ptra = 111;
    cout << "This is the value of value_a after dereferencing: " << value_a << endl;
    cout << "This is the value of ptra after dereferencing: " << *ptra << endl;
    cout << "This is the memory adress of value_a after dereferencing: " << ptra << endl; //  its the same it will not change
    cout << " " << endl;
    cout << "pointer --> " << *ptra << " " << " Value_a --> " << value_a << endl;
    cout << "memory adress pointer --> " << ptra << " " << " memory adress value_a --> " << &value_a << endl;
    cout << " " << endl;
    cout << "As we can se the memory adress will always be the same, and the value will also always be the same. " << endl;
    cout << " " << endl;
    cout << " ******** VALUE_B ********" << endl;

    int *ptrb = &value_b;
    cout << "This is the starting point. int value_b = 2" << endl;
    cout << " " << endl;
    cout << "This is the value of value_b: " << *ptrb << endl; // with the * it shouws the value
    cout << "This is the memory adress of value_b using ptr: " << ptrb << endl; // * without star it shows the adress.
    cout << "I will now dereference the pointer (give it a new value). | *ptrb = 22; | ptrb is the name of the pointer" << endl;
    *ptrb = 22;
    cout << "This is the value of value_b after dereferencing: " << *ptrb << endl;
    cout << "This is the value of ptrb after dereferencing: " << *ptrb << endl;
    cout << "This is the memory adress of value_b after dereferencing: " << ptrb << endl; //  its the same it will not change
    cout << " " << endl;
    cout << "pointer --> " << *ptrb << " " << " Value_b --> " << value_b << endl;
    cout << "memory adress pointer --> " << ptrb << " " << " memory adress value_b --> " << &value_b << endl;
    cout << " " << endl;
    cout << "I will now dereference the pointer (give it a new value). | *ptrb = 222; | ptrb is the name of the pointer" << endl;
    *ptrb = 222;
    cout << "This is the value of value_b after dereferencing: " << value_b << endl;
    cout << "This is the value of ptrab after dereferencing: " << *ptrb << endl;
    cout << "This is the memory adress of value_b after dereferencing: " << ptrb << endl; //  its the same it will not change
    cout << " " << endl;
    cout << "pointer --> " << *ptrb << " " << " Value_b --> " << value_b << endl;
    cout << "memory adress pointer --> " << ptrb << " " << " memory adress value_b --> " << &value_b << endl;
    cout << " " << endl;
    cout << "As we can se the memory adress will always be the same, and the value will also always be the same. " << endl;
    cout << " " << endl;

    cout << " ******** Now i will laborate ********" << endl;
    cout << " " << endl;
    cout << " " << endl;

    //*ptra = *ptrb; // nu får value_a värdet av value_b // men adressen är detsamma som innan. 
    
    //cout << "value_a pointer värde " << *ptra << " value_a pointer memory adress " << ptra << endl; 
    //cout << "value_b pointer värde " << *ptrb << " value_b pointer memory adress " << ptrb << endl; 

    cout << " " << endl;
    cout << " " << endl;

    double resultDelat = *ptrb / *ptra;

    cout << "*ptrb / *ptra = " << resultDelat << endl;
    cout << "value_a pointer värde " << *ptra << " value_a pointer memory adress " << ptra << endl; 
    cout << "value_b pointer värde " << *ptrb << " value_b pointer memory adress " << ptrb << endl;

    cout << " " << endl;
    cout << " " << endl;

    int resultMulti = *ptra * *ptrb;

    cout << "*ptra * *ptrb = " << resultMulti  << endl;
    cout << "value_a pointer värde " << *ptra << " value_a pointer memory adress " << ptra << endl; 
    cout << "value_b pointer värde " << *ptrb << " value_b pointer memory adress " << ptrb << endl;
    cout << "memory adressen ändras inte när man multiplicerar, adderar eller dividerar." << endl;


    cout << " " << endl;
    cout << " " << endl;

    int resultAddera = *ptra + *ptrb;

    cout << "*ptra + *ptrb = " << resultAddera << endl;
    cout << "value_a pointer värde " << *ptra << " value_a pointer memory adress " << ptra << endl; 
    cout << "value_b pointer värde " << *ptrb << " value_b pointer memory adress " << ptrb << endl; 
    cout << " " << endl;
    cout << "memory adressen ändras inte när man multiplicerar, adderar eller dividerar." << endl;

    cout << " " << endl;
    cout << " " << endl;

    cout << "We can make ptra point to ptrb and ptrb point to ptra" << endl;
    cout << " " << endl;
    cout << "before adress change: " << endl;
    cout << "value_a pointer A värde " << *ptra << " value_a pointer A memory adress " << ptra << endl; 
    cout << "value_b pointer B värde " << *ptrb << " value_b pointer B memory adress " << ptrb << endl; 
    ptrb = &value_a;
    ptra = &value_b;
    cout << "after adress change: " << endl;
    cout << "value_a pointer A värde " << *ptra << " value_a pointer A memory adress " << ptra << endl; 
    cout << "value_b pointer B värde " << *ptrb << " value_b pointer B memory adress " << ptrb << endl; 
    cout << " " << endl;
    
    
    cout << "value_a pointer A värde " << *ptra << " value_a pointer A memory adress " << ptra << endl; 
    cout << "value_b pointer B värde " << *ptrb << " value_b pointer B memory adress " << ptrb << endl; 



 


 
}