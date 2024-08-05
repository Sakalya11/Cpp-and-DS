#include<iostream>
using namespace std;

//Name: Sakalya Tatte PRN:23070123142
int main() {
    int choice;
    cout<<"1. Monday"<<endl<<"2. Tuesday"<<endl<<"3. Wednesday"<<endl<<"4. Thursday"<<endl<<"5. Friday"<<endl<<"6. Saturday"<<endl<<"7. Sunday"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice) {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Wrong Input";
    }
return 0;
}
