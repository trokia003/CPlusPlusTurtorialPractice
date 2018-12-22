#include <iostream>
using namespace std;

#define CONSTANT1 10;

// main() is where program execution begins.
int main() {
   cout << "Hello World" << endl; // prints Hello World
   
   
   /* This is a multi-line comment */
   //this is a single line comment
   
   //Boolean
   bool yes = true;
   bool no = false;
   
   //Character
   char thisCharacter = 'a';
   char thatCharacter = 'b';
   
   //Integer
   int bigInt = 214748364;
   int smallInt = 21;
   
   //Floating Point
   float fewDecimals = 2.1;
   float manyDecimals = 2.15647;
   
   //Double Floating Point
   double fewDecimalPoints = 2.136;
   double manyDecimalPoints = 2.15647795486;
   
   
   //multiple variables can be declared and instantiated in the same line
   int x, y = 2, z =-3;
   char letter1 = 'c', letter2 = 'a', letter3;
   
   
   //variables have three scopes in C++
   /*
   		1) Local Variables - declared inside a function
   		2) Formal Parameters - variables declared as function parameters
   		3) Global Variables - Declared outside of any function
   */
   
   /*
   		Local and Global variables can share the same name,
   		however local variables will take precedence over global variables
   */
   
   //note: gloabl variables are given an initial value automatically, local variables are not
   
   
   //constants
   /*
   When creating constants, there are two ways to declare a constant
   		1) #define (pre-processor)
   		2) const
   	
   	both of the above lines are valid ways to create a constant variable.
   	
   	note: it is common practice to declare constant variables with all capitals
   */
   
   const int CONSTANT2 = 10;
   const char CONSTANT3 = 'a';
   
   
   /*
   C++ allows for prefixes to be used as modifiers to a few variables types.
   the variable types that have these prefixes are int, char, and double.
   the prefixes (modifiers) are signed, unsigned, long, short.
   if a prefix is not given a type, then it is defaulted to int.
   */
   
   //long/short increase/decreases the number of bits alloted to a variable
   //signed variables can have a negative numerical value, unsigned cannot
   
   short int shorty1;
   short unsigned int shorty2;
   
   shorty2 = 60000;
   shorty1 = shorty2;
   
   cout << shorty1 << " " << shorty2 << endl;
   
   
   
   
   
   
   
   return 0;
}
