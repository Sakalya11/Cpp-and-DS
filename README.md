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




# EXP 5

## Aim:
   Study and implement C++ decision-making statements: if, if-else, nested if, switch, and conditional operator.

### Apparatus:
  Vs Code, Github


### Theory:
   
   Conditional statements allow you to make decisions within your programs, executing specific blocks of code based on certain conditions. Here are the four primary conditional statements in C++:

### if 

1)Purpose: Evaluates a condition.

2)Execution: If the condition is true, a specific block of code runs.

### if-else

1)Purpose: Provides an alternative path.

2)Execution: If the condition is true, one block of code runs; if false, another block runs.

### nested if-else

1)Purpose: Evaluates multiple conditions in sequence.

2)Execution: Continues checking conditions until one is true, then executes the corresponding block of code.

### switch case

1)Purpose: Selects one block of code based on a variable’s value.

2)Execution: Instead of multiple nested if-else statements, a switch statement picks the appropriate block to execute.


### Code(if-else):
```
#include<iostream>
using namespace std;

// Sakalya Tatte PRN: 23070123142
int main() 
{
    // if statements 
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout<< "x is greater than y "<<endl;
    }
    

    // else statement
    int time = 20;
    if (time < 18) 
    {
        cout<<"Good Morning"<<endl;
    }
    else{
        cout<<"Good Evening"<<endl;
    }

    // simple if else 

    int  num;
    cout<<"Enter positive number: ";
    cin>>num;
    if(num==0) {
        cout<<num<<"You have entered zero"<<endl;
    }
    else if(num%2!=0){
        cout<<num<<" is odd"<<endl;
    }
    else {
        cout<<num<<" is even"<<endl;
    }
    
    return 0;


}
```

### Output: 
![image](https://github.com/user-attachments/assets/51e57c13-4ee4-4dae-85b6-d6538482b9a8)


### Code (Nested if-else):
```
#include<iostream>
using namespace std;

//Name: Sakalya Tatte PRN:23070123142
int main() {
    int  num1, num2, num3;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;
    cout<<"Enter number-3: ";
    cin>>num3;

    if(num1>num2) {
        if(num1>num3) {
            cout<<num1<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    else if(num2>num1) {
        if(num2>num3) {
            cout<<num2<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    else {
        cout<<"All three numbers are equal";
    return 0;
    }
}
```

### Output:
  ![image](https://github.com/user-attachments/assets/79feb9a4-2385-4b97-98a7-44670cc4146c)


### Code (Switch case):
```
#include<iostream>
using namespace std;
 // Simple calculator using 'Switch case'
 // Name: Sakalya Tatte PRN: 23070123142
 int main()
 {
    int choice;
    double num1,num2;
    cout<<"This is a simple calculator"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for Division"<<endl;
    cout<<" Enter the operation choice number (1-4)"<<endl;
    cin>>choice;

    cout<<"Enter any two numbers: "<<endl;
    cin>>num1>>num2;

    switch(choice){
        case 1:
        cout<<"Addition = "<<num1+num2<<endl;
        break;

        case 2:
        cout<<"subtraction = "<<num1 - num2<<endl;
        break;

        case 3:
        cout<<"Multiplication = "<<num1*num2<<endl;
        break;

        case 4:
        cout<<" Division = "<<num1/num2<<endl;
        break;
    }

    return 0;
 }
```

### Output:
![image](https://github.com/user-attachments/assets/f8db5d13-1bfe-4842-82dd-00d5a76f243a)



### Conclusion:
  This program helps us understand how bitwise operators can be used in C++. These bitwise operations can be used for performance optimization as they pack multiple values in a single variable making the program more memory efficient.






# EXPERIMENT 6 (Desicion making loops)

## Aim:
  To learn how to implement decision making statement loops like for, while and do while in C++

### Apparatus:
  Vs Code, Github


### Theory:
  Decision making loops are useful to execute a block of code repeatedly for a certain number of times, ranging from 1 to infinite, depending on the condition or iterations.

Types of Decision Making Loops:
### for() loop

1)A control flow statement that executes a block of code repeatedly for a specified number of iterations.

2)Continues to run the code until a predefined condition is met.

### while() loop

1)A control flow statement that repeatedly executes a block of code as long as a specified condition remains true.

2)Continues to run the code until the condition evaluates to false.

### do while() loop

1)A control flow statement that executes a block of code at least once, and then repeatedly executes the code as long as a specified condition remains true.

2)The condition is evaluated after the execution of the code block, ensuring that the code runs at least once.



### Code: 
```
#include <iostream>
using namespace std;
// Sakalya Tatte PRN: 23070123142
int main() {
    int s[100][100];
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            s[i][j] = i * 100 + j;
        }
    }

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }


    int x = 0;
    cout << "While loop" << endl;
    while (x < 10) {
        cout << x << endl;
        x++;
    }

    int y = 0;
    cout << "Do-while loop" << endl;
    do {
        y++;
        cout << y << endl;
    } while (y < 4);


    int a = 0, b = 0;
    cout << "Nested for loop" << endl;
    for (int i = 0; i < 4; i++) {
        a++;
        for (int j = 0; j < 4; j++) {
            b++;
            cout << s[a][b] << " ";
        }
        cout << endl;
    }

    int k=0,l=0;
    while(k<5)
    {
        while(l<5)
        {
            k++;
            l++;
            cout<<k<<endl;
            cout<<l<<endl;
        }
    }

    //pattern

    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<= 5-i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"Hello World"<<endl; 
                }
                q++;
        }
        // this will produce 25 hello world commands 5*5

    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"World hello"<<endl;
            i++; //prints world hello 5 times 
        }
    }   

    return 0;
}
```

### Output
![image](https://github.com/user-attachments/assets/a86c5ca4-1143-482a-bc49-b17ba8be0bc7)
![image](https://github.com/user-attachments/assets/a2cf6bab-bad9-44a8-8b6d-d58c6b218794)


### Conclusion: 
   In this experiment we learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language






# EXPERIMENT 7.1 (ARRAYS IN C++)

## Aim: 
  To study and implement Arrays in C++

### Apparatus:
  Vs Code, Github


### Theory: 
   In C++, an array is a data structure that allows you to store multiple values of the same type in contiguous memory locations. This makes it easier to manage and manipulate large sets of data.

### Declaration and Initialization: To declare an array, you specify the data type, the array name, and the size of the array. For example:

```
int arr[5]; // Declares an array of 5 integers
```
You can also initialize an array at the time of declaration:
```
int arr[5] = {1, 2, 3, 4, 5}; // Initializes the array with values
```
### Accessing Elements: Array elements are accessed using their indices, which start from 0. For example, arr[0] accesses the first element, and arr[4] accesses the fifth element.

### Properties:

1) Fixed Size: Once declared, the size of an array cannot be changed.
2) Contiguous Memory: Elements are stored in contiguous memory locations, which allows for efficient access and manipulation.
3) Indexing: The first element is at index 0, the second at index 1, and so on.


### Common Operations:

1) Traversal: Visiting each element in the array.
2) Insertion: Adding an element at a specific index.
3) Deletion: Removing an element from a specific index.
4) Searching: Finding the index of a specific element.

### Advantages:

1) Random Access: Elements can be accessed directly using their indices.
2) Cache Efficiency: Contiguous memory allocation improves cache performance.

### Code:
```
#include <iostream>
using namespace std;

int main()
{
    int a[100] = {78, 890, 67, 34, 13};
    int b[5] = {56, 78, 12, 90, 97};
    int c[100] = {19, 10, 100, 45, 47};

    cout << "Traditional method" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;

    //modern method printing 
    cout<<"Modern method of printing of an array"<<endl;
    for(int j: b)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    cout<<"--------------------------------"<<endl;
    // user defined array
    cout<<"user defined array"<<endl;
    int array[100],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"The array is as follows: "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    cout<<"-----------------------------------"<<endl;

    // reversing an array
    cout<<"Reversing an array"<<endl;
    for(int j = n-1;j>= 0;j--)
    {
        cout<<array[j]<<endl;
    }
    cout<<endl;

    //finding marks 
    cout<<"-----------------------------------"<<endl;
    cout<<"Finding an element in a array"<< endl;
    int mark,marks[100],flag = 0,count = 0;
    cout<<"Enter 5 elements "<<endl;
    for(int i =0;i<5;i++)
    {
        cin>>marks[i];
    }
    cout<<"Which element position do u want"<<endl;
    cin>>mark;

    for(int i =0;i<5;i++)
    {
        if(mark == marks[i])
        {
            cout<<"position of the element is at: "<<i<<endl;
            count++;
            flag = 1;
        }
    }

    if(count == 0)
    {
        cout<<"No elements found"<<endl;
    }
    else if(flag == 1)
    {
        cout<<"Element is present at: "<< count << "times" << endl;
    }

    cout<<"-----------------------------------"<<endl;
    // sum of an array
    cout<<"The sum of array elements "<<endl;
    int sum = 0;
    for(int i = 0;i<5;i++)
    {
        sum = sum+marks[i];
    }
    cout<<"Sum of elements: "<<sum<< endl;

    //average of an array 

    float avg;
    avg = sum/5;

    cout<<"The average of the array is: "<<avg<<endl;

    cout<<"-----------------------------------------"<<endl;

    // minimum of an array

    int min=marks[0],max=marks[0];

    for(int i =0;i<5;i++)
    {
        if(min<marks[i])
        {
            min = marks[i];
        }
    }
    cout<<"\nThe least value of the array is: "<<min<<endl;

    for(int i =0;i<n;i++)
    {
        if(max>marks[i])
        {
            max = marks[i];
        }
    }
    cout<<"\nThe highest value of the array is: "<<max<<endl;

    cout<<"-----------------------------"<<endl;
    
    return 0;
}
```

### Output: 
![image](https://github.com/user-attachments/assets/e9a86ae2-bf9d-4f9a-b4a7-5129e4071d57)

### Conclusion: 
  We learnt how to implement arrays and its operations in C++ programming languages.




# EXPERIMENT 7.2(STRINGS IN C++)

## Aim: 
  To study and implement Strings in C++


### Apparatus:
  Vs Code, Github

### Theory:
  String: A datatype that represents a sequence of characters, used for storing and manipulating textual data in computer programs.In most programming languages, strings are treated as a distinct data type. This means that strings have their own set of operations and properties. They can be declared and manipulated using specific string-related functions and methods.

### Applications of Strings:
1) Hashing and Encryption: Generating random strings for data security or encryption.
2) Data Representation: Representing and processing textual data in various applications.
3) Database Operations: Handling and querying textual data within databases.
4) Web Development: Managing and displaying textual content in web applications.


### Common String Operations:
1) Find the length of a string
2) Accessing Characters from a string using its indexing value
3) Concating or merging of 2 strings
4) Appending and Concatenating Strings
5) comparing 2 strings
6) Making substrings
7) Searching a character from a string
8) Replacing a character or substring from the orignal string
9) Inserting a character into a string
10) Deleting or erasing a character from a string
11) Coversion to obtain a C_type string (character array)

(Note: The above operations can be directly accessed in C++ programming language that has been stored in String header file for example length() to find the length of a string, at(), append() , compare() , substring() , find(), etc.)


### Code: 
```
#include<iostream>
#include<string>
// Sakalya Tatte PRN: 142
using namespace std;

int main()
{
    string a;
    cout<<"Enter any string"<<endl;
    cin>> a;
    cout<<"The entered string is: "<<a<<endl;

    cout<<"-----------------"<<endl;

    cout<<"Concatenation of 2 strings: "<<endl;
    cout<<"\nEnter 2 strings to concatenate: "<<endl;
    string str1,str2,str3,str4;
    cin>> str1>> str2;
    cout<<"\nConcatenation of the 2 strings: "<<str1+str2<<endl;

    cout<<"-------------------"<<endl;
    cout<<"\nReversing a string"<<endl;
    cout<<"\nEnter a string to reverse"<<endl;
    cin>> str3;
    for(int i = str3.length()-1;i>=0;i--)
    {
        cout<<str3[i];
    }

    cout<<"\n-------------------------"<<endl;
    cout<<"\nTo check whether the given string is a Palindrome"<<endl;
    cout<<"Enter a string to check whether a given string is a Palindrome"<<endl;
    cin>>str4;
    int len = str4.length();
    bool flag = true;
    for (int i = 0; i < len / 2; i++)
    {
        if (str4[i] != str4[len - 1 - i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout<<"The given string is  a palindrome"<<endl;
    }
    else 
    {
        cout<<"The given string is not a palindrome"<<endl;
    }


    return 0;
}
```


### Output: 
![image](https://github.com/user-attachments/assets/2159f828-8c0a-498f-922c-c8f83cc5c699)

### Conclusion: 
   In this experiment we learnt how to implement string and its operations like sorting, searching, etc.


# EXPERIMENT 8

## Aim: 
  To study and implement multidimensional arrays in C++ (matrices)

### Apparatus:
  Vs Code, Github

### Theory: 
  In C++, a multidimensional array allows tabular data storage through an array of arrays. One way to display a 2D array is as a matrix with rows and columns. When anything is expressed using several sets of square brackets, as {int matrix[3][4];}, a 3x4 matrix is produced. To access each element, there are two indices: one for the row and one for the column. 3D arrays that add a dimension, such as \int cube[2][3][4];{, work similarly. For presenting complex data structures like tables, grids, and matrices, these arrays come in handy. Effective memory management and access patterns are essential for optimal performance with large multidimensional arrays.


### Applications of Multidimensional arrays:

1) Mathematics and Engineering: For matrices and tensor operations.
2) Graphics: For image representation where each pixel may have multiple color channels.
3) Simulations and Games: To represent grids or maps.

### Code: 
```
#include <iostream>
using namespace std;
// Sakalya PRN: 23070123142
int main() {
int r, c;

// Ask for matrix dimensions
cout << "Enter the number of rows: ";
cin >> r;
cout << "Enter the number of columns: ";
cin >> c;

// Declare matrices
int m1[r][c], m2[r][c], sum[r][c], prod[r][c];

// Input elements for the first matrix
cout << "Enter the elements of the first matrix:\n";
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
        cin >> m1[i][j];
    }
}

// Input elements for the second matrix
cout << "Enter the elements of the second matrix:\n";
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
        cin >> m2[i][j];
    }
}

// Perform matrix addition
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        sum[i][j] = m1[i][j] + m2[i][j];
    }
}

// Perform matrix multiplication
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        prod[i][j] = 0;
        for (int k = 0; k < c; k++) {
            prod[i][j] += m1[i][k] * m2[k][j];
        }
    }
}

// Calculate diagonal sum of the first matrix
int diagSum = 0;
for (int i = 0; i < r; i++) {
    diagSum += m1[i][i];
}

// Check if the elements of the first row are equal to the elements of the second row in the first matrix
bool rowEqual = true;
for (int j = 0; j < c; j++) {
    if (m1[0][j] != m1[1][j]) {
        rowEqual = false;
        break;
    }
}

// Display the first matrix
cout << "\nThe first matrix is:\n";
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        cout << m1[i][j] << " ";
    }
    cout << endl;
}

// Display the second matrix
cout << "\nThe second matrix is:\n";
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        cout << m2[i][j] << " ";
    }
    cout << endl;
}

// Display the sum of the matrices
cout << "\nThe resultant matrix after addition is:\n";
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        cout << sum[i][j] << " ";
    }
    cout << endl;
}

// Display the product of the matrices
cout << "\nThe resultant matrix after multiplication is:\n";
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        cout << prod[i][j] << " ";
    }
    cout << endl;
}

// Display the diagonal sum of the first matrix
cout << "\nThe diagonal sum of the first matrix is: " << diagSum << endl;

// Display whether the first row is equal to the second row in the first matrix
if (rowEqual) {
    cout << "The elements of the first row are equal to the elements of the second row in the first matrix.\n";
} else {
    cout << "The elements of the first row are NOT equal to the elements of the second row in the first matrix.\n";
}

return 0;
}
```



### Output:
![image](https://github.com/user-attachments/assets/d69be2e6-9868-4591-aaaf-9c2b8d9872c9)


### Conclusion:
   in this experiment we learnt to use the multidimensional arrays (matrix) and how to perform operations on them

