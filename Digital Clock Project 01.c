#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main(){

   // DIGITAL CLOCK

   time_t rawtime = 0;
   struct tm *pTime = NULL;
   bool isRunning = true;

   printf("\n\n\n\n\n\n\n\n\n\n\n                                                 ---DIGITAL CLOCK---             \n\n\n\n");

   while(isRunning){

      time(&rawtime);

      pTime = localtime(&rawtime);

      printf("\r                                                       %02d:%02d:%02d                   ",(*pTime).tm_hour,(*pTime).tm_min,(*pTime).tm_sec);

      Sleep(1000);

   }
  return 0;
}


