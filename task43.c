// frequency counter
#include<stdio.h>
#include<string.h>
void main(){
    char name[100];
    int freq[256]={0};

    printf("Enter the name:");
    scanf("%s",name);

    for(int i=0;i<strlen(name);i++){
        if(name[i]!='\0'){
            freq[name[i]]++;
        }
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            printf("%c=>%d\n",i,freq[i]);
        }
    }
}