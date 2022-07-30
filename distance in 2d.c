#include <stdio.h>
#include <math.h>

struct pt{
    int x1;
    int x2;
    int y1;
    int y2;
    int distance;
};

void dist(struct pt e1){
    
    printf("%f",sqrt((((e1.x2)-(e1.x1))*((e1.x2)-(e1.x1)) + ((e1.y2)-(e1.y1))*((e1.y2)-(e1.y1)))));
    
    
}

int main(){
    struct pt d;
    printf("enter the cordinate of first point (x,y)\n");
    scanf("%d %d",&d.x1,&d.y1);
    
    printf("enter the cordinate of second point (x,y)\n");
    scanf("%d %d",&d.x2,&d.y2);
    
    
    dist(d);
}