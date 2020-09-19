#include <cs50.h> //this is a library from cs50. helps us use the get_char and get_int methods
#include <stdio.h> //include standard input output.home

//call the function declared at the bottom here

void cough(int n); //function is called before the main function

int get_positive_number(void); //declare the function firts here/initialize it

int main (void) { //return void..this is the main body where the code body will be placed 

printf("dwfwfw\n"); //this means print format

char answer[20]; //here we declare a character value of 20 chars storage unit
printf("Enter you name: "); //this code gets an input from the user
fgets(answer, 20, stdin); //get from the user a value and store it in answer, 20characters, standard input //we can replace with get_char from cs50 library here
printf("Hello, my name is %s\n",answer); //output the input from user and printf out it as a string...%s

int counter = 0; //start the counter at zero
counter++; //counter = counter  + 1
printf("%i\n",counter); //this code initializes a integer counter zero(0), and increments it; then outputs it

int x = 81;
int y = 80;
if(x < y ){
    printf("x is less than y\n");
}
else if( y > x ){
    printf("y is less than x\n");
}
else{
    printf("y = x\n");
}

int i = 0;
while (i < 10)
{
    printf("%i\n",i); //%i means its an integer output
    i++;
}
for (size_t i = 0; i < 15; i++)
{
    printf("%lu", i);
} //size_t means that a long unsigned integer..reference it with %lu

//code for getting age

char age[10];
int result;

printf("How old are you: ");
fgets(age, 10, stdin); //replace this with get_char method
printf("You are %s years old\n",age);

float price = 11.1213313;
printf("result of age multiply by price is %.2f\n",12.456 * price); //add a number after %f to round it up

if(x % 2 == 0 ) {
    printf("The number is even\n");
}
else if ( x % 2 != 0){
    printf("the number is odd\n");
}

char c = get_char("do you agree?\n");

    printf("thats awesome buddy %c",c);
    

    //run the function here

cough(3);

int index = get_positive_number(); //value of index will be the result of the get_positive_number function...the value of n that is.
printf("%i\n",index); //output the value of index

    //the code below prints a n-by-n grid of bricks

int p;
do{
  p = get_int("Size: "); //prompts user to input size
 }
while(p<1); //runs the code in the do loop then checks the while loop then checks if p is less than 1. if condition is not met, the do loop runs again
for(int count=0;count<p;count++){ //a for loop; looping from when count is zero to count is less than p
    for(int j=0; j<p;j++){
            printf("#"); //outputs #
        }
        printf("\n"); //outputs another line
    }
    

}
//define the int get_positive_number described above

int get_positive_number(void){ //this is a function that is called upon in the first line of code.
    int n; //initialize a integer n
    do{
        n = get_int("%s","positive integer: "); //assign n to the integer the user will input 
    }
    while(n<1); //keep on getting user input until n<1
    return n; //return the value n
}

//declare a function in C
void cough(int n){
    for(int i =0; i<n; i++){
        printf(" COUGH ");
    }
}
// this is my first C code;
//to run this code in the terminal, press clang hello.c(name of file)
//then run ./a.out or the subsequent file that will be compiled
//use the clang -o <new name> hello.c to change the file to be run from a to ./<new name>
/* types of data types in C  
1. bool - boolean
2. char - single character like a or 2  %c
3. double -floating-point value with more digits %f
4. float - floating-point vlaue with a decimal value %f
5. int - integers %i
6. long - bigger integers %li
7. string - string of caharcters $s
*/
//link the cs50 library by -lcs50


