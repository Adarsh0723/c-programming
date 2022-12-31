//1st switch case
#include<stdio.h>
#include<math.h>
int main(){
    int z;
    printf("Enter the key of program which you want to run:\n");
    printf("1- A character is a vowel or consonant\n");
    printf("2- A character is an alphabet or not\n");
    printf("3- Ascii values of a character\n");
    printf("4- A number is positive or negative\n");
    printf("5- A number is even or odd\n");
    printf("6- Swap two numbers without third variable\n");
    printf("7- Area of a circle\n");
    printf("8- Greatest of two numbers\n");
    printf("9- Greatest of three numbers\n"); 
    printf("10-Number of digits in an integer\n");

    scanf("%d",&z);
    printf("Proccessing your order!\n");
    switch (z){
        case 1 :{
                char ex;
                scanf(" %c",&ex);
                if(ex=='a'||ex=='e'||ex=='i'||ex=='o'||ex=='u'||ex=='A'||ex=='E'||ex=='I'||ex=='O'||ex=='U')
                {
                    printf("This is a vowel");
                }
                else{
                    printf("This is consonant");
                }
                return 0;

                }
        case 2 :
                {    
                printf("Enter the Input:");
                //taking input
                char a;
                scanf(" %c",&a);
                //checking the input is alphabet or not
                if(a<='z'&&a>='a'|| a<='Z'&&a>='A'){
                    printf("is a Alphabet.");
                }
                else{
                    printf("is a NOT Alphabet.");
                }
                return(0);
                }  
        case 3 :
                {
                char ex;
                printf("Enter the Character:");
                //taking input of an alphabet
                scanf(" %c",&ex);
                printf("%d",ex);
                return 0;
                }
        case 4 :
                {
                int a;
                printf("Enter the number:");
                scanf("%d",&a);
                if(a<0){
                    printf("%d is a negative number.", a);
                }
                else if(a==0){
                    printf("%d is a zero.", a);
                }
                else {
                    printf("%d is a positive number.", a);
                }
                return 0;
                }        
        case 5 :{
                int a;
                printf("Enter the Input:");
                scanf("%d",&a);
                //checking the condition for even
                if(a%2==0){
                    printf("the number is even");
                }
                //checking the condition for odd
                else{
                    printf("the number is odd");
                }
                return 0 ;
                }
        case 6 :{
                int a,b;
                scanf("%d%d",&a,&b);
                //a=10,b=20    
                a=a+b;//a=30 (10+20)    
                b=a-b;//b=10 (30-20)    
                a=a-b;//a=20 (30-10)
                printf("%d,%d",a,b);
                return 0;
                }
        case 7 :{
                float r;
                //asking for input from user
                printf("Enter the radius of circle:");
                scanf("%f",&r);
                float area;
                //calculating area 
                area= 3.14*r*r;
                printf("%f",area);
                return 0;
                }           
        case 8 :{
                int a,b;
                printf("Enter the first number:");
                scanf("%d",&a);
                printf("Enter the second number:");
                scanf("%d",&b);
                if(a>b){
                    printf("%d is greater.",a);
                }
                else{
                    printf("%d is greater.",b);
                }
                return 0;
                }           
        case 9 :{
                //defining variables
                int a,b,c;
                //scaning variables
                printf("Enter the first number:");
                scanf("%d",&a);
                printf("Enter the second number:");
                scanf("%d",&b);
                printf("Enter the third number:");
                scanf("%d",&c);
                //conditions for checking numbers 
                if(a>c && a>b){
                    printf(" %d is Greater.",a);
                }
                else if(b>c && b>a){
                    printf(" %d is Greater.",b);
                }
                else if(c>a && c>b){
                    printf(" %d is Greater.",c);
                }
                return 0;
                }           
        case 10 :{
                long long int a;
                printf("Type the number(smaller than 10 digits):");  
                scanf("%lld",&a);
                
                //starting counlting the digits in number 
                int sum,i=1;
                while(a!=sum){
                    int b = pow(10,i);
                    sum = a % b;
                    i++;
                }
                //printing answers
                printf("Total numbers are %d",i-1);
                return(0);
                }
        default: {
                printf("Enter a valid Input!");
        }
    }
    return 0;
}