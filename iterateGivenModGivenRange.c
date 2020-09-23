#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

      if(argc<=2) {
      printf("Requires two integer arguments range then mod");
      exit(1);
    }
		int n = atoi(argv[1]);
    int m = atoi(argv[2]);
		for(int i=0;i<n;i++)
      if(i % m ==0 ){
			     printf("%d\n", i);
         }
}
