#include <stdio.h>

int main()
{
    char a[100],b[100];
    int v,c,i;
    printf("Enter The String 1 : ");
    scanf("%s",a);
    printf("Enter The String 2 : ");
    scanf("%s",b);
    for(i=0,v=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
    }
    for(i=0,c=0;b[i]!='\0';i++)
    {
        if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u')
        {
            c++;
        }
    }
    printf("String 1 Vowels : %d\nString 2 Consonants : %d\n%d",v,c,v+c);
    return 0;
}