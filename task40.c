// to check whether password is strong or not
#include<stdio.h>
#include<string.h>
int main(){
    char password[20],checkletter=0,checknumber=0,checkspecial=0;

    printf("Enter the password:");
    gets(password);

    if(strlen(password)>=6 && strlen(password)<=20){
        for (int i = 0; i < strlen(password); i++)
        {
            if ((password[i]>=65 && password[i]<=90) || (password[i]>=97 && password[i]<=122))
            {
                
                checkletter=1;
                
            }
            if (password[i]>='0' && password[i]<='9')
            {
                
                checknumber=1;
                
            }
            if (password[i]>=33 && password[i]<=47)
            {
                
                checkspecial=1;
                
            }
            if (password[i]==64)
            {
                
                checkspecial=1;
                
            }
            
        }
        
    }
    else{
        printf("Please enter more than or equal to 6 characters");
    }

    if(checkletter!=1){
        printf("\n password must have atleast 1 letter");
    }
    else if(checknumber!=1){
        printf("\n password must have atleast 1 number");
    }
    else if(checkspecial!=1){
        printf("\n password must have atleast 1 special character");
    }
    else{
        printf("your password is strong");
    }
    return 0;
}