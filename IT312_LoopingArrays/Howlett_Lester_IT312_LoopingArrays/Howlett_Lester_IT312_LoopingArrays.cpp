#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
    //Declaring integer array of size 10
    int array[10], t;

    //Reading 10 integer values from user
    for (int x = 0; x < 10; x++) {

        //Prompting user to enter a value
        cout << "Enter Integer No. " << x + 1 << " : " << endl;

        //Storing value in the array at corresponding index
        cin >> array[x];
    }

    //Using a for loop for sorting logic

    for (int x = 0; x < 10; x++) {

        
        for (int y = 0; y < 9; y++) {

            //Comparing side by side elements
            if (array[y] > array[y + 1]) {

                //Swapping elements
                t = array[y];
                array[y] = array[y + 1];
                array[y + 1] = t;

            }

        }

    }

    cout << "Array in ascending order is : ";

    
    for (int x = 0; x < 10; x++)
    {
        
        cout << endl << array[x];
    }

    //Pause for dramatic effect
    system("pause");

    return;
}