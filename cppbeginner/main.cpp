#include <iostream>
#include <cmath>

using namespace std;

/* void sayHi(string name, int age){
 *         cout << "Hello User: " << name <<" "<< age;
 *
 *     }
 *
 * double cube(double num){
 *     double result = num * num * num;
 *     return result;
 * }
 */

/*  int getMax(int num1, int num2, int num3){
 *     int result;
 *     if(num1 >=num2 && num1 >= num3){
 *         result = num1;
 *     }else if(num2 >= num1 && num2 >= num3){
 *         result = num2;
 *     }else{
 *         result = num3;
 *     }
 */
/*     if(num1 > num2){
 *
 *         result = num1;//== >= <= !=
 *
 *     }else{
 *         result = num2 ;
 *     }
 */
/*     return result;
 *  }
 */

/*  string getDayOfWeek(int dayNum){
 *     string dayName;
 */
/*     if(dayNum == 0){
 *         dayName = "Sunday";
 *     }else if(dayNum == 1){
 *         dayName = "Monday";
 *     }
 */
/*     switch(dayNum){
 * case 0:
 *     dayName = "Sunday";
 *     break;
 * case 1:
 *     dayName = "Monday";
 *     break;
 * case 2:
 *     dayName = "Tuesday";
 *     break;
 * case 3:
 *     dayName = "Wednesday";
 *     break;
 * case 4:
 *     dayName = "Thursday";
 *     break;
 * case 5:
 *     dayName = "Friday";
 *     break;
 * case 6:
 *     dayName = "Saturday";
 *     break;
 * default:
 *     dayName = "invalid number";
 *
 *     }
 * return dayName;
 *  }
 */

/*  int power(int baseNum, int powNum){
 *     int result = 1;
 *
 *     for(int i = 0; i < powNum; i++){
 *         result = result * baseNum;
 *     }
 *
 *     return result;
 *  }
 */

/*  class Book{
 *     public:
 *         string title;
 *         string author;
 *         int pages;
 *
 *     public: void print(){
 *         cout << title << "\n" << author << "\n" << pages <<endl;
 *         };
 *  };
 */

int main()
{
    //(3:25:40) Constructor Functions



    //(3:13:26) Classes & Objects

/*     string name = "Mike";
 *     double pi = 3.14;
 *     char favoriteLetter = 'G';
 */
/*     Book book1;
 *     book1.title = "Harry Potter";
 *     book1.author = "JK Rowling";
 *     book1.pages = 500;
 *
 *     cout << book1.title << "\n" << book1.author << "\n" << book1.pages <<endl;
 *
 *     Book book2;
 *     book2.title = "Lord of the Ring";
 *     book2.author = "Tolein";
 *     book2.pages = 700;
 *     book2.print();
 */



    //(2:59:11) Pointers

/*     int age = 19;
 *     int *pAge = &age;
 *     double gpa = 2.7;
 *     double *pGpa = &gpa;
 *     string name = "Mika";
 *     string *pName = &name;
 *
 *     cout << "Age:" <<&age<< endl;
 *     cout << "Gpa:" <<&gpa<< endl;
 *     cout << "Name:" <<&name<< endl;
 *
 *     cout << pAge << *pAge <<"***"<<endl;    //(2:54:55) Comments
 */

    // /*   */
    //cout << "Comments are fun";

    //(2:45:21) 2d Arrays & Nested Loops

/*     int numberGrid[3][2] = {
 *                         {1, 2},
 *                         {3, 4},
 *                         {5, 6}
 *                         };
 *     cout << numberGrid[0][1] << endl;
 *
 *     for(int i = 0; i < 3; i++){
 *         for(int j = 0; j < 2; j++){
 *             cout << numberGrid[i][j]<<"\t";
 *         }
 *         cout<<endl;
 *     }
 */

    //(2:38:32) Exponent Function

    //cout << power(6,6);

    //(2:29:18) For Loops
/*     int nums[] = {1, 2, 5, 7, 3};
 *     for(int i = 0; i <= 5; i++){
 *         cout << i <<"\t"<<nums[i]<< endl;
 *
 *     }
 */

    //(2:18:53) Building a Guessing Game

/*     int secretNum = 7;
 *     int guess;
 *     int guessCount = 0;
 *     int guessLimit = 3;
 *     bool outOfGuesses = false;
 *
 *     while(secretNum != guess && !outOfGuesses){
 *         if(guessCount < guessLimit){
 *             cout << "Enter guess:";
 *             cin >> guess;
 *             guessCount++;
 *         }else{
 *             outOfGuesses = true;
 *         }
 *
 *     }
 *     if(outOfGuesses == true){
 *         cout << "You lose";
 *     }else{
 *         cout << "you win!";
 *     }
 */


    //(2:10:47) While Loops

/*     int index = 1;
 *     while(index <= 5){
 *         cout << index << endl;
 *         index++;
 *
 *     }
 *
 *
 *     do{
 *         cout << index << endl;
 *     }while(index <= 5);
 *
 *     //(2:02:20) Switch Statements
 */
    //cout << getDayOfWeek(6);
    //(1:55:58) Building a Better Calculator

/*     int num1, num2;
 *     char op;
 *     cout << "Enter first number: ";
 *     cin >> num1;
 *     cout << "Enter operator: ";
 *     cin >> op;
 *     cout << "Enter second number: ";
 *     cin >> num2;
 *     int result;
 *     if(op=='+'){
 *         result = num1 + num2;
 *
 *     }else if(op == '-'){
 *         result = num1 - num2;
 *     }else if(op == '/'){
 *         result = num1 / num2;
 *     }else if(op == '*'){
 *         result = num1 * num2;
 *     }else{
 *         cout << "Invalid Operator";
 *     }
 *     cout << result;
 */

    //(1:47:15) If Statements (con't)
//    cout << getMax(2, 5, 10);
    //(1:35:22) If Statements
/*     bool isMale = true;//false;
 *     bool isTall = false;//true;
 *     if(isMale && isTall){
 *         cout << "You are a tall male";
 *     }
 *     else if(isMale && !isTall){
 *
 *         cout << "You are a short male";
 *     }
 *     else if(!isMale && isTall){
 *
 *         cout << "You are a not male and tall";
 *     }
 *     else{
 *         cout << "You are not tall and not a male";
 *     }
 */

    //(1:29:47) Return Statement
/*     double answer = cube(5.0);
 *     cout << answer ;
 */
    //(1:20:03) Functions
/*     cout << "top\t";
 *     sayHi("Mika", 20);
 *     cout << "\tbottom";
 *     sayHi("Tom", 30);
 */



    //(1:13:45) Arrays
/*     int luckyNums[20] = {4, 8, 15 , 16,23, 42};
 *     cout << luckyNums[0] << endl;;
 *     luckyNums[10] = 19;
 *     cout << luckyNums << endl;
 *     int length = sizeof(luckyNums)/sizeof(int);
 *     for(int i = 0;i < length; i++){
 *         cout << luckyNums[i] << endl;
 *     }
 *     cout << length;
 */

    //(1:09:28) Building a Mad Libs

/*     string color, pluralNoun, celebrity;
 *     cout << "Enter a color: ";// << endl;
 *     getline(cin,color);
 *     cout << "Enter a plural: ";// << endl;
 *     getline(cin,pluralNoun);
 *     cout << "Enter a celebrity: ";// << endl;
 *     getline(cin,celebrity);
 *
 *     cout << "Roses are " << color << endl;
 *     cout << pluralNoun << " are blue" << endl;
 *     cout << "I love " << celebrity << endl;
 */

    //(1:05:32) Building a Calculator

/*     int num1;
 *     int num2;
 *
 *     cout << "Enter first number: ";
 *     cin >> num1;
 *     cout << "Enter first number: ";
 *     cin >> num2;
 *
 *     cout << num1 + num2;
 */

    //(0:59:41) Getting User Input
/*     int age;
 *     cout << "Enter your age: ";
 *     cin >> age;
 *     cout << "You are " << age << " years old." <<endl;
 *
 *     char str_age;
 *     cout << "Enter your char age: ";
 *     cin >> str_age;
 *     cout << "You are " << str_age << " years old." <<endl;
 */

/*     string name;
 *     cout << "Enter your name: ";
 *     getline(cin,name);
 *     cout << "Hello " << name;
 */
    //(0:49:00) Working With Numbers
/*     cout << -40.758432 << endl;
 *     cout << 10%3 << endl;
 *     int wnum = 5;
 *     double dnum = 5.5;
 *
 *     cout << 10/3;
 *     cout << 1.2 + 4 << endl;
 *
 *     cout << pow(2,5) << sqrt(36)<< endl;
 *     cout << floor(4.6) <<  " " << round(4.4) <<" "<< ceil(4.6) << endl;;
 *     cout << fmax(3,10) << " " << fmin(3,10) << endl;
 *
 */
    //(0:39:15) Working With Strings

/*     cout << "Academy \n"<< endl;
 *     cout << "Academy \t";
 *     cout << "hello"<< endl;
 *
 *     string phrase = "Academy";
 *     cout << phrase;
 *     cout << phrase.length() << endl;
 *     cout << phrase[2] << endl;
 *     cout << phrase.find("demy",0) << endl;;
 *     cout << phrase.substr(3,3) << endl;
 *     cout << phrase <<endl;
 *     string phrasesub = phrase.substr(3,3);
 *     cout << phrasesub <<endl;
 */


    //(0:31:43) Data Types
/*     char grade = 'A';
 *     string phrase = "Giralle Academy";
 *     int age = 50;
 *     double gpa = 2.0;
 *     bool isMale = true;
 *
 *     cout << grade << endl;
 */

    //(0:19:55) Variables

/*     string characterName = "John";
 *     int characterAge;
 *     characterAge = 35;
 *
 *     cout << "There once was a man named "<< characterName << endl;
 *     cout << "He was "<< characterAge <<" years old" << endl;
 *
 *     characterName = "Mike";
 *     cout << "He liked the name " << characterName << endl;
 *     cout << "But did not like being " << characterAge << endl;
 */

    //Drawing a Shape
/*     cout << "   /|" << endl;
 *     cout << "  / |" << endl;
 *     cout << " /  |" << endl;
 *     cout << "/___|" << endl;
 */

    //Setup & Hello World
    //cout << "Hello world!" << endl;
    return 0;
}



/*

Contents
(0:00:00) Introduction

(0:01:38) Windows Installation

(0:04:54) Mac Installation

(0:08:44) Setup & Hello World

(0:12:29) Drawing a Shape

(0:19:55) Variables

(0:39:15) Working With Strings

(0:49:00) Working With Numbers

(0:59:41) Getting User Input

(1:05:32) Building a Calculator

(1:09:28) Building a Mad Libs

(1:13:45) Arrays

(1:20:03) Functions

(1:29:47) Return Statement

(1:35:22) If Statements

(1:47:15) If Statements (con't)

(1:55:58) Building a Better Calculator

(2:02:20) Switch Statements

(2:10:47) While Loops

(2:18:53) Building a Guessing Game

(2:29:18) For Loops

(2:38:32) Exponent Function

(2:45:21) 2d Arrays & Nested Loops

(2:54:55) Comments

(2:59:11) Pointers

(3:13:26) Classes & Objects

(3:25:40) Constructor Functions

(3:34:41) Object Functions
(3:41:43) Getters & Setters
(3:54:04) Inheritance

*/
