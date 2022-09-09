#include <stdio.h>
#include <stdlib.h>



int main() {
	
int n,i,j,a;


printf("Dizinin eleman sayisini giriniz: ");
scanf("%d",&n);	
		
int dizi[n];


for(i=1;i<=n;i++)
{
printf("%d . elemani giriniz: ",i);
scanf("%d",&dizi[i-1]);
}

a=dizi[0];

for(j=1;j<=n;j++)
{
	if(dizi[j]<a)
	{
		a=dizi[j];
	}
}

printf("Smallest number: %d\n",a);
printf("Smallest number's address: %x",&a);

	return 0;
}
