//print diagonal elementusing pointer in 2d array

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int r,c;
    
    printf("enter the row and column");
    
    scanf("%d %d",&r,&c);
    
    int *p,a;
    
    p=(int*)malloc((r*c)*sizeof(int));
    
    for(int i=0;i<(r*c);i++){
        
        printf("enter element %d",i+1);
        scanf("%d",&p[i]);
    }
    
    for(int i=0;i<(r*c);i++){
       
       printf("%d",p[i]);
        if((i+1)%c==0){
            
            printf("\n");
        }
    }
    printf("\n\n");
    
    for(int i=(r-1);i<((r*c)-1);i++){
       
        if((i)%(r-1)==0)
           printf("%d",p[i]);
           
        else{
            printf(" ");
        }   
    }
    
    
    
}