#include <stdio.h>
#include <stdlib.h>

int row,col;
int swap_col(int a[row][col]);

int main(){
    
    
    
    printf("enter no of row and col");
    scanf("%d %d",&row,&col);
    
    int a[row][col];
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
            printf("enter no for [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            
            
        }
    }
    
   swap_col(a);
    
    
    
    for(int i=0;i<row;i++){
       
       for(int j=0;j<col;j++){
           
           printf("%d",a[i][j]);
       }
       
       printf("\n");
   }
    
    
    
}


int swap_col(int a[row][col]){
    
    int t;
    for(int k=0;k<((col+1))/2;k++){
        
        for(int i=0;i<row;i++){
            
            t=a[i][k];
            a[i][k]=a[i][col-1-k];
            a[i][col-1-k]=t;
            
            
            
            
            
        }
    }
}