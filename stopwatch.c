#include<stdio.h>
void main(){
    int num;
    int i,key,found=0;
    printf("Enter the no. of elements:");
    scanf("%d",&num);
    int array[num];
    printf("Enter no. of elements/n");
    for(i=0;i<num;i++){
    scanf("%d",array[i]);
    }
    printf("Enter the elements to be searched");
    scanf("%d",&key);
    for(i=0;i<num;i++){
        if(key==array[i]){
            found=1;
            break;
    } 
    }
    if(found==0)
        printf("Element is present at the position %d",i+1);
    else 
        printf("Element is present/n")
}