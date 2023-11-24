#include <stdio.h>
#include <cs50.h>
//int const = 5 går inte att ändra medans programmet körs
int main(void)
{
    int n;
    do
    { 
        n = get_int("Size: "); 
        fflush(stdout);
    }
    while (n < 1);
//Jag föredrar
//while (n < 1)
//{
//n = get_int("Size: ");
//}

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           printf("#"); 
        }
        printf("\n");
    }
    
}