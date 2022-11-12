[The_C_Beginner's_Handbook_Resource_Link](https://www.freecodecamp.org/news/the-c-beginners-handbook/?inf_contact_key=aafd5a925917bd004a21e9a62b882b286bf72b7be6507ffa57af3236798ca349)

Introduction;
Low Level Programming, most useful for programmng embedded devices and internet servers built with Linux
A compiled programming language, like Go, Java, Swift or Rust, while other programming languages like Python, Ruby, Javascript are interpreted languages

A compiled language generates a binary file that can be directly executed and distributed

C is not garbage collected, thus we have to manage memory ourselves. 


Program Structure

#include <library_name> --> imports library

main() --> entry point of any C program. Wraps other functions. A function is a routine that takes one or more arguments and returns a single value. In the case of main, the function gets no arguments, and returns an integer. The function body is wrapped in curly braces {}, and inside the body, we have all the code that the function needs to perform its operations. The main function will be run by the operating system when the program is executed.

void --> keyword for the argument

int --> keyword for the returned value

Program Execution
C being a compiled language, implies that to run a program, we must first compile it. Type gcc in the terminal window to confirm that the C compiler is installed. Learn about the nano editor in the terminal. To compile and run a program, within the terminal, type gcc followed by program_name followed by -o followed by program_output_name. This will generate an executable.To run the executable, type ./program_output_name

Variables & Types
C is a statically typed language;any variable has an associated type and this type is known at compilation time. When you create a variable in C, you have to specify the type of the variable at the declaration. E.g We declare a variable age with a type int;

int age --> this will initialize a variable age, with type specific 'integer'

A variable can also be initialized at declaration, specifying the initial value:

int age = 37;

Once you declare a variable, you are then able to use it in your program code. You can change its value at any time, using the = operator eg;

age = 100 (provided the new value is of the same type)

C built-in data types are int, char, short, long, float, double, long double

Integer numbers; we can define integer values using char, int, short, long. Most of the time, you will use int to store an integer, and in some cases, you may want to choose 1 of the other 3 options. The char type is commonly used to store letters of the [ASCII_Chart](https://www.asciitable.com/), but can also hold small integers from -128 to 127. It takes at least 1 byte. int takes atleast 2 bytes. short takes atleast 2 bytes. long takes atleast 4 bytes. The exact numbers that can be stored in each data type depends on the implementation and the architecture. We are guaranteed that short is not longer than int. And long is not shorter than int. The [ANSI_C_Spec](https://en.wikipedia.org/wiki/ANSI_C) standard determines the minimum values of each type, making it possible to know the minimum value we can expect to have at our disposal. 

Unsigned integers; for all the above data types, we can preprend unsigned to start the range at 0, instead of a negative number. Consider this; unsigned char will range from 0 to atleast 255. unsigned int will range from 0 to atleast 65,535. unsigned short will range from 0 to atleast 65,535. unsigned long will range from 0 to atleast 4,294,967,295

The problem with overflow; given these limits, how can we make sure that our numbers don't exceed the limit? What happens if they exceed the limit? Incrementing unsigned int number at 255 will return 256. Incrementing unsigned char number at 255 will return 0. It resets starting from the initial possible value. If you have unsigned char number at 255 and add 10 to it, you will get 9. If you don't have a signed value, the behaviour is undefined it will basically give you a huge number which can vary. C doesn't protect you from going over limits of a type. You need to take care of this yourself.

Warnings when declaring the wrong type; when you declare a variable and initilize it with the wrong value, the gcc compiler should warn you. It also warns you in direct assignments. But it doesn't, if you increase the number using e.g. +=

Floating point numbers; this type can represent a much larger set of values than integers can. They can also represent fractions, which integers can't. Using floating point numbers, we represent numbers as decimal numbers times powers of 10. You might see floating point number written as 1.29e-3,-2.3e+5, etc. float, double and long double are used to represent numbers with decimal points (floating point types). All can represent both positive and negative numbers. The minimum requirements for any C implementation is that float can represent a range between 10^-37 and 10^+37, and it is typically implemented using 32 bits. double can represent a bigger set of numbers. long double can hold even more numbers. The exact figures, as with integer values depend on the implementation.