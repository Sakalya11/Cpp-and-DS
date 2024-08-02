# EXP 1

## Aim:
  To get started with C++ programming, first write a simple "Hello World" program using std::cout to display the message. Next, create a program to calculate and display the sum and average of two user-input numbers. For checking if a number is even or odd, use the modulo operator to determine if the number is divisible by 2. Lastly, write a program to check if a given year is a leap year by testing if the year is divisible by 4, and if divisible by 100, also by 400.

### Theory:
 "Hello World" and other introductory programs serve as a means to grasp the fundamental syntax of C++ and familiarize oneself with its standard library. These initial programs aid programmers in learning basic input/output functions, arithmetic operations, and conditional statements. They are crucial for gaining an understanding of fundamental data types, variables, and operators used in C++.  
 
### Apparatus:
 VS Code, Github

 ### Hello world code:
```
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

### Conclusion:
  These basic programs serve as introductory exercises for understanding the fundamental structure and syntax of C++. Through these exercises, we learn to utilize input/output commands, as well as arithmetic and logical operators, and conditional statements.












   


# EXP 2

## Aim:
  Employing the sizeof operator allows us to showcase the memory sizes allocated to fundamental data types in C++. This exploration enhances our understanding of how memory is allocated for various data types within the language.

### Theory:
  
The sizeof operator in C++ is utilized to ascertain the size of data types in bytes. It helps programmers understand the memory allocation requirements of different data types within the language. By using sizeof, one can retrieve the exact amount of memory allocated to variables and data structures, aiding in efficient memory management and optimization of program performance. This operator is essential for ensuring that data is stored and manipulated efficiently, especially in scenarios where memory usage needs to be closely monitored and managed.

### Apparatus:
 VS Code, Github

### Output:
![image](https://github.com/user-attachments/assets/d33f3268-a2b1-438d-9ff9-6cc6e9ee571f)


### Conclusion:





# EXP 3

## Aim:
To illustrate the use of arithmetic operators, assignment operators, and conditional operators in C++.

### Theory:
