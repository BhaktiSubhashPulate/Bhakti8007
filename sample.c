#include<stdio.h>
int main(){
    
    int width,length;
    
    printf("enter area & Length");
    scanf("%d%d",&width,&length);
    int area= width*length;
    int perimeter=2*width*length;
    printf("area of rectangle is:%d",area);
    printf("perimeter of rectangle is:%d",perimeter);

    
   return 0;
}