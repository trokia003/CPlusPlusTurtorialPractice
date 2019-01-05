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
	
	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   
	/*
	There are three kinds of loops in C++
		While Loop : repeats a group of statements while a given condition holds true
		For Loop : repeats a group of statements for a set number of times
		Do While Loop : repeats a group of statements while a given condition holds true, and it is guaranteed that the loop will run at least one time
	*/
	
	//while loop example
	int whileLoopSentinel = 0;
	
	while (whileLoopSentinel < 10){
		cout << "The value of 'whileLoopSentinel' is " << whileLoopSentinel << endl;
		whileLoopSentinel++;
	}
	
	//for loop example
	for(int forLoopCounter = 10; forLoopCounter < 20; forLoopCounter++){
		cout << "The value of 'forLoopCounter' is " << forLoopCounter << endl;
	}
   	
   	/*
	There are also statements for controlling loops
		Break : stops the current loop
		Continue : ends the current iteration and moves onto the next iteration of the loop
	*/
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	In C++ there are decision-making statements
		If statement : checks in the condition is true, if so executes a segment of code
		If... else statement : sequentially checks each conditonal statement until a true statement is found (if any) and executes the statements for that condition
		switch statement : allows a value to be tested against a list of conditions and executes the statements for any condition that is true
		
		these statements can also be nested within one another
	*/
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	Functions have a declaration and definition
	
	functions must be declared at the start of the class and are defined later in the class.
	When a function is declared, the return type will be given before the name of the function, such as int max(first number, second number) or boolean checkIsEven(number)
	
	The parameters given can also be declared as just normal variables or as pointers.
	using normal variables means that the function execution will not change the value of the arguments used in that function call (call by value).
	however, if it is desired to change the value of the arguments, pointers can be used (call by pointer)
	*/
   
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	When using numbers and mathematics in c++ many built-in operations can be used once <cmath> is imported.
	These operations include cosine, sine, square root, log, rounding, generating random numbers, etc..
	*/
	
	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	Arrays allow for us to create a group of variables that are all of the same type.
	
	for example, an integer array can be made like this - int balance[100]; 
	this creates an array of size 100, where each position (or index) can hold a different integer value
	
	Arrays can be multidimensional - int balance[100][100][100];
	this would be a 3-d cube with a total volume of 1,000,000 or in other words there are 1,000,000 unique integer values that can be stored in this multidimensional array
	
	the identifier of an array is actually a pointer to the first element of that array.
	*/
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	   Strings can be made as either as a char array (as in C) or using the built-in string class in C++
	   
	   there are several built-in methods for using and altering both kinds of strings
	   */
	   
	   char charStringExample[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	   cout << charStringExample << endl;
	   string stringExample = "World";
	   cout << stringExample << endl;
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	   Pointers are variables that hold the address of another variable (that is to say - the address to the variable's location in memory)
	   
	   Pointers are useful for situations where normal variables simply aren't enough to perform a task, such as passing a variable by reference
	   
	   note: pointers are created, and their values accessed, using the unary operator '*' and address of variables can be access by the unary operator '&'
	   */
   	
   	int pointerInt = 12345;
   	int *pointerIntExample = &pointerInt;
   	cout << "the value of the integer at address " << pointerIntExample << " is " << *pointerIntExample << endl;
   	
   	
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	   References allow us to create variables that can be called in place of the original.
	   
	   This is particularly useful for calling functions by reference.
	   
	   keep in mind, references must be initialized when created, must refer to a variable that is NOT null, and cannot be changed once created
	   */
   	
   	char referenceChar = 'C';
   	char& referenceCharExample = referenceChar;
   	cout << referenceChar << referenceCharExample << endl;
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	   in C++, to utilize time you must include the <ctime> header.
	   C++ does not define its own time objects or types, it inherits the structs and formats from C
	   */
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	   C++ utilizies the iostream import to allow input and output of data
	   
	   basic terminology: << - stream insertion operator, >> - stream extraction operator
	   */
   	
   	//---------------------------------------------------------------------------------
   	//---------------------------------------------------------------------------------
   	
   	/*
	   structs are a means by which we can define our own data types.
	   We can combine the basic data types in these structs as needed.
	   
	   Essentially structs are used as records
	   */
   	
   	
   return 0;
}
