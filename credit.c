#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long numbre = get_long("numbre: ");
    int array[16];
    int count = 0;
    int sum_odd = 0;
    int sum_even = 0;



    // array

    while (numbre > 0)
    {
        array[count] = numbre % 10;
        numbre = numbre / 10;
        count++;
    }


    // sum_odd

    for (int i =1; i<count; i = i + 2)
    {
        int doubled = array[i] * 2;

        if (doubled > 9)
        {
            sum_odd += (doubled % 10) + (doubled / 10);
        }
        else
        {
            sum_odd += doubled;
        }
    }


    //sum_even

    for (int i =0; i<count; i = i + 2)
    {
        sum_even += array[i];
    }


    //conditions

    int sum = sum_odd + sum_even;

    if (sum % 10 == 0)
    {
        if ((count == 15) && (array[count -1] == 3) && ((array[count - 2] == 4) || (array[count - 2] == 7 )))
        {
            printf("American Express\n");
        }
        else if ((count == 13) && (array[count -1] == 4 ))
        {
            printf("visa\n");
        }
        else if ((count == 16) && (array[count -1] == 4 ))
        {
            printf("visa\n");
        }
        else if ((count == 16) && (array[count -1] == 5) && ((array[count - 2] == 1 ) || (array[count - 2] == 2 ) || (array[count - 2] == 3 ) || (array[count - 2] == 4 ) || (array[count - 2] == 5 )))
        {
            printf("MasterCard\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
