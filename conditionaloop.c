#include<stdio.h>

int main(){
    int age;
    int vipPass =0;
    //vipPass =1;
    printf("Enter your age\n");
    scanf("%d",&age);
    if((age>=18 && age<=70)|| vipPass ==1){
        printf("You can enter the club\n");
    }
    else{
        printf("You cannot enter the club\n");
    }
    printf("To check the conditiiong technique using ?\n ");
    (age<30)?printf("you are new member"): printf("You are old member");
    return 0;
}