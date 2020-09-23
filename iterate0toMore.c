#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

      if(argc<=1) {
      printf("Requires single integer argument");
      exit(1);
    }
		int n = atoi(argv[1]);
		for(int i=0;i<n;i++)
			printf("%d\n", i);

}
