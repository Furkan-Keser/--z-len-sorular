#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>

struct yap {
  char cdizi1[20]; // Adý
  int numara;      // Numara
  int id;          // Yaþý
} ydizi[4] = { "Ahmet", 259,25,
               "Mehmet", 365,22,
               "Mustafa", 421,20,
               "Murat", 280,21,
             };

int main(void)
{
  int id;

  for (id=0; id<4; id++)
       printf("%s %d %d\n", ydizi[id].cdizi1, ydizi[id].numara,  ydizi[id].id);  
      

  return 0;
}

	return 0;
}
