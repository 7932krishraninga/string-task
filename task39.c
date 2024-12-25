// jai ganesh
// toggle case in string
#include<stdio.h>
void main(){
    char name[50];

    printf("Enter the name:");
    scanf("%s",name);

    for(int i=0;name[i]!='\0';i++){
        if(name[i]>=97 && name[i]<=122){
            name[i]-=32;
        }
        else if(name[i]>='A' && name[i]<='Z'){
            name[i]+=32;
        }
    }
    printf("%s",name);

}