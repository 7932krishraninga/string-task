// uppercase to lowercase in string
#include<stdio.h>
void main(){
    char name[50];

    printf("Enter the name:");
    scanf("%s",name);

    for(int i=0;name[i]!='\0';i++){
        if(name[i]>=65 && name[i]<=90){
            name[i]+=32;
        }
    }
    printf("%s",name);
}