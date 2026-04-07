//accept string from user and count the capital and also small alphabet in string
//this code includes the special digit in else condition because no specific condition is given
#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall =0;
    int iCountCapital =0;

    while(*str != '\0')
{
    if(*str >= 'a' && *str <= 'z')
    {
        iCountSmall ++;
        
    }
    else
    {
        iCountCapital ++;
        
    }


    
    str ++;
}
printf("Number of small characters : %d \n " , iCountSmall);
printf("Number of capital characters : %d \n " , iCountCapital);


}

int main()
{
    char Arr[50] = {'\0'};
    

    printf("Enter String: \n");
    scanf("%[^'\n]s ", Arr);   



    
    CountAll(Arr);

    
    return 0;
}