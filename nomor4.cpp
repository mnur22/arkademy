#include <stdio.h>
#include <conio.h>

main(){

long int uang,temp;//mendeklarasikan var uang sebagai input pertama.
int i,jml;//jml sebagai penghitung jumlah pecahan mata uang.

printf("\nMasukan Jumlah Uang : ");scanf("%li",&uang);
printf("\n========================================");

temp=uang;//inisialisasi var temp dengan nilai dari variabel uang

printf("\nOutput Pecahan Uang : ");
for(i=1;i<=7;i++){//mengulang proses mengulang untuk mengecheck jumlah uang.

switch (i) {

case 1 : jml = temp / 50000; /*membagi(division) temp dengan jenis pecahan sehingga
sehingga mendapatkan jumlah pecahan*/
temp = temp - (50000*jml); /*mengurangi temp dengan jumlah pecahan dikali pecahan
mata uang*/
printf("\n%d) 50000 :",i); //mengeluarkan jenis pecahan
break;

case 2 : jml = temp / 20000;
temp = temp - (20000*jml);
printf("\n%d) 20000 :",i,temp);
break;

case 3 : jml = temp / 10000;
temp = temp - (10000*jml);
printf("\n%d) 10000 :",i,temp);
break;

case 4 : jml = temp / 5000;
temp = temp - (5000*jml);
printf("\n%d) 5000 :",i,temp);
break;

case 5 : jml = temp / 2000;
temp = temp - (2000*jml);
printf("\n%d) 2000 :",i,temp);
break;

case 6 : jml = temp / 1000;
temp = temp - (1000*jml);
printf("\n%d) 1000 :",i,temp);
break;

case 7 : jml = temp / 500;
temp = temp - (500*jml);
printf("\n%d) 500 :",i,temp);
break;
}

printf(" %d",jml);//output jumlah pecahan
}

getch();

}
