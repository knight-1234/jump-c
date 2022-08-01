//find max in leading diagonal of  a nxn dimensional array(dynamically allocated)

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
    
    for(int i=0;i<(r*c);i++)
    {
       
       printf("%d",p[i]);
        {if((i+1)%c==0)
            
            printf("\n");
        }
        
    }
    printf("\n\n");
    
    int max=p[0];
    for(int i=0;i<((r*c));i++)
    {   
        if((i<=3)&&(i!=r-1))
        {  
           if(max<p[i])
           { 
               max=p[i];
           }  
           
        }    
    }
    
    printf("%d",max);
    
}