#include <stdio.h>

int main(){
   int i, n=10, t1=0, t2=1, nextTerm=0;
   for(int i = 1; i<= n; i++){
	printf("%d\n",nextTerm);
	nextTerm = t1 + t2;
	t1 = t2;
	t2 = nextTerm;
   }
   return 0;
}
