//Develop a lexical analyzer to test whether a given identifier is valid or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int len;
    printf("Enter the identifier to check the validity:\n");
    scanf("%s",&string);
    if(string[0]>='A'||string[0]>='a'||string[0]<='Z'||string[0]<='z'||string[0]=='_')
    {
        printf("valid identifier");
    }
    else if(string=="return"||string=="goto"||string=="break")
    {
    printf("Keywords cant be an identifier");
    }
    else
    {
        printf("Not a valid identifier");
    }
    return 0;

}