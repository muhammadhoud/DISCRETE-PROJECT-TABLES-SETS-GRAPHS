#include <iostream> // Required for input-output operations
#include <conio.h>  // Required for console input/output operations
using namespace std;

// Function to print a line separator
void print_line()
{
    cout << "|";
    for (int i = 0; i < 154; i++)
    {
        cout << "=";
    }
    cout << "|" << endl;
}

int main()
{
    bool rel[3] = { 0, 0, 1 }; // Array to store the relation results (reflexive, symmetric, anti-symmetric)
    int* arr1 = 0, * arr2 = 0, ** result = 0; // Arrays to store the elements of the sets and their Cartesian product
    int s1 = 0, s2 = 0, p; // Variables to store the sizes of the sets
    int mul = 0; // Variable to store the total number of pairs in the Cartesian product
    char x = '0', z; // Variables for user input

    // Main loop to keep the program running until Esc key is pressed
    while (x != 27)
    {
        system("cls"); // Clear the screen
        system("Color 60"); // Change the console color
        cout << endl << "PRESS 1 TO INPUT THE SETS TO CHECK THE RELATIONS " << endl;
        print_line();
        cout << "PRESS 2 TO GET THE RESULT OF RELATIONS" << endl;
        print_line();
        cout << "PRESS Esc TO END PROGRAM" << endl;
        cout << endl << "PLEASE PRESS 1,2 OR Esc TO USE THE FUNCTIONS ";
        x = _getch(); // Get user input

        // If user presses 1, input the sets
        if (x == '1')
        {
            system("cls"); // Clear the screen
            system("Color F4"); // Change the console color
            print_line();

            // Input the number of elements for the first set
            do
            {
                cout << endl << "THE NUMBER OF ELEMENTS MUST BE GREATER THAN OR EQUAL TO 3 " << endl;
                cout << "PLEASE INPUT THE NUMBER OF ELEMENTS FOR FIRST SET : ";
                cin >> s1;
            } while ((s1 != 3) && (s1 < 3)); // Ensure the number of elements is at least 3

            arr1 = new int[s1]; // Allocate memory for the first set

            // Input the elements of the first set
            cout << endl << "INPUT THE ELEMENTS OF FIRST SET :- " << endl << endl;
            for (int i = 0; i < s1; i++)
            {
                cout << "PLEASE INPUT THE " << i + 1 << " ELEMENT : ";
                cin >> *(arr1 + i);
            }
            print_line();

            // Input the number of elements for the second set
            do
            {
                cout << endl << "THE NUMBER OF ELEMENTS MUST BE GREATER THAN OR EQUAL TO 3 " << endl;
                cout << "PLEASE INPUT THE NUMBER OF ELEMENTS FOR SECOND SET : ";
                cin >> s2;
            } while ((s2 != 3) && (s2 < 3)); // Ensure the number of elements is at least 3

            arr2 = new int[s2]; // Allocate memory for the second set

            // Input the elements of the second set
            cout << endl << "INPUT THE ELEMENTS OF SECOND SET :- " << endl << endl;
            for (int i = 0; i < s2; i++)
            {
                cout << "PLEASE INPUT THE " << i + 1 << " ELEMENT : ";
                cin >> *(arr2 + i);
            }
            print_line();

            // Calculate the number of pairs in the Cartesian product
            mul = s1 * s2;
            result = new int* [mul]; // Allocate memory for the Cartesian product
            for (int i = 0; i < mul; i++)
            {
                result[i] = new int[2]; // Each pair has two elements
            }

            // Populate the Cartesian product
            for (int i = 0; i < mul; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    if (j == 0)
                    {
                        result[i][j] = arr1[i / s2];
                    }
                    else if (j == 1)
                    {
                        result[i][j] = arr2[i % s2];
                    }
                }
            }

            // Check for reflexivity
            for (int i = 0; i < s1; i++)
            {
                for (int j = 0; j < s2; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        rel[0] = 1;
                        break;
                    }
                    else
                    {
                        rel[0] = 0;
                    }
                }
                if (rel[0] == 0)
                {
                    break;
                }
            }

            // Check for anti-symmetry
            for (int i = 0; i < s1; i++)
            {
                for (int j = 0; j < s2; j++)
                {
                    if (arr1[i] != arr2[j])
                    {
                        bool foundBA = false;
                        for (int x = 0; x < s1; x++)
                        {
                            for (int y = 0; y < s2; y++)
                            {
                                if (arr1[x] == arr2[j] && arr2[y] == arr1[i])
                                {
                                    foundBA = true;
                                    break;
                                }
                            }
                            if (foundBA)
                            {
                                rel[2] = 0;
                                break;
                            }
                        }
                    }
                }
            }

            // Check for symmetry
            for (int i = 0; i < mul; i++)
            {
                int found1 = 0;
                int a1, b1;
                a1 = result[i][0];
                b1 = result[i][1];
                for (int j = 0; j < mul; j++)
                {
                    int a2, b2;
                    a2 = result[j][0];
                    b2 = result[j][1];
                    if (a1 == b2 && b1 == a2)
                    {
                        found1 = 1;
                        break;
                    }
                }
                if (found1 == 0)
                {
                    rel[1] = 0;
                    break;
                }
                else
                {
                    rel[1] = 1;
                }
            }

            cout << endl << "PLEASE PRESS ANY KEY TO CONTINUE ";
            z = _getch(); // Wait for user input to continue
        }

        // If user presses 2, display the results
        if (x == '2')
        {
            system("cls"); // Clear the screen
            system("Color B0"); // Change the console color
            print_line();

            // Display the elements of the first set
            cout << endl << "A = { ";
            for (int i = 0; i < s1; i++)
            {
                cout << arr1[i] << " ";
                if (i != s1 - 1)
                {
                    cout << ",";
                }
            }
            cout << "}\t";

            // Display the elements of the second set
            cout << endl << "B = { ";
            for (int i = 0; i < s2; i++)
            {
                cout << *(arr2 + i) << " ";
                if (i != s2 - 1)
                {
                    cout << ",";
                }
            }
            cout << "}" << endl;
            print_line();

            // Display the Cartesian product
            cout << endl << "A X B = { ";
            for (int i = 0; i < mul; i++)
            {
                cout << "( ";
                for (int j = 0; j < 2; j++)
                {
                    cout << *(*(result + i) + j) << " ";
                    if (j == 0)
                    {
                        cout << ",";
                    }
                }
                cout << ")";
                if (i != mul - 1)
                {
                    cout << ",";
                }
            }
            cout << "}" << endl;
            print_line();

            // Display reflexive result
            if (rel[0] == 1)
            {
                cout << endl << "REFLEXIVE :- \t \t \t      TRUE" << endl;
            }
            else
            {
                cout << endl << "REFLEXIVE :- \t \t \t      FALSE" << endl;
            }
            print_line();

            // Display symmetric result
            if (rel[1] == 1)
            {
                cout << endl << "SYMMETRIC :- \t\t \t      TRUE" << endl;
            }
            else
            {
                cout << endl << "SYMMETRIC :- \t\t \t      FALSE" << endl;
            }
            print_line();

            // Display anti-symmetric result
            if (rel[2] == 1)
            {
                cout << endl << "ANTI-SYMMETRIC :-  \t\t      TRUE" << endl;
            }
            else
            {
                cout << endl << "ANTI-SYMMETRIC :-  \t \t      FALSE" << endl;
            }
            print_line();

            // Display combined results
            if (rel[0] == 1 && rel[1] == 1)
            {
                cout << endl << "BOTH REFLEXIVE AND SYMMETRIC :-       TRUE" << endl;
            }
            else
            {
                cout << endl << "BOTH REFLEXIVE AND SYMMETRIC :-       FALSE" << endl;
            }
            print_line();

            if (rel[1] == 1 && rel[2] == 1)
            {
                cout << endl << "BOTH ANTI-SYMMETRIC AND SYMMETRIC :-  TRUE" << endl;
            }
            else
            {
                cout << endl << "BOTH ANTI-SYMMETRIC AND SYMMETRIC :-  FALSE" << endl;
            }
            print_line();

            cout << endl << endl << "PLEASE PRESS ANY KEY TO CONTINUE ";
            z = _getch(); // Wait for user input to continue
        }
    }

    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    for (int i = 0; i < mul; i++)
    {
        delete[] result[i];
    }
    delete[] result;
}
