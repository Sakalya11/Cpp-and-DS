# EXP 1

## Aim:
  To get started with C++ programming, first write a simple "Hello World" program using std::cout to display the message. Next, create a program to calculate and display the sum and average of two user-input numbers. For checking if a number is even or odd, use the modulo operator to determine if the number is divisible by 2. Lastly, write a program to check if a given year is a leap year by testing if the year is divisible by 4, and if divisible by 100, also by 400.

### Theory:
 "Hello World" and other introductory programs serve as a means to grasp the fundamental syntax of C++ and familiarize oneself with its standard library. These initial programs aid programmers in learning basic input/output functions, arithmetic operations, and conditional statements. They are crucial for gaining an understanding of fundamental data types, variables, and operators used in C++.  
 
### Apparatus:
 VS Code, Github

 ### Hello world code:
```
//Sakalya Tatte PRN: 23070123142
#include <iostream>

using namespace std;

int main()

{

cout<<"Hello World";

return 0;

}
```
### Hello world output:
![image](https://github.com/user-attachments/assets/bea800d3-9618-4d12-979b-cfde8eb04c81)

### Sum of two numbers code: 
```
//Sakalya Tatte PRN: 23070123142
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a;
	cin>>b;
	int sum1=a+b;
	cout<<sum1<<endl;
	return 0;
}
```

### Sum of two numbers output:
![image](https://github.com/user-attachments/assets/66c5f522-bd32-4b83-bb1a-394afa16be80)

### Even/Odd code: 
```
//Sakalya Tatte PRN: 23070123142
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	if(a%2==0){
	cout<<"Even number"<<endl;
}
else {
	cout<<"odd number";
}
return 0;
}
```

### Even/Odd output:
![image](https://github.com/user-attachments/assets/4a0c1999-a462-4251-995c-722b132637c5)

### Leap year code: 
```
//Sakalya Tatte PRN: 23070123142
#include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter the year"<<endl;
	cin>>year;
	if(year%400==0) {
        cout <<year<<"is a leap year";
    } else if(year % 100==0) {
        cout <<year<<"is not a leap year";
    } else if(year % 4==0) {
        cout <<year<<"is a leap year";
    } else {
        cout <<year<<"is not a leap year";
    }

    return 0;
}
```

### Leap year output:
![image](https://github.com/user-attachments/assets/097e0e62-8a45-4d71-a584-61dc61482566)

## Conclusion:
  These basic programs serve as introductory exercises for understanding the fundamental structure and syntax of C++. Through these exercises, we learn to utilize input/output commands, as well as arithmetic and logical operators, and conditional statements.











   


# EXP 2

## Aim:
  Employing the sizeof operator allows us to showcase the memory sizes allocated to fundamental data types in C++. This exploration enhances our understanding of how memory is allocated for various data types within the language.

### Theory:
  
The sizeof operator in C++ is utilized to ascertain the size of data types in bytes. It helps programmers understand the memory allocation requirements of different data types within the language. By using sizeof, one can retrieve the exact amount of memory allocated to variables and data structures, aiding in efficient memory management and optimization of program performance. This operator is essential for ensuring that data is stored and manipulated efficiently, especially in scenarios where memory usage needs to be closely monitored and managed.

### Apparatus:
 VS Code, Github

### Code:
```
//Sakalya Tatte PRN: 23070123142
#include<iostream>
using namespace std;
int main()
{
   int a = 10;
   short int a1 = 15;
   unsigned short  int a2 = 20;
   long long int a3;
   char b = 'B';
   wchar_t b1;
   float c = 3.14;
   double d;
   long double d1;
   unsigned long long int d2;


  static int e1;
  register int e2 = 100;
  extern float e3 ;
  
   cout<<endl<<sizeof(a);
   cout<<endl<<sizeof(a1);
   cout<<endl<<sizeof(a2);
   cout<<endl<<sizeof(a3);
   cout<<endl<<sizeof(b);
   cout<<endl<<sizeof(b1);
   cout<<endl<<sizeof(c);
   cout<<endl<<sizeof(d);
   cout<<endl<<sizeof(d1);
   cout<<endl<<sizeof(d2);
   cout<<endl<<sizeof(e1);
   cout<<endl<<sizeof(e2);
   cout<<endl<<sizeof(e3);
    return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/d33f3268-a2b1-438d-9ff9-6cc6e9ee571f)


### Conclusion: 

   This program demonstrates the use of the sizeof operator to determine the size of various data types in C++. Understanding the sizes of these data types helps us make better memory management decisions and optimize our programs.





# EXP 3

## Aim:
To illustrate the use of arithmetic operators, assignment operators, and conditional operators in C++.

### Theory:

This program demonstrates the use of different types of operators in C++ those are as follows: 

Arithmetic Operators:
These include + (addition), - (subtraction), * (multiplication), / (division), and % (modulus). They are used to perform basic mathematical operations in C++.

Assignment Operators:
These operators are used to assign values to variables. The basic assignment operator = assigns a value to a variable, while operators like +=, -=, *=, and /= combine the particular arithmetic operation with assignment.

Comparison Operators:
These include == (equal to), != (not equal to), > (greater than), < (less than), >= (greater than or equal to), and <= (less than or equal to). They are used to compare values and give the result as a boolean value, either true or false.


### Code:
```
#include <iostream>
using namespace std;

//Name: Sakalya Tatte 
//PRN:23070123142

int main() {
    // Arithmetic Operators
    int a = 10;
    int b = 5;
    
    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;

    // Assignment Operators
    int c = a;
    c += b;
    std::cout << "Assignment Operators:" << std::endl;
    std::cout << "c after c += b: " << c << std::endl;
    c -= b;
    std::cout << "c after c -= b: " << c << std::endl;
    c *= b;
    std::cout << "c after c *= b: " << c << std::endl;
    c /= b;
    std::cout << "c after c /= b: " << c << std::endl;
    c %= b;
    std::cout << "c after c %= b: " << c << std::endl;

    // Comparison Operators
    std::cout << "Comparison Operators:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;    

    return 0;
}
```
### Output:
  ![image](https://github.com/user-attachments/assets/6346dfc3-8caa-46ef-b66d-9d80c85bc933)

### Conclusion: 
   This program provides an overview of how different types of operators are used in C++. Understanding these operators is important for performing various operations and implementing logic in C++ programs. This program serves as a practical guide for beginners to get familiar with operators and their applications in C++.












# EXP 4

## Aim: 
  This program illustrates the use of bitwise operators in C++.

### Apparatus:
  Vs Code, Github

### Theory:
   These operators manipulate individual bits of integers, which can be useful for optimization and low-level operations. Here’s a concise overview:


### Bitwise AND (&):

1)Performs a bitwise AND operation between two integers.

2)If both corresponding bits are 1, the result bit is 1; otherwise, it’s 0.

### Bitwise OR (|):

1)Performs a bitwise OR operation.

2)If at least one of the corresponding bits is 1, the result bit is 1.

### Bitwise XOR (^):

1)Performs a bitwise XOR (exclusive OR) operation.

2)If the corresponding bits are different, the result bit is 1; otherwise, it’s 0. 


### Bitwise NOT (~):

1)Inverts all the bits (bitwise complement).

2)If a bit is 1, its result bit is 0, and vice versa.

### Left Shift (<<):

1)Shifts the bits of the left operand to the left by the specified number of positions.

2)New bits on the right are set to 0.

### Right Shift (>>):

1)Shifts the bits of the left operand to the right by the specified number of positions.

2)The behavior of the leftmost bits depends on whether the type is signed or unsigned.


### Code:
```
#include<iostream>
using namespace std;

//Name: Sakalya Tatte PRN:23070123142

int main()
{
    int a = 5;
    int b = 3;
    int AND = a&b;
    int OR = a|b;
    int XOR = a^b;
    int NOT = ~a;
    int LEFT_SHIFT = a<<b;
    int RIGHT_SHIFT = a>>b;
    
    cout<<"AND:"<<AND<<endl;
    cout<<"OR:"<<OR<<endl;
    cout<<"XOR:"<<XOR<<endl;
    cout<<"NOT:"<<NOT<<endl;
    cout<<"LEFT_SHIFT:"<<LEFT_SHIFT<<endl;
    cout<<"RIGHT_SHIFT:"<<RIGHT_SHIFT<<endl;

  return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/9f60140a-a783-4ebb-9407-e6e175e6db55)


### Conclusion:
   
This program demonstrates how bitwise operators can be utilized in C++. These operations are beneficial for performance optimization, as they allow for the packing of multiple values into a single variable, enhancing memory efficiency.
