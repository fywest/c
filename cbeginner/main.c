#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* void SayHi(char name[],int age)
 * {
 *     printf("Hello User\n");
 *     printf("hello %s,you are %d years old\n",name,age);
 * }
 *
 * double cube(double num){
 *     double result = num*num*num;
 *     return result;
 * }
 */

/*  int max(int num1,int num2,int num3){
 *     int result;
 * //    if(num1>num2){
 * //            result=num1;
 * //    }else{
 * //    result=num2;
 * //    }
 *     if(num1>=num2 && num2>=num3){
 *         result=num1;
 *     }else if(num2>=num1&&num2>=num3)
 *     {
 *         result=num2;
 *     }
 *     else{
 *         result=num3;
 *     }
 *     return result;
 *  }
 */

/*  struct Student{
 *     char name[50];
 *     char major[50];
 *     int age;
 *     double gpa;
 *  };
 */

int main()
{
    //Reading Files
/*     char line[255];
 *     FILE * fpointer = fopen("employees.txt","r");
 *
 *     fgets(line, 255,fpointer);
 *     printf("%s",line);
 *
 *     fgets(line, 255,fpointer);
 *     printf("%s",line);
 *
 *     fgets(line, 255,fpointer);
 *     printf("%s",line);
 *
 *     fgets(line, 255,fpointer);
 *     printf("%s",line);
 *
 *     fgets(line, 255,fpointer);
 *     printf("%s",line);
 *
 *     fclose(fpointer);
 */

    //Writing Files
/*     FILE * fpointer = fopen("employees.txt","w");
 *
 *     fprintf(fpointer,"Jim, Salesman\nPam, Receptionist\nOscar, account");
 *     fclose(fpointer);
 */

    //Dereferencing Pointers
/*      int age=30;
 *      int * pAge = &age;
 *
 *      printf("%p\t%d\t%d\t%p\t%d", pAge,*pAge,age,&age,*&age);
 */

    //Pointers
/*     int age=30;
 *     int * pAge = &age;
 *
 *     double gpa = 3.4;
 *     double * pGpa = &gpa;
 *
 *     char grade = 'A';
 *     char * pGrade = &grade;
 *
 *
 *     printf("age's memory address: %p\n",&age);
 *     printf("pAge:%p\tAge:%d\n",pAge,age);
 *     printf("pGpa:%p\tgpa:%f\n",pGpa,gpa);
 *     printf("pGrade:%p\tgrade:%c",pGrade,grade);
 */

    //Memory Addresses

/*     int age = 30;
 *     double gpa = 3.4;
 *     char grade = 'A';
 *
 *     printf("age: %p\ngpa: %p\ngrade: %p",&age,&gpa,&grade);
 */

    //2D Arrays & Nested Loops

/*     int nums[3][2] = {
 *                     {1,2},
 *                     {3,4},
 *                     {5,6}
 *                     };
 *
 *     printf("%d\n",nums[0][0]);
 *
 *     int i,j;
 *     for(i = 0; i < 3; i++){
 *         for(j = 0;j < 2; j++){
 *             printf("%d,",nums[i][j]);
 *         }
 *         printf("\n");
 *     }
 */
    //For Loops
/*     int i = 1;
 *     while(i <= 5){
 *         printf("%d\n",i);
 *         i++;
 *     }
 */
/*     int luckyNumber[]={4,8,15,16,23,42};
 *     int i;
 *     for(i=0;i < 6;i++){
 *
 *         printf("%d\t",i);
 *         printf("%d\n",luckyNumber[i]);
 *
 *     }
 */
    //Building a Guessing Game
/*     int secretNumber=5;
 *     int guess;
 *     int guessCount=0;
 *     int guessLimit=3;
 *     int outOfGuesses=0;
 *
 *     while(guess!=secretNumber && outOfGuesses == 0){
 *         if(guessCount < guessLimit)
 *             {
 *                 printf("Enter a number");
 *                 scanf("%d",&guess);
 *                 guessCount++;
 *
 *             }else{
 *             outOfGuesses = 1;
 *             }
 *
 *
 *     }
 *     if(outOfGuesses == 1){
 *         printf("Out of guesses");
 *     }
 *     else{
 *             printf("You Win!");
 *     }
 */

    //While Loops
/*     int index = 1;
 *     while(index < 5){
 *             printf("%d\n",index);
 *             index++;
 *
 *     }
 *
 *     do{
 *             printf("%d\n",index);
 *             index++;
 *
 *     }while(index < 10);
 */

    //Structs
/*     struct Student student1;
 *     student1.age=22;
 *     student1.gpa=3.2;
 *     strcpy(student1.name,"Jim");
 *     strcpy(student1.major,"Business");
 *
 *     printf("%s\n",student1.name);
 *     printf("%s\n",student1.major);
 *     printf("%d\n",student1.age);
 *     printf("%f\n",student1.gpa);
 *
 *     struct Student student2;
 *     student2.age=20;
 *     student2.gpa=2.5;
 *     strcpy(student2.name,"Pam");
 *     strcpy(student2.major,"Art");
 *
 *     printf("%s\n",student2.name);
 *     printf("%s\n",student2.major);
 *     printf("%d\n",student2.age);
 *     printf("%f\n",student2.gpa);
 */

    //Switch Statements
/*     char grade = 'A';
 *     switch(grade){
 *     case 'A':
 *         printf("you did great !");
 *         break;
 *     case 'B':
 *         printf("You did alright!");
 *         break;
 *     case 'C':
 *         printf("You did poorly");
 *         break;
 *     case 'D':
 *         printf("You did very bad");
 *         break;
 *     case 'F':
 *         printf("You failed");
 *         break;
 *     default:
 *         printf("Invalid Grade");
 *
 *
 *     }
 */

    //Building a Better Calculator

/*     double num1;
 *     double num2;
 *     char op;
 *
 *     printf("Enter a number: ");
 *     scanf("%lf",&num1);
 *     printf("Enter operator: ");
 *     scanf(" %c",&op);
 *
 *     printf("Enter a number: ");
 *     scanf("%lf",&num2);
 *
 *     //printf("%f %f %c",num1,num2,op);
 *     if(op == '+'){
 *         printf("%f",num1+num2);
 *     }else if(op == '-'){
 *         printf("%f",num1-num2);
 *     }else if(op == '*'){
 *         printf("%f",num1*num2);
 *     }else if(op == '/'){
 *         if (num2==0){
 *             printf("divide can not be zero");
 *             return 1;
 *         }
 *         printf("%f",num1/num2);
 *     }else{
 *         printf("invalid operator");
 *     }
 */


    //If Statements
    //printf("%d",max(4,10));
/*     printf("%d",max(21,124,1000));
 *     if(3>2 || 2 >5 || 3==2 || 3!=2){
 *         printf("True"))
 *     }
 */

    //Return Statement
    //printf("Answer: %f",cube(3.0));
    //Functions
/*     printf("top");
 *     SayHi("Mika",30);
 *     SayHi("Charli",40);
 *     printf("bottom");
 */
    //Arrays
/*     int luckyNumbers[] = {4,8,15,16,23,42};
 *     luckyNumbers[2]=200;
 *     printf("%d",luckyNumbers[2]);
 *
 *     char phrase[20]="Array;
 */

    //Building a Mad Libs Game

/*     char color[20];
 *     char pluralNoun[20];
 *     char celebrityF[20];
 *     char celebrityL[20];
 *
 *     printf("Enter a color:");
 *     scanf("%s",color);
 *
 *     printf("Enter a plural Noun:");
 *     scanf("%s",pluralNoun);
 *
 *     printf("Enter a celebrity:");
 *     scanf("%s%s",celebrityF,celebrityL);
 *
 *
 *
 *     printf("Roses are %s \n",color);
 *     printf("%s are blue\n",pluralNoun);
 *     printf("I love %s %s\n",celebrityF,celebrityL);
 */

    //Building a Basic Calculator
/*     double num1;
 *     double num2;
 *
 *     printf("please input num1: ");
 *     scanf("%lf",&num1);
 *     printf("please input num2: ");
 *     scanf("%lf",&num2);
 *
 *     printf("Answer is:%f",num1+num2);
 */
    //Getting User Input
/*     int age1;
 *     printf("Enter your age: ");
 *     scanf("%d",&age1);
 *     printf("You are %d years old\n",age1);
 *
 *     double gpa1;
 *     printf("Enter your gpa: ");
 *     scanf("%lf",&gpa1);
 *     printf("Your gpa is %f\n",gpa1);
 *
 *     char grade1;
 *     printf("Enter your grade1: ");
 *     scanf("%c",&grade1);
 *     printf("Your grade is %c\n",grade1);
 *
 *     char name[20];
 *     printf("Enter your name: ");
 * //    scanf("%s",name);//
 *     fgets(name,20,stdin);//li li-space is ok
 *     printf("Your grade is %s\n",name);
 */




/*     //Constants
 *
 *     const int NUM=5;
 *     printf("%d\n",NUM);
 *
 *     //Comments
 *
 *     //multiline
 *
 *
 *
 *     //Working With Numbers
 *     printf("%f %d %f %f\n",5+4.0,4,pow(2,3),sqrt(36));
 *     printf("%f \t %f\n",ceil(11.4),floor(11.4));
 *     //Printf
 *     printf("hello \"he \" world %s %c %f\n","hello ",'A',1.48394);
 *     //Variables
 *     char Name[]="Jonh";
 *     printf("/n");
 *     int Age=35;
 *     printf(" Name is %s and Age is %d\n",Name,Age);
 *
 *     int age=40;
 *     double gpa=3.6;
 *     char grade='A';
 *     char Str_char[]="hello string";
 *     printf("age=%d gpa=%f grade=%c Str_char=%s\n",age,gpa,grade,Str_char);
 *
 *     //Drawing a Shape
 *     printf("Hello world!\n");
 *     printf("   /|\n");
 *     printf("  / |\n");
 *     printf(" /  |\n");
 *     printf("/___|\n");
 */



    return 0;
}

/*
0:12:51) Drawing a Shape
(0:20:56) Variables
(0:32:25) Data Types
(0:38:32) Printf
(0:45:22) Working With Numbers
(0:52:20) Comments
(0:56:00) Constants
1:00:13) Getting User Input
(1:12:08) Building a Basic Calculator
(1:17:43) Building a Mad Libs Game
(1:26:29) Arrays
(1:36:44) Functions
(1:45:37) Return Statement
(1:53:21) If Statements
(2:07:11) Building a Better Calculator
(2:14:51) Switch Statements
(2:21:27) Structs
(2:29:43) While Loops
(2:37:48) Building a Guessing Game
(2:50:11) For Loops
(2:59:05) 2D Arrays & Nested Loops
(3:09:10) Memory Addresses
(3:17:20) Pointers
(3:27:41) Dereferencing Pointers
(3:32:37) Writing Files
(3:41:52) Reading Files

*/
