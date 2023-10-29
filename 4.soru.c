#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	void arama(int aranan) {
    int kontrol = 0;
    int gecici,ilk;
    gecici = ilk;
    if (gecici == NULL)
        kontrol = -1;
    else {
        while (gecici != NULL) {
            if (aranan == gecici ->sayi) {
                kontrol = 1;
            }
            gecici = gecici->sonraki;
        }
    }
    if (kontrol == -1)
        printf("\nListede Eleman Yoktur...\n");
    else if (kontrol == 1)
        printf("\n%d Sayi Bulunmustur..\n", aranan);
    else
        printf("\nAranan Sayi Bulunamamistir...\n");
}
	return 0;
}
