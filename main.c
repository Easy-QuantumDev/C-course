    #include <stdio.h>
    #include <string.h>

    int main(void){
        FILE *file = fopen("Student.txt","w");

        if (file == NULL) {
            return 1;
        }
        fputc('A',file);
        fputs("hello from computer\n",file);
        fclose(file);

    }







// ////////////////////////////////////////////////////// document////////////////////////////////
// #include <stdio.h>
// int main(void){
//     printf("///////////////////////////\n\n my first c program\n\n ////////////////////////");
//     printf("Name : mohammadreza\n");
//     printf("Age : 21\n");
//     printf("Language  : persian\n");
//     printf("Goal : Cyber Security\n");
//     printf("Dream : Inventor\n");
//     return 0;

// }

// ///////////////// variables ///////////////////////
// #include <stdio.h>
// int main(void){
//     int var = 21;
//     printf("number is : %d\n",var);
//     return 0;
// }

/////////////////////////////////////// type conversion
// int x = 20;
// printf("%d\n",x);
// float y = (float)x;
// printf("%f\n",y);

// int age = 22;
// int score = 2000;
// int year = 2005;
// char name = 'm';
// float money = 150.156;

// printf("my name is %c\n", name);

// printf("my age is %d\n", age);

// printf("my score is %d\n", score);

// printf("my birthday year  is %d\n", year);

// printf("my budget is %.2f\n", money);

// ///////////////////////////////////// size of /////////////////
// char grade = 'A';
// int x = 200;
// float y = 22.22;
// printf("size of this int variable is : %zu\n",sizeof(x));
// printf("size of this grade variable is : %zu\n",sizeof(grade));
// printf("size of this float variable is : %zu\n",sizeof(y));

// ////////////////////////////////// ADDRESS (POINTER) //////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int  x = 2026;
//     printf("the value of a random variable is : %d\n",x);
//     printf("the address of a random variable is : %p\n",(void*)&x);

//     int y = 6;
//     int *p = &y;
//     printf("the vlaue of y variable is : %d\n",y);
//     printf("the address of y variable is : %p\n",p);
//     printf("the value of the pointer is : %d\n",*p);

//     *p = 500;
//     printf("the new  value of the y is : %d\n",*p);
//     printf("the new  value of the y with y is : %d\n",y);
//     printf("the   address of the pointer variable with y is : %p\n",(void*)&p);

//     return 0;
// }

// ///////////////////////////////Pointer Arithmetic///////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int  x = 2026;
//     printf("the value of a random variable is : %d\n",x);
//     printf("the address of a random variable is : %p\n",(void*)&x);

//     int y = 6;
//     int *p = &y;
//     printf("the vlaue of y variable is : %d\n",y);
//     printf("the address of y variable is : %p\n",p);
//     printf("the value of the pointer is : %d\n",*p);

//     *p = 500;
//     printf("the new  value of the y is : %d\n",*p);
//     printf("the new  value of the y with y is : %d\n",y);

//     return 0;
// }

// //////////////////////////////operators(+ - / % * )///////////////////////////

// #include <stdio.h>

// int main(void){
//     int a = 20;
//     int b = 50;

//     int result = a+b;

//     printf("the a is : %d\n",a);
//     printf("the b is : %d\n",b);

//     a++;

//     b--;
//     printf("the b is : %d\n",b);

//     a=a+1;
//     b=b-1;
//     printf("the a is : %d\n",a);
//     printf("the b is : %d\n",b);

//     printf("the a + b ===== %d\n",result);
//     printf("the a - b ===== %d\n",a-b);
//     printf("the a / b ===== %d\n",a/b);
//     printf("the a * b ===== %d\n",a*b);
//     printf("the a // b ===== %d\n",a%b);

// }

// //////////////////////////////operators(+= -= /= %= *= )///////////////////////////

// #include <stdio.h>

// int main(void){
//     int a = 20;
//     printf("the a is : %d\n",a);

//     a += 20;
//     printf("the a is : %d\n",a);

//     a *= 10 ;
//     printf("the a is : %d\n",a);

//     a /= 2;
//     printf("the a is : %d\n",a);

//     a -= 50;
//     printf("the a is : %d\n",a);

//     a %= 10;
//     printf("the a is : %d\n",a);
// }

// //////////////////////////////operators(== != > < <= >= ) ///////////////////////////////

// //////////////////////////////operators(!(not) &&(and) ||(or) ) ///////////////////////////

// ////////////////////////////// CONDITIONS //////////////////////////////////////////////

///////////////////////////////////// IF / ELSE IF / ELSE ////////////////////////////

// #include <stdio.h>
// int main(void){
//     int number = 18;
//     if(number > 0 && number%2==0){
//         printf("Positive and Zoj\n");

//     }
//     else if(number%2==1 && number>0){
//         printf("Positive and Fard\n");

//     }
//     else if(number <0){

//         printf("Negative\n");

//     }else{
//         printf("Zero\n");

//     }
//     return 0;
// }

///////////////////////////////////// SWITCH / CASE  ////////////////////////////

// #include <stdio.h>

// int day_number = 1;
// int main(void)
// {

//     switch (day_number)
//     {
//     case 1:
//         printf("monday");
//         break;

//     case 2:
//         printf("tuesday");
//         break;

//     case 3:
//         printf("wednesday");
//         break;

//     case 4:
//         printf("thursday");
//         break;

//     case 5:
//         printf("friday");
//         break;

//     case 6:
//         printf("saturday");
//         break;

//     case 7:
//         printf("sunday");
//         break;

//     default:
//         printf("invalid day");
//     }
//     return 0;
// }

///////////////////////////////////// LOOPS  ////////////////////////////

///////////////////////////////////// FOR LOOP  ////////////////////////////

// #include <stdio.h>
// int main(void){
//     int sum =0;
//     int zoj = 0;
//     int count_zoj = 0;
//     printf("////////////////////////////////////////////////1 - 10\n");
//     for(int i=1;i<=10;i++ ){
//         printf("%d\n",i);
//     }
//     printf("////////////////////////////////////////////////10 - 1\n");
//     for(int i=10;i>=1;i-- ){
//         printf("%d\n",i);
//     }
//     printf("////////////////////////////////////////////////sum of 1 - 100 numbers\n");
//     printf("////////////////////////////////////////////////sum of 1 - 100 zoj numbers\n");
//     for(int i = 1;i<=100;i++){
//         sum = sum+i;
//         if (i%2==0){
//             zoj+=i;
//         }
//         if(i%2==0){
//             count_zoj++;
//         }

//     }

//     printf("////////////////////////////////////////////////NUMBER of 1 - 100 5 + 5\n");
//     for (int i = 0;i<=100;i+=5){
//         printf("%d\n",i);
//     }
//     printf("////////////////////////////////////////////////NUMBER of 1 - 100 3 + 3\n");
//     for (int i = 0;i<=60;i+=3){
//         printf("%d\n",i);
//     }
//     printf("////////////////////////////////////////////////BREAK\n");
//     for (int i = 0;i<=100;i+=1){
//         if(i==10){
//             printf("loop break\n");
//             break;
//         }
//         printf("%d\n",i);
//     }
// printf("////////////////////////////////////////////////CONTINUE\n");
//     for (int i = 0;i<=100;i+=1){
//         if(i==10){
//             printf("loop break this but continue\n");
//             continue;
//         }
//     }

//     printf("%d\n",sum);
//     printf("sum zoj %d\n",zoj);
//     printf("cout zoj %d\n",count_zoj);
//     return 0;
// }

// printf("////////////////////////////////////////////////WHILE LOOP\n");
//  #include <stdio.h>

// int main(void){
//     // int sum = 0;
//     // int i = 0;
//     // while(i<=100){
//     //     sum = sum+i;
//     //     i++;
//     // };
//     // printf("sun of 0 to 100 is : %d\n",sum);

//     // int i = 0 ;
//     // while(i<=100){
//     //     if(i%2==0){
//     //         printf("%d\n",i);
//     //     }
//     //     i++;
//     // };

//     // int i = 1 ;
//     // while(i<=100){
//     //     printf("%d\n",i);
//     //     i+=2;

//     // }

// }

/////////////////////////////////////////////////// DO WHILE //////////////////////

// #include <stdio.h>
// int main(void){
//     // int i = 1;
//     // do{
//     //     printf("this line code is run one time anyway");
//     // }while(i%2==0);

//     // int i = 2;
//     // do{
//     //     printf("i : %d\n",i);
//     //     i+=2;
//     // }while(i<=100);
//     // int i = 99;
//     // do
//     // {
//     //     printf("i : %d\n",i);
//     //     i-=2;
//     // } while (i>=0);

// }

//////////////////////////////////FUNCTIONS///////////////////////
// #include <stdio.h>
// int add(int a , int b){
//     return a+b;

// }
// int multiply(int a,int b){
//     return a*b;
// }

// int main(void){
//     int result_add = add(10,10);
//     int result_multiply = multiply(10,10);
//     printf("add function : %d \n",result_add);
//     printf("multiply function : %d \n",result_multiply);

// }

//////////////////////////////////VOID FUNCTIONS///////////////////////

// #include <stdio.h>
// int showNumber(int a ){
//     printf("%d",a);
// }
// int main(void){
//     showNumber(10);
// }

// #include <stdio.h>

// void printNumber(int a)
// {
//     printf("%d", a);
// }
// int doubleNumber(int a)
// {
//     return a * 2;
// }

// int main(void)
// {
//     printNumber(10);
//     printf("double number : %d", doubleNumber(10));
// }

//////////////////////////////////Scope///////////////////////
// #include <stdio.h>
// int gl = 100;
// int main(void)
// {
//     int x = 10;
//     printf("local variable : %d\n", x);
//     printf("global variable : %d\n", gl);

//     if (1)
//     {
//         int y = 50;
//         printf("local block variable : %d\n", y);
//         printf("user local variable in block : %d\n", x);
//     }

//     // printf("%d", y); //error
// }

////////////////////////////// SHADOWS SCOPE /////////////////////
// #include <stdio.h>
// int x= 100;
// int main (void){
//     int x = 50;
//     printf("%d\n",x);

//     {
//         int x  = 10;
//         printf("%d\n",x);
//     }
//     printf("%d\n",x);
// }
/////////////////////////////////////////function without static
// #include <stdio.h>
// int test(){
//     int x = 0;
//     x++;
//     printf("%d\n",x);

// }

// int main(void){
//     test();
//     test();

// }
// // x = 1,1
//////////////////// static ///////////////////////
// #include <stdio.h>
// int test(){
//     static int x = 1;
//     x++;
//     printf("%d\n",x);

// }

// int main(void){
//     test();
//     test();

// }
// // x = 2,3

//////////////////// Function Prototype ///////////////////////
// #include <stdio.h>

// int add(int a , int b );
// int main(void){
//     int result = add(10,10);
//     printf("%d \n",result);
// }

// int add(int a ,int b){
//     return a+b;
// }

//////////////////// ARRAYS ///////////////////////

// #include <stdio.h>

// int main(void)
// {
//     int scores[5] = {10, 20, 30, 40, 50};
//     printf("%d\n", scores[0]);
//     printf("%d\n", scores[1]);
//     printf("%d\n", scores[2]);
//     printf("%d\n", scores[3]);
//     printf("%d\n", scores[4]);
//     scores[0] = 100;
//     printf("%d\n", scores[0]);

//     // compiler set the length

//     // int numbers[] = {1, 2, 3, 4, 5, 6, 7};
//     // printf("%d\n", numbers[0]);

//     // set default value for another values

//     int numbers2[5] = {10, 10};

//     printf("%d\n", numbers2[0]);
//     printf("%d\n", numbers2[1]);
//     printf("%d\n", numbers2[2]);
//     printf("%d\n", numbers2[3]);
//     printf("%d\n", numbers2[4]);

//     int a[3] = {5};
//     int b[3];

//     printf("%d\n", a[1]);
//     printf("%d\n", b[1]);

//     // size of a array
//     printf("%zu\n", sizeof(a));

//     // size of a array index
//     printf("%zu\n", sizeof(a[0]));

//     // length of a array ====size of a array / size of a array index
//     printf("the length of score array : %d\n", sizeof(scores) / sizeof(scores[0]));

// //    change the value with another value in the same array
//     int numbers[4] = {10, 20, 30, 40};

//     numbers[0] = numbers[1] + numbers[2];
//     numbers[3] = numbers[0] - numbers[1];

//     printf("%d\n", numbers[0]);
//     printf("%d\n", numbers[3]);
// }

//////////////////////// loops in array//////////////////////

// #include <stdio.h>

// int main(void){

//     int scores[5]={10,20,30,40,50};
//     for(int i=0;i<5;i++){
//         printf("%d\n",scores[i]);
//     }
//     printf("//////////////////////////////////////////////////////\n");
//     for(int i=4;i>=0;i--){
//         printf("%d\n",scores[i]);
//     }
// }

// #include <stdio.h>

// int main(void){

//     int scores[5]={10,20,30,40,50};
//     for(int i=0;i<5;i++){
//         printf("%d\n",scores[i]);
//     }
//     printf("//////////////////////////////////////////////////////\n");
//     for(int i=4;i>=0;i--){
//         printf("%d\n",scores[i]);
//     }
// }

// ///////////////////// SUM OF THE ARRAY VALUES ////////////////////////////

// #include <stdio.h>

// int main(void){
//     int numbers[4] = {10,20,30,40};
//     int sum = 0;
//     for ( int i= 0; i < 4; i++)
//     {
//         sum+=numbers[i];
//     };
//     printf("%d\n",sum);
// }

// ///////////////////////////////// CONDITIONS WITH ARRAY /////////////////////////////

// #include <stdio.h>

// int main (void){
//     int numbers[4]={100,200,300,400};
//     int count = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         if (numbers[i]%2==0){
//             count++;
//         };
//     };
//     printf("%d\n",count);

// }

// //////////////////////////////////// MINIMUM AND MAXIMUM IN ARRAY ////////////////////

// #include <stdio.h>

// int main(void)
// {
//     int numbers[4] = {1, 2, 3, 4};
//     int max = numbers[0];
//     int min = numbers[0];

//     for (int i = 0; i < 4; i++){
//         if(numbers[i]>max){
//             max=numbers[i];
//         }
//         if(numbers[i]<min){
//             min=numbers[i];
//         }

//     }
//     printf("max number is : %d\n",max);
//     printf("min number is : %d\n",min);
// }

///////////////////////////////////////////// FIND AVERAGE /////////////////////////////////////

// #include <stdio.h>

// int main(void)
// {
//     int numbers[4] = {1, 2, 3, 4};

//     int sum = 0;

//     int length_of_array = sizeof(numbers)/sizeof(numbers[0]);

//     for (int i = 0; i < 4; i++){

//         sum+=numbers[i];

//     }

//     float average = (float)sum / length_of_array;

//     printf("average is : %.1f\n",average);

// }

// //////////////////////////////////////////////////////////////   SEND ARRAY TO A FUNCTION  ///////////////////////////////////
// #include <stdio.h>

// void printArray(int numbers[],int length){
//     for(int i =0;i<length;i++){
//         printf("%d\n",numbers[i]);
//     }
// }
// int main(void){
//     int scores[] = {15,25,30,50};
//     int length = sizeof(scores) / sizeof(scores[0]);
//     printArray(scores,length);
//     return 0;
// }

// //////////////////////////////////////////////////////////////   SEND ARRAY TO A FUNCTION WITH CHANGES ///////////////////////////////

// #include <stdio.h>

// void printArray(int numbers[],int length){
//     numbers[0] = 100;

// }
// int main(void){
//     int scores[] = {15,25,30,50};

//     printf("%d\n",scores[0]);
//     printArray(scores,4);
//     printf("%d\n",scores[0]);
//     return 0;
// }

// //////////////////////////////////////////////////////////////   SEND ARRAY TO A FUNCTION WITH SUM OF ARRAY ///////////////////////////////

// #include <stdio.h>

// int PrintSum(int numbers[],int length){
//     int sum  = 0;
//     for(int i =0 ; i < length ; i++){
//         sum+=numbers[i];
//     }
//     return sum ;
// }
// int main(void){
//     int scores[] = {10,20,30,40,50};
//     int result = PrintSum(scores,5);
//     printf("%d\n",result);

// }

////////////////////////////////////////////////////////////////   MATRIX ///////////////////////////////
// #include <stdio.h>
// int main(void){
//     int matrix[2][5]={
//         {1,2,3,4,5},
//         {6,7,8,9,10},
//     };
//     printf("%d\n",matrix[0]);
//     printf("%d\n",matrix[0][0]);
//     printf("%d\n",matrix[0][1]);
//     printf("%d\n",matrix[0][2]);
//     printf("%d\n",matrix[0][3]);

//     printf("%d\n",matrix[1][0]);
//     printf("%d\n",matrix[1][1]);
//     printf("%d\n",matrix[1][2]);
//     printf("%d\n",matrix[1][3]);
//     printf("%d\n",matrix[1][4]);
// }

////////////////////////////////////////////////////////////////   MATRIX WITH LOOPS  ///////////////////////////////
// #include <stdio.h>
// int main(void){
//     int matrix[2][5]={
//         {1,2,3,4,5},
//         {6,7,8,9,10},
//     };
//     for(int i = 0;i<2;i++){
//         for(int j =0;j<5;j++){
//             printf("%d\n",matrix[i][j]);
//         }
//     }
// }

////////////////////////////////////////////////////////////////   STRINGS  ///////////////////////////////
// #include <stdio.h>
// int main(void){
//     char name[] = "mohammadreza";
//     printf("my name is : %s\n",name);
//     return 0;
// }
////////////////////////////////////////////////////////////////   CHANGE STRING CHARACTER  ///////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     char name[] = "mohammadreza";
//     printf("my name is : %s\n", name);
//     name[0] = 'V';
//     printf("my name is : %s\n", name);
//     return 0;
// }

////////////////////////////////////////////////////////////////   CHANGE STRING CHARACTER  ///////////////////////////////

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char name[] = "mohammadrezaa";

//     printf("my name is : %s\n", name);
//     printf("my name length  is : %zu\n", strlen(name));

//     return 0;
// }

////////////////////////////////////////////////////////////////   COMPARISON STRING   ///////////////////////////////
// #include <stdio.h>
// #include <string.h>

// int main(void)

// {

//     char name[] = "mohammadrezaa";

//     char name_2[] = "alireza";

//     char name_3[] = "mohammad";

//     char name_4[] = "mohammad";

//     printf("my name is : %s\n", name);

//     printf("comparison of the two string : %d\n", strcmp(name, name_2));\\ 1 means different

//     printf("comparison of the two string : %d\n", strcmp(name_3, name_4));\\ 0 means equal

//     return 0;
// }

////////////////////////////////////////////////////////////////   COMPARISON STRING WITH (IF)   ///////////////////////////////
// #include <stdio.h>
// #include <string.h>

// int main(void)

// {

//     char name[] = "mohammadrezaa";

//     char name_2[] = "alireza";

//     char name_3[] = "mohammad";

//     char name_4[] = "mohammad";

//     if(strcmp(name,name_2)==0){
//         printf("names are equal\n");
//     }else if (strcmp(name,name_2)!=1){

//         printf("names are not  equal\n");
//     };

//     return 0;
// }

////////////////////////////////////////////////////////////////   COPY STRING WITH STRCPY   ///////////////////////////////

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char name[] = "Mohammadreza";
//     char destination[20];
//     strcpy(destination, name);
//     printf("%s\n", destination);

//     return 0;
// }
////////////////////////////////////////////////////////////////   LENGTH OF  STRING WITH STRLEN   ///////////////////////////////

// #include <stdio.h>
// #include <string.h>

// int main (void){
//     char name[] = " barati";
//     printf("the length of the name : %d",strlen(name));

// }

////////////////////////////////////////////////////////////////    STRING WITH STRCAT   ///////////////////////////////
// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char first_name[] = "Mohammadreza";
//     char last_name[] = " Barati";
//     strcat(first_name,last_name);
//     printf("%s\n",first_name);
//     return 0;
// }

////////////////////////////////////////////////////////////////    SCANF (GET STRING FORM USER)   ///////////////////////////////
// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char name[20];
//     printf("Please enter your name : \n");
//     scanf("%29s",name);
//     printf("hello %s\n",name);
//     return 0;
// }

////////////////////////////////////////////////////////////////    FGET (GET STRING FORM USER)   ///////////////////////////////
// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char name[50];
//     printf("Please enter your name : ");
//     if(fgets(name,sizeof(name),stdin)!=NULL){
//         printf("Hello %s",name);
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////    Structures   ///////////////////////////////

// #include <stdio.h>
// #include <string.h>

// struct Student{
//     char name[50];
//     int age;
//     float score;

// };

// int main(void){
//     struct Student student1 = {"mohammadreza",22,18.5};

//     ////////// all values => error
//     // printf("my personal info is : %s\n",student1); => error

//     ////////// each value printed
//     printf("my name is %s\n",student1.name);
//     printf("my age is %d\n",student1.age);
//     printf("my score is %.1f\n",student1.score);

//     //////////////////// change value of Structure

//     // student1.name = "alireza"; =====> error = for change the string value you should use strcpy

//     printf("/////////////////////////////////////////////////////////////////////////////////////////////\n");

//     strcpy(student1.name,"alireza");

//     student1.age = 25;

//     student1.score = 19.5;

//     printf("my name is %s\n",student1.name);
//     printf("my age is %d\n",student1.age);
//     printf("my score is %.1f\n",student1.score);

// }

////////////////////////////////////////////////////////////////    send Structure to a function   ///////////////////////////////

// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     char name[50];
//     int age;
//     float score;
// };

// // change the value in this function
// void printStudent(struct Student student)
// {
//     printf("name : %s\n", student.name);
//     printf("age : %d\n", student.age);
//     printf("score : %.1f\n", student.score);

//     strcpy(student.name, "akbar");
//     printf("name is : %s\n", student.name);
// };

// // change the value in main
// void ChangeAge(struct Student *student){
//     student->age = 23;

// }
// int main(void)
// {
//     struct Student student1 = {"mohammadreza", 22, 19};
//     struct Student student2 = {"mohammad", 20, 17};
//     struct Student student3 = {"alireza", 27, 13};
//     struct Student student4 = {"ali", 25, 15};
//     printStudent(student1);
//     printStudent(student2);
//     printStudent(student3);
//     printStudent(student4);
//     ChangeAge(&student1);
//     printf("New age: %d\n", student1.age);
//     return 0;
// }

////////////////////////////////////////////////////////////////    Enum   ///////////////////////////////
// #include <stdio.h>
// enum OrderStatus
// {
//     PENDING,//0
//     SHIPPED,//1
//     DELIVERED,//2
// };
// int main(void)
// {
//     enum OrderStatus status = PENDING;
//     printf("status : %d\n", status);
//     if (status == PENDING)
//     {
//         printf("the status is pending.......\n");
//     }
//     else if (status == SHIPPED)
//     {
//         printf("the status is shipped\n");
//     }
//     else if (status == DELIVERED)
//     {

//         printf("the status is delivered\n");
//     };
// }

////////////////////////////////////////////////////////////////    TypeDef  ///////////////////////////////

// without typedef :::::::::::::::::::::::::::::::::::::;

// struct Student {
//     char name[50];
//     int age;
// };

// int main(void)
// {
//     struct Student student1 = {"Ali", 20};
//     printf("%s\n", student1.name);
//     return 0;
// }

// with typedef :::::::::::::::::::::::::::::::::::::;
// #include <stdio.h>
// typedef struct
// {
//     char name[50];
//     int age;

// } Student; // name of structure
// int main(void)
// {
//     Student student1 = {"mohammadreza", 22}; // just use the name of the structure
//     printf("the student number one name  is : %s\n",student1.name);
//     printf("the student number one age  is : %d\n",student1.age);
//     return 0;
// }
// #include <stdio.h>
// typedef struct
// {
//     char name[50];
//     float price;
//     int quantity;

// } Product; // name of structure
// int main(void)
// {
//     Product Product1 = {"laptop", 11000.0,10}; // just use the name of the structure
//     printf("the student Product one name  is : %s\n",Product1.name);
//     printf("the student Product one price  is : %.1f\n",Product1.price);
//     printf("the student Product one quantity  is : %d\n",Product1.quantity);
//     return 0;
// }
////////////////////////////////////////////////////////////////   Pointer to Pointer  ///////////////////////////////
// int main (void){
//     int number = 100;

//     int ptr = &number;

//     int *pttr = &ptr ;

//     int **pttr = &pttr ;

// }

// #include <stdio.h>
// #include <string.h>

// void f(int *x){
//     *x = 100;
// }

// int main(void){
// int age = 20;
// int *p_age = &age;
// printf("the age is : %d\n",age);
// printf("the address of age is : %p\n",(void *)&age);
// printf("the address of age is : %p\n",(void *)p_age);
// printf("the value  of age  pointer is : %d\n",*p_age);

// *p_age = 25;

// printf("the new value  of age  pointer is : %d\n",*p_age);

// ////////// pointers and function
// int y = 100;
// f(&y);
// printf("the new value of the y : %d\n",y);

// //////////////// array and pointer

// int arr[5] = {10,20,30,40,50};
// printf("%d\n",arr);
// printf("%d\n",arr[0]);
// printf("%d\n",*arr);
// printf("%d\n",*(arr + 1));
// printf("%d\n",arr[1]);

// }

////////////////////////////////////////////////////////////////   work with FILE   ///////////////////////////////

////////////////////////////////////////////////////////////////   fopen / fprintf / fclose   ///////////////////////////////
// #include <stdio.h>
// int main(void)
// {
//     FILE *file;
//     file = fopen("Student.txt", "a");
//     char name[50];
//     int age;
//     float score;

//     if (file == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }

//     printf("please enter your name : ");
//     if (fgets(name, sizeof(name), stdin) != NULL)
//     {
//         fprintf(file, "Name : %s",name);
//     }

//     printf("please enter your age : ");
//     scanf("%d",&age);
//     fprintf(file,"Age : %d\n",age);

//     printf("please enter your score : ");
//     scanf("%f",&score);
//     fprintf(file,"Score : %.1f\n",score);

//     fclose(file);
// }

////////////////////////////////////////////////////////////////   fgets   ///////////////////////////////
// #include <stdio.h>
// #include <string.h>

// int main(void){
//     FILE *file;
//     file =fopen("Student.txt","r");
//     if(file ==NULL){
//         printf("error to open the file !");
//         return 1;
//     }
//     char name[50];
//     fgets(name,sizeof(name),file);
//     printf("%s",name);
//     fclose(file);
// }


////////////////////////////////////////////////////////////////   fscanf   ///////////////////////////////
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int age;
//     float score;

//     FILE *file;
//     file = fopen("Student.txt", "r");
    
//     if(file ==NULL){
//         printf("error to open the file !");
//         return 1;    
//     }

//     char name[50];
//     fgets(name, sizeof(name), file);

//     fscanf(file, "Age : %d", &age);

//     fscanf(file, "Score : %f", &score);




//     printf("%s", name);
//     printf("Age : %d\n", age);
//     printf("Score : %.1f\n", score);

//     fclose(file);
// }

////////////////////////////////////////////////////////////////   fgetc   ///////////////////////////////
// #include <stdio.h>
// #include <string.h>

// int main(void){
//     FILE *file = fopen("Student.txt","r");

//     if (file == NULL) {
//         return 1;
//     }

//     int ch;
//     int count=0;
//     while((ch = fgetc(file))!=EOF){
//         printf("%c",ch);
//         count++;
//     }
//     printf("the characters of the file is : %d",count);
    
//     fclose(file);
// }



////////////////////////////////////////////////////////////////  fputc / fputs   ///////////////////////////////
    // #include <stdio.h>
    // #include <string.h>

    // int main(void){
    //     FILE *file = fopen("Student.txt","w");

    //     if (file == NULL) {
    //         return 1;
    //     }
    //     fputc('A',file);
    //     fputs("hello from computer\n",file);
    //     fclose(file);

    // }