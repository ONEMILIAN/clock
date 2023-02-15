#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

#include "data.h"

//DEFINE DELAY
#define MAX 22000

int main( void ){ 
  //START PHASE
  while(true){
    //REFRESH DATA
    time_t rawtime;
    struct tm *timeinfo;
    time( &rawtime );
    timeinfo = localtime( &rawtime );

    //WHAT YOU SEE IN TERMINAL
    printf( "%s" , asctime( timeinfo ) );

    //SETTING DELAY
    for( int delay=0; delay<MAX; ++delay ){
      for( int delay2=0 ; delay2<MAX ; ++delay2 )
	{
	  ++counter;
	}
      counter = 0;
    }
  }
}
