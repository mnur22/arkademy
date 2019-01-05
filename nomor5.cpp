#include <stdio.h>
int main()
	 {
	 int tamu,i,jumlah=0;
	 printf("Masukkan Jumlah Tamu :");
	 scanf("%d",&tamu);
	 for (i=1;i<=tamu-1;i++)
	 {
		 jumlah=jumlah+(i);
	 }
	 printf ("Jumlah Jabat Tangan=%d\n",jumlah);
		return 0;
	 }
