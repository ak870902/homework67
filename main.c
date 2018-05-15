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
	int number1,number2,number3;
	srand(time(NULL));
	printf("¤Q­Ó¶Ã¼Æ:");
	for (number1=0;number1<=9;number1++)
	{
		do
		{
			data[number1]=(rand()%51)+10;
			number3=0;
			for (number2=0;number2<number1;number2++)
			{
				if(data[number1]==data[number2])
				{
					number3=1;
					break;
				}
			}
		}while(number3==1);
	    printf(" %d ",data[number1]);
	}
    printf("\n");
}

