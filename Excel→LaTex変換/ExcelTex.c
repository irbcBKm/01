#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int hline,i;
    char filename[] = "deta.txt";
	char dt;
    FILE*fp;

    printf("���̃v���O�����Ɠ����t�H���_�ɂ���Adata.txt�ɕ\���R�s�[���Ă��������B\n");
    printf("�e�s�ɒǉ�����\\hline�̐�����͂��Ă�������\n=>");
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