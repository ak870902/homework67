#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void S0 (int *data);

int main(void)
{
	int d[10];
	S0(d);

}

void S0 (int *data)
{
	int number,j,k;
	srand(time(NULL));
	printf("¤Q­Ó¶Ã¼Æ:");
	for (number=0;number<=9;number++)
	{
		do
		{
			data[number]=(rand()%51)+10;
			k=0;
			for (j=0;j<number;j++)
			{
				if(data[number]==data[j])
				{
					k=1;
					break;
				}
			}
		}while(k==1);
	    printf(" %d ",data[number0]);
	}
    printf("\n");
}

