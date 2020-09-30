/*

    Function even_or_odd takes a number as input and determines whether it's true or false.
    returns a string "is even" if it is even and "is odd" if it's a odd number.

*/

#include<iostream> 
using namespace std; 

string even_or_odd(int number){ 
    if(number%2 == 0){ 
        return " is even";
    } 
    else{ 
        return " is odd";  // if fails to execute means remainder is 1 that's odd. 
    } 
} 

int main(){ 
    int num;       
    cin >> num;    // taking user input 

    cout << "The Give number "<< num << even_or_odd(num);  //calling function with passing copy of value of variable num and printing output 
    return 0;
} 
