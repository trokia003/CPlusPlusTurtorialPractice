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
   
   //---------------------------------------------------------------------------------
   //---------------------------------------------------------------------------------
   
   //multiple variables can be declared and instantiated in the same line
   int x, y = 2, z =-3;
   char letter1 = 'c', letter2 = 'a', letter3;
   
   //---------------------------------------------------------------------------------
   //---------------------------------------------------------------------------------
   
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
   
   //---------------------------------------------------------------------------------
   //---------------------------------------------------------------------------------
   
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
   
   //---------------------------------------------------------------------------------
   //---------------------------------------------------------------------------------
   
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
   
   cout << shorty1 << " " << shorty2 << endl << "I can put something after an endline command" << endl;
   
   //---------------------------------------------------------------------------------
   //---------------------------------------------------------------------------------
   
   /*
   there are a few different storage types -
   		auto: default for local variables
   		register: used to place local variables in a register instead of RAM (if possible) for quick access (such as for counters)
   		static: can be used on a local variable to force the program not to destroy and recreate the same local variable over and over
   			(essentially allowing a function to pick up where it left off at).
   			Class variables can also be instantiated as static to make all objects of that class share the same variable
   		extern: need more research
   		mutable: explained more later in tutorial
   */
   
   //---------------------------------------------------------------------------------
   //---------------------------------------------------------------------------------
   
   /*
   Operators
   
   There are several types of operators in C++:
   		Arithmetic
   		Relational
   		Logical
   		Bitwise
   		Assignment
   		Miscellaneous
   	
   	Arithmetic Operators
   		+ : adds two operands
   		- : subtracts second operand from the first operand
   		* : multiplies the two operands
   		/ : divides the first operand by the second
   		% : divides first operand by second operand and gives remainder
   		++ : increments operand
   		-- : decrements operand
	
	Relational Operators
		== : checks if the two operands are equal
		!= : checks if the two operands are not equal
		> : checks if the first operand is greater than the first operand
		< : checks if the first operand is less than the second operand
		>= : checks if the first operand is greater than or equal to the second operand
		<= : checks if the first operand is less than or equal to the second operand
	
	Logical Operators
		&& : if both operands are non-zero, true
		|| : if one of the operands non-zero, true
		! : logical not (logical Negation) operator
	
	Bitwise Operators
		& : ANDs the bits of two operands
		| : ORs the bits of two operands
		^ : Exlusive OR on the bits of the two operands
		` : logical negation on bits of the operand
	
	Assignment Operators
		= : assign value of right operand to left operand
		+= : add value of right operand to left operand and assign result to left operand
		-= : subtract value of right operand from left operand and then assign result to left operand
		*= : multiply value of left and right operand and assign result to left operand
		/= : divide left operand by value of right operand and assign result to left operand
		%= : perform modulus of right operand on left operand and assign result to left operand
		<<= : left shift left operand by value of right operand and assign result to left operand
		>>= : right shift left operand by value of right operand and assign result to left operand
		&= : AND the bits of the left operand with the bits of the right operand and assign the result to the left operand
		^= : Exclusive Or the bits of the left operand with the bits of the right operand and assign the result to the left operand
		|= : OR the bits of the left operand with the bits of the right operand and assign the result to the left operand
	
	Miscellaneous Operators
		sizeof : returns the number of bytes a variable occupies
		Condition ? X : Y    :    if Condition is true, return X, else return Y (ternary operator)
		, : separates multiple operations
		.  and  -> : used to reference individual members of classes, structures, and unions
		cast [such as int(23.75)] : convert one data type to another
		& : returns the address of a variable (&a will return the physical memory address of the variable 'a')
		* : pointer (gives the value of a variable given a memory address)
		
	
	
	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   */
   
   
   
   
   
   
   return 0;
}
