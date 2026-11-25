#include <stdio.h>
#include <string.h>
int main()
{
    /*int ar[5];
    printf("Enter elements in array:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Elements in array:\n");
    for(int i=0; i<5; i++)
    {
        printf(" %d ", ar[i]);
    }
    printf("\nIn reverse order:\n");
    for(int i=4;i>=0;i--)   
    {
        printf(" %d ", ar[i]);
    }*/
    char s[100];
    printf("\nEnter a string:\n"); 
    scanf("%[^\n]s",s);
    printf("Length of the string: %d\n",strlen(s));
    char copy[100];
    strcpy(copy,s);
    printf("Copied string: %s\n",copy);
    printf("COncatenation of the string %s and %s is: %s\n",s,copy,strcat(s ,copy));
    return 0;
}