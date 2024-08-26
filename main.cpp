#include <iostream>
using namespace std;

int main() { 
    //  Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.
     int a,b,c;
     cout<<"Enter the first number: ";
     cin>>a;
     cout<<"Enter the second number: ";
     cin>>b;
     cout<<"Enter the third number: ";
     cin>>c;
     if(a>=b && a>=c){
         cout<<"The largest number is: "<< a;
     }
     else if(b >= a && b >= c){
         cout<<"The largest number is: "<< b;
     }
     else{
         cout<<"The largest number is: "<< c;
     }

  // Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
  // Grade Criteria:
  // A: 90-100
  // B: 80-89
  // C: 70-79
  // D: 60-69
  // F: 0-59

  int score;
  cout<<"Enter the score: ";
  cin>> score;
  if(score >= 90){
    cout<<"Grade: A";
  }
  else if(score>=80){
    cout<<"Grade: B";
  }
  else if(score>=70){
    cout<<"Grade: C";
  }
  else if(score>=60){
    cout<<"Grade: D";
  }
  else{
    cout<<"Grade: F";
  }
  // Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.
  int month;
  cout<<"Enter the month number: ";
  cin>>month;
  cout<<"The month is: ";
  switch(month){
    case 1: cout<<"January";
    break;
    case 2: cout<<"February";
    break;
    case 3: cout<<"March";
    break;
    case 4: cout<<"April";
    break;
    case 5: cout<<"May";
    break;
    case 6: cout<<"June";
    break;
    case 7: cout<<"July";
    break;
    case 8: cout<<"August";
    break;
    case 9: cout<<"September";
    break;
    case 10: cout<<"October";
    break;
    case 11: cout<<"November";
    break;
    case 12: cout<<"December";
    break;
    default: cout<<"Invalid";
  }
}