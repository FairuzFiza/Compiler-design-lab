#include <stdio.h>
#include <string.h>

int main()
{
    int i,n,k=0;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char fairuz[10];
        fgets(fairuz,10,stdin);
        fairuz[strlen(fairuz)-1]='\0';
        if(fairuz[0]>='a'&&fairuz[0]<='z'|| fairuz[0]>='A'&&fairuz[0]<='Z'||fairuz[0]=='_')
        {
            for(int i=1;i<=strlen(fairuz)-1;i++)
            {
                if(fairuz[i]>='a' && fairuz[i]<='z'|| fairuz[i]>='A'&& fairuz[i]<='Z'|| fairuz[i]=='_'|| fairuz[i]>='0'&& fairuz[i]<='9')
            {
             k=1;
        }
        else
            {
                k=0;
                break;
            }
            }
        if(k==1)
            printf("%s VALID \n",fairuz);
        else
            printf("%s INVALID! \n",fairuz);

    }
    else
        printf("%s INVALID!",fairuz);
}
    }