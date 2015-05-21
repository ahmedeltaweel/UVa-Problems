/**
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
**/

/*
a program to to determine the maximum cycle length over all numbers
between i and j, including both endpoints.

to reach 1 form a given integer from the input by using the formula
if the number is even then devide by 2
if the number is odd ther multiply by 3 and add 1
*/

/*
Input:
The input will consist of a series of pairs of integers i and j, one pair of integers per
line. All integers will be less than 1,000,000 and greater than 0.
Output:
For each pair of input integers i and j, output i, j in the same order in which they
appeared in the input and then the maximum cycle length for integers between and
including i and j. These three numbers should be separated by one space, with all three
numbers on one line and with one line of output for each line of input.
*/


#include <iostream>

using namespace std;

// a function to retrun the number of cycles
int NumberOfCycles(long long int startNum )
{

    // counter to count the numbers of cycles
    int counter = 0;

    // looping while number is bigger than or equal one
    while(startNum >= 1)
    {

        // applying conditions according the description of the problem
        if(startNum == 1)
        {

            counter++;
            break;

        }
        else if (startNum % 2 == 0 )
        {

            startNum /= 2;
            counter++;

        }
        else
        {

            startNum = ( startNum * 3 ) + 1;
            counter++;

        }
    }

    //returning the number of cycles
    return counter;

}


int main()
{
    //a variable to count the number of steps to reach 1
    int counter = 0;

    // the fisrt input number and the second input number
    long long int startnum = 0;
    long long int lastnum = 0;

    // a loop to get the input and do the calculation
    while(cin >> startnum >> lastnum )
    {


        //resetting counter for new input
        counter = 0;
        //looping through all numbers between the start and end

        if(startnum < lastnum )
        {

            for(int i = startnum ; i <= lastnum ; i++)
            {
                // receiving the no. of cycles form the functions
                int cyclesNumber = NumberOfCycles(i);

                // comparing the received number to the counter to determine the value of counter
                if(cyclesNumber >= counter)
                    counter = cyclesNumber;
            }
        }
        else
        {

            for (int i = startnum ; i>= lastnum ; i--)
            {
                // receiving the no. of cycles form the functions
                int cyclesNumber = NumberOfCycles(i);

                // comparing the received number to the counter to determine the value of counter
                if(cyclesNumber >= counter)
                    counter = cyclesNumber;
            }
        }

        // printing the output
        cout << startnum << " " << lastnum << " " << counter << endl;


    }


    return 0;
}
