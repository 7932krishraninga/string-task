// lowercase to uppercase string conversion
#include<stdio.h>
void main(){
    char name[50];
    printf("Enter the name:");
    scanf("%s",&name);

    for(int i=0;name[i]!='\0';i++){
        if(name[i]>='a' && name[i]<='z'){
            name[i]-=32;
        }
    }
    printf("%s",name);
}