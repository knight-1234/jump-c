#include <stdio.h>
#include <stdlib.h>
struct TIME {
   int sec;
   int min;
   int hours;
};

void Timediff(struct TIME t1,struct TIME t2,struct TIME *diff);

int main() {
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours, &startTime.min,&startTime.sec);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,&stopTime.min,&stopTime.sec);

   
   Timediff(startTime, stopTime, &diff);
   printf("\nTime Difference: %d:%d:%d - %d:%d:%d ", stopTime.hours,stopTime.min,stopTime.sec,startTime.hours,startTime.min, startTime.sec);
   printf("= %d:%d:%d\n", diff.hours,diff.min,diff.sec);
   return 0;
}


void Timediff(struct TIME start,struct TIME stop,struct TIME *diff) {
   while (stop.sec < start.sec) {
      --stop.min;
      stop.sec += 60;
   }
   diff->sec = abs(stop.sec - start.sec);
   while (stop.min < start.min) {
      --stop.hours;
      stop.min += 60;
   }
   diff->min = abs(stop.min - start.min);
   diff->hours = abs(stop.hours - start.hours);
}