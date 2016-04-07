#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n=atoi(argv[1]);
	srand(atoi(argv[2]));
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square=new char *[n];
	for(int i=0;i<n;i++)
	{
		square[i]=new char [n];
	}
	for(int i=0;i<n*n;i++)
	{
		square [i/n][i%n]=(rand()%('z'-'a'))+'a';

	}

	
	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%c ",square[i][j]);
				if(j==n-1) printf("\n");
			}
		}
}