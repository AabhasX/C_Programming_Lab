#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num==0)
        printf("Zero");
    else{
        int count=0;
        while(num%10 == 0){
            count++;
            num = num / 10;
        }
    
        int rev=0;
        while(num != 0){
            int rem = num % 10;
            rev = rev * 10 + rem;
           num = num / 10;
        }
        while(rev != 0){
            int rem = rev % 10;
            switch(rem){
                case 0:
                    printf("Zero ");
                    break;
                case 1:
                    printf("One ");
                    break;
                case 2:
                    printf("Two ");
                    break;
                case 3:
                    printf("Three ");
                    break;
                case 4:
                    printf("Four ");
                    break;
                case 5:
                    printf("Five ");
                    break;
                case 6:
                    printf("Six ");
                    break;
                case 7:
                    printf("Seven ");
                    break;
                case 8:
                    printf("Eight ");
                    break;
                case 9:
                    printf("Nine ");
                    break;
            }
            rev = rev / 10;
        }
        for(int i=1; i<=count; i++){
            printf("Zero ");
        }
    }
    return 0;
}