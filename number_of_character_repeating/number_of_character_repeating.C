#include <stdio.h>

int main()
{
    char st[100],prev,rt[100];
    int in,i,n;
    printf("Enter The String : ");
    scanf("%s",st);
    prev=st[0];
    n=1;
    in=0;
    for(i=1;st[i]!='\0';i++)
    {
        if(st[i]==prev)
        {
            n++;
        }
        else
        {
            rt[in]=prev;
            in++;
            rt[in]=n+'0';
            prev=st[i];
            n=1;
            in++;
            
            
        }
    }
    rt[in]=prev;
    in++;
    rt[in]=n+'0';
    in++;
    rt[in]='\0';
    printf("The Result Is : %s",rt);
    
    return 0;
}
