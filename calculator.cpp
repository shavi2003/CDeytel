#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//------------------------FUNCTION'S PROTOTYPES------------------------

void welcome(void); // prototype of a welcome function

template <class T>
T addition(T num1, T num2) // body for a function of addition of two numbers
{
    return num1 + num2;
}

template <class T>
T substraction(T num1, T num2) // body for a function of substraction of two numbers
{
    return num1 - num2;
}

template <class T>
T multiply(T num1, T num2) // body for a function of multiplication of two numbers
{
    return num1 * num2;
}

template <class T>
T division(T num1, T num2) // body for a function of division of two numbers
{
    if(num2 != 0)
        return num1 / num2;
    return -999;
}

template <class T>
T cube(T num) // body for a function of cube
{
    return num * num * num;
}


template <class T>
T square(T num) // body for a function of square
{
    return num * num;
}

int factorial(int num); // prototype of factorial function

void addToStorage(float [], int, int); // prototype of storage function

void printStorage(float [], int); // prototype of storage printing function

void clearStorage(float [], int);

//----------------------------MAIN FUNCTION----------------------------

int main()
{
    const int dataSize = 20;
    float data[dataSize] = {0}; // going to store results of last 20 ops,
                                // if 20+ ops done => most recent 20 ones' results
    int regulator; // regulatory key
    char yn1 = 'N', yn2 = 'N', yn3 = 'N'; // for checking Y or N value
    // yn2 => checks if to use the first value from storage or not
    float first, second; // possible data elements for usage
    float result;

    welcome();
    cin >> regulator;

    while(regulator != -1)
    {
        
        switch(regulator)
        {
            case 1:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << "input the second number please: ";
                    cin >> second;
                    cout << endl;

                    result = addition(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input two numbers please: ";
                    cin >> first >> second;
                    cout << endl;

                    result = addition(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 2:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << "input the second number please: ";
                    cin >> second;
                    cout << endl;

                    result = substraction(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input two numbers please: ";
                    cin >> first >> second;
                    cout << endl;

                    result = substraction(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 3:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << "input the second number please: ";
                    cin >> second;
                    cout << endl;

                    result = multiply(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input two numbers please: ";
                    cin >> first >> second;
                    cout << endl;

                    result = multiply(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 4:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << "input the second number please: ";
                    cin >> second;
                    cout << endl;

                    result = division(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input two numbers please: ";
                    cin >> first >> second;
                    cout << endl;

                    result = division(first, second);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 5:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << endl;

                    result = cube(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input a number please: ";
                    cin >> first;
                    cout << endl;

                    result = cube(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 6:
            { 
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << endl;

                    result = square(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                } 
                else
                {
                    cout << "input a number please: ";
                    cin >> first;
                    cout << endl;

                    result = square(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 7:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << endl;

                    result = factorial(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input a number please: ";
                    cin >> first;
                    cout << endl;

                    result = factorial(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }   
            case 8:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << endl;

                    result = exp(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input a number please: ";
                    cin >> first;
                    cout << endl;

                    result = exp(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 9:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << endl;

                    result = sin(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input a number please: ";
                    cin >> first;
                    cout << endl;

                    result = sin(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }
            case 10:
            {
                if(yn2 == 'y' || yn2 == 'Y')
                {
                    cout << endl;

                    result = cos(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
                else
                {
                    cout << "input a number please: ";
                    cin >> first;
                    cout << endl;

                    result = cos(first);

                    cout << "your result is: " << result << endl;

                    addToStorage(data, result, dataSize);
                    break;
                }
            }

            case -1:
                break;

            default:
            {
                cout << "wrong input, please try again " << endl;
                break;
            }
        }

        yn2 = 'K'; // bringing to some arbitrary value which is not Y or y

        cout << "do you want to see the result saved in storage (press Y to see or anything else)? ";
        cin >> yn1;
        if(yn1 == 'Y' || yn1 == 'y')
        {
            printStorage(data, dataSize);
        }
        else
        {}

        cout << "do you want to clear storage (type 'y' or 'Y' for yes or anything else for no)? ";
        cin >> yn3;
        if(yn3 == 'y' || yn3 == 'Y')
        {
            clearStorage(data, dataSize);
        }
        else
        {}

        cout << "do you want to use the result you get as a variable for next calculation";
        cout << " (press Y for yes or anything else)? " << endl;
        cin >> yn2;
        if(yn2 == 'Y' || yn2 == 'y')
        {
            first = result;
        }
        else
        {}

        cout << "input your regulator key once again please: ";
        cin >> regulator;
        cout << endl;
    } 


    return 0;
}

//---------------------------FUNCTION BODIES----------------------------

void welcome(void) // body of a welcome function
{
    cout << "Welcome to the Calculator Programme! " << endl;
    cout << "please choose which sort of calculation are you interested in doing (press key or -1 for exiting): " << endl;
    cout << "1. Addition"<< endl << "2. substraction" << endl << "3. multiplication" << endl << "4. division" << endl << "5. cube" 
    << endl << "6. square" << endl << "7. factorial" << endl << "8. exponential" << endl << "9. sine" 
    << endl << "10. cosine" << endl;
}


int factorial(int num) // body of factorial function recursively
{
    if(num == 1 || num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}


void addToStorage(float storage[], int element, int size) // function adds element to a storage
{
    int i = 0, hold = 0;
    bool value = false;
    while(i != size && value != true) // if there is 0 then it fills it and that's it
    {
        if(storage[i] == 0 && element != 0)
        {
            storage[i] = element;
            value = true;
        }
        ++i;
    }
    if(value == false) // if there is no zero => it erases first element ([0]), pushes all others to left 
    {                  // by one and add the element at the end
        storage[0] = 0;
        for(int j = 0; j < size - 1; j++)
        {
            hold = storage[j];
            storage[j] = storage[j + 1];
            storage[j + 1] = hold;
        }

        storage[size - 1] = element;
    }

}


void printStorage(float storage[], int size) // printing an array with saved data
{
    for(int i = 0; i < size; i++)
    {
        cout << storage[i] << " ";
        if(i % 5 == 0)
            cout << endl;
    }
    cout << endl;
}

void clearStorage(float storage[], int size) // setting all elements of that array as 0
{
    for(int i = 0; i < size; i++)
        storage[i] = 0;
    printStorage(storage, size);
}