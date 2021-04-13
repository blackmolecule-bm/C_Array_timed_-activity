#include <stdio.h>

int main ()
{
  int arry[3][2] = {
    {1007, 1007},
    {1716, 1716},
    {1615, 1615}

  };

    int ID_num1 = arry[0][0];
    int PIN_num1 = arry[0][1];

    int ID_num2 = arry[1][0];
    int PIN_num2 = arry[1][1];

    int ID_num3 = arry[2][0];
    int PIN_num3 = arry[2][1];


    printf ("Enter ID: ");
    scanf("%d", &ID_num1, arry);

    printf("Enter your Pin: ");
    scanf("%d", &PIN_num1, arry);

if (ID_num1 == PIN_num1)

        {
            printf("\nYou have successfully logged in! \n");
            printf("ID#: %d\n", ID_num1);
        }
        else
        {
            printf("\nInvalid ID/PIN\n");
        }

return 0;


}
