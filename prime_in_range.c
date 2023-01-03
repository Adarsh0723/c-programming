//prime number in a given range 
#include<stdio.h>
int main(){
    //taking input
    int a,b;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    //checking whole range
    for(int j=a;j<=b;j++){
    int c=1;
    //condition for number to be two
    if(j==2){
        printf("%d is Prime.\n",j);
    }
    //other numbers
    else{
        //check for prime number
        for(int i=2; i<j ; i++){
            if(j%i==0){
                c=0;
                break;
            }
        }
        //accordingly printing the answer
        if(c){
            printf("%d is Prime.\n",j);
        }
    }
    }
    return 0;
}