#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,d,e,t; //��������������a,b�����d��������t
    char c;        //�����c��ȡ���������������¡�
	float y, x, m;  
    int i,sum=0;    //��Ŀ����i,�����Ŀsum
    srand(time(0)); //��ʼ�������������
    /**< �������� */
	system("color 73");
	printf("--------------------��ӭ������������С��ϰ--------------------\r\n");
    for (y = 1.5f;y > -1.5f;y -= 0.1f)  
    {  
        for (x = -1.5f;x < 1.5f;x += 0.05f)  
        {  
            m = x*x + y*y - 1;  
            putchar(m*m*m - x*x*y*y*y <= 0.0f ? '*' : ' ');  
        }
		putchar('\n'); 
    }
	printf("-------------------------���ǿ�ʼ�-------------------------\r\n");
    for(i=0;i<10;i++)
    {
        a=rand()%100+1;
        b=rand()%100+1;
        c=rand()%4;     //0��ӣ�1�����2��ˣ�3���

        /**< ���ݺϸ��жϼ���ʽ��ʾ */
        printf("                      ��%d�⣺",i+1);
        switch(c)
        {
        case 0:
            while((d=a+b)>100)    //��֤����100��
            {
                a=rand()%100+1;
                b=rand()%100+1;
            }
            printf("%d + %d = ",a,b);
            break;
        case 1:
            while(a>100||b>100) //������С��100
            {
                a=rand()%100+1;
                b=rand()%100+1;
            }
            if(a<b)             //���������ڼ���
            {
                d=a;
                a=b;
                b=d;
            }
            d=a-b;
            printf("%d - %d = ",a,b);
            break;
        case 2:
            while((d=a*b)>100)    //��֤��С��100
            {
                a=rand()%100+1;
                b=rand()%100+1;
            }
            printf("%d �� %d = ",a,b);
            break;
        case 3:
            while(a>100||b>100||(a*b==0))   //��֤������С��100�ҳ�����Ϊ0
            {
                a=rand()%100+1;
                b=rand()%100+1;
            }
            if(a<b)           //������������ڳ���
            {
                d=a;
                a=b;
                b=d;
            }
            a=(a/b)*b;      //��֤����
            d=a/b;
            printf("%d �� %d = ",a,b);
            break;
        }
        /**< ������ļ����� */
        scanf("%d",&t);
        if(d==t)
        {
            sum++;
            printf("��ȷ\n");
        }
        else
            printf("����\n");

    }
    /**< �����������͵÷� */
    printf("                    ��� %d �⣬�÷֣�%d\n",sum,sum*10);
	if(sum>=7)
		printf("            С����������������������Ŷ!(*^��^*)\r\n");
	else
		printf("            ��Ҫй��Ŷ���������ͣ���һ�����Ե�!(*^��^*)\r\n");
    return 0;
}
