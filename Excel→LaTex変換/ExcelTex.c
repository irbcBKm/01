#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int hline,i;
    char filename[] = "deta.txt";
	char dt;
    FILE*fp;

    printf("このプログラムと同じフォルダにある、data.txtに表をコピーしてください。\n");
    printf("各行に追加する\\hlineの数を入力してください\n=>");
    scanf("%d",&hline);

    fp = fopen(filename,"r");
    while ((dt = fgetc(fp)) != EOF)
	{
		if (dt == '\t')
        {
            printf("&");
        }
        else if (dt == '\n')
        {
            printf("\\\\");
            for (i = 0; i < hline; i++)
            {
                printf("\\hline");
            }  
            printf("\n"); 
        }
        else
        {
            printf("%c",dt);
        }
	}    
    printf("\\\\\\hline");
    printf("\n");
    fclose(fp);
    return 0;
}