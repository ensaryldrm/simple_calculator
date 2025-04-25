#include "calculator_class.h"

int main()
{
    Calculator c1;
    char inp;
    double number1;
    double number2;
    double result;

    cout << "-----CALCULATOR-----" << endl;
    cout << "1. Addition\n" 
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division" << endl;
    cout << "Write 'q' for exit!\n" 
         << "--------------------" << endl;

    while(true)
    {
        cout << "\nEnter the operation: ";
        cin >> inp;
        if(inp == 'q' || inp == 'q')
        {
            return 0;
        }
        cout << "Enter the first number for the operation: ";
        cin >> number1;

        cout << "Enter the second number for the operation: ";
        cin >> number2;

        switch(inp)
        {
            case '1': result = c1.addition(number1,number2); 
                    cout << "Number1 + number2: " << result << endl;
                    break;
            
            case '2': result = c1.subtraction(number1,number2);
                    cout << "Number1 - number2: " << result << endl;
                    break;
            
            case '3': result = c1.multiplication(number1,number2);
                    cout << "Number1 * number2: " << result << endl;
                    break;

            case '4': result = c1.division(number1,number2);
                    cout << "Number1 / number2: " << result << endl;
                    break;
            
            default: cout << "Please, enter a valid number!" << endl;
            break;
        }
    }
}