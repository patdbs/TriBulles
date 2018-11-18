#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define MAX 30
int main(const int argc, const char **argv) {
	char tab[MAX];
	int i,tmp,j;
	bool stop;
	stop = false;
	for(i=0;i<MAX;i++)
	{
		tab[i]= rand()%50;
	}
	printf("Affichage du tableau non trié : \n");
	for(i=0;i<MAX;i++)
	{
		printf(" %d,", tab[i]);
	}
	printf("\n");
	while(!stop)
	{
		stop = true;
		for(j=0;j<=MAX-2;j++)
		{
			if(tab[j]>tab[j+1])
			{
				tmp=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=tmp;
				stop = false;
			}
		}
	}
	printf("Affichage du tableau trié : \n");
	for(i=0;i<MAX;i++)
	{
		printf(" %d,", tab[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}

