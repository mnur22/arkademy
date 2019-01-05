#include<iostream.h>
#include<stdio.h>
#include<conio.h>


void drawline()
{
int a,b,c,baris ;
printf("Masukkan Jumlah Baris  :");
scanf("%d",&baris);

	for (a = 1; a <= baris; a++)
	{
		for (b = 1; b <= a; b++)
			{
					cout<<("  ");
			}
		for (c = 1; c <= 1; c++)
			{
					cout<<(" *");
			}
				printf("\n");
	}
}

int main()
{
	 drawline();
	 getchar();
	 return 0;
}
