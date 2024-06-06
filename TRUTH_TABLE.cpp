//#include "stack.h"  // Include the header file for Stack class
//
///*---------------------|Operations|---------------------|*/
//
//// Function to perform NOT operation
//void NOT_operation(string str, variable* vari, int totalElements, int totalVariables, int totalOperations) {
//    int newSpace = -1;  // Index for a new variable
//    int left = -1;      // Index of the existing variable
//    string newStr = str + "'";  // Create a new string for NOT operation
//
//    // Loop to find the variable or an empty space
//    for (int i = 0; i < totalOperations + totalVariables; i++) {
//        if (newStr == vari[i].str) {
//            return;  // If the variable already exists, return
//        }
//        else if (vari[i].str == "") {
//            newSpace = i;  // Find an empty space
//        }
//        else if (vari[i].str == str) {
//            left = i;  // Find the existing variable
//        }
//    }
//
//    // Assign the new string to the variable
//    vari[newSpace].str = newStr;
//
//    // Perform NOT operation element-wise
//    for (int i = 0; i < totalElements; i++) {
//        vari[newSpace].arr[i] = ((vari[left].arr[i] + 1) % 2);
//    }
//}
//
//// Function to perform AND operation
//void AND_operation(string left, string right, variable* vari, int totalElements, int totalVariables, int totalOperations) {
//    int newSpace = -1;  // Index for a new variable
//    int leftIndex = 0;  // Index of the left variable
//    int rightIndex = 0; // Index of the right variable
//    string newStr = left + "." + right;  // Create a new string for AND operation
//
//    // Loop to find the variable or an empty space
//    for (int i = 0; i < totalOperations + totalVariables; i++) {
//        if (newStr == vari[i].str) {
//            return;  // If the variable already exists, return
//        }
//        else if (vari[i].str == "") {
//            newSpace = i;  // Find an empty space
//        }
//        else if (vari[i].str == left) {
//            leftIndex = i;  // Find the left variable
//        }
//        else if (vari[i].str == right) {
//            rightIndex = i;  // Find the right variable
//        }
//    }
//
//    // Assign the new string to the variable
//    vari[newSpace].str = newStr;
//
//    // Perform AND operation element-wise
//    for (int i = 0; i < totalElements; i++) {
//        vari[newSpace].arr[i] = vari[leftIndex].arr[i] & vari[rightIndex].arr[i];
//    }
//}
//
//// Function to perform OR operation
//void OR_operation(string left, string right, variable* vari, int totalElements, int totalVariables, int totalOperations) {
//    int newSpace = -1;  // Index for a new variable
//    int leftIndex = 0;  // Index of the left variable
//    int rightIndex = 0; // Index of the right variable
//    string newStr = left + "+" + right;  // Create a new string for OR operation
//
//    // Loop to find the variable or an empty space
//    for (int i = 0; i < totalOperations + totalVariables; i++) {
//        if (newStr == vari[i].str) {
//            return;  // If the variable already exists, return
//        }
//        else if (vari[i].str == "") {
//            newSpace = i;  // Find an empty space
//        }
//        else if (vari[i].str == left) {
//            leftIndex = i;  // Find the left variable
//        }
//        else if (vari[i].str == right) {
//            rightIndex = i;  // Find the right variable
//        }
//    }
//
//    // Assign the new string to the variable
//    vari[newSpace].str = newStr;
//
//    // Perform OR operation element-wise
//    for (int i = 0; i < totalElements; i++) {
//        vari[newSpace].arr[i] = vari[leftIndex].arr[i] | vari[rightIndex].arr[i];
//    }
//}
//
//// Function to perform IMPLIES operation
//void Implies_operation(string left, string right, variable* vari, int totalElements, int totalVariables, int totalOperations) {
//    int newSpace = -1;  // Index for a new variable
//    int leftIndex = 0;  // Index of the left variable
//    int rightIndex = 0; // Index of the right variable
//    string newStr = left + "->" + right;  // Create a new string for IMPLIES operation
//
//    // Loop to find the variable or an empty space
//    for (int i = 0; i < totalOperations + totalVariables; i++) {
//        if (newStr == vari[i].str) {
//            return;  // If the variable already exists, return
//        }
//        else if (vari[i].str == "") {
//            newSpace = i;  // Find an empty space
//        }
//        else if (vari[i].str == left) {
//            leftIndex = i;  // Find the left variable
//        }
//        else if (vari[i].str == right) {
//            rightIndex = i;  // Find the right variable
//        }
//    }
//
//    // Assign the new string to the variable
//    vari[newSpace].str = newStr;
//
//    // Perform IMPLIES operation element-wise
//    for (int i = 0; i < totalElements; i++) {
//        if (vari[leftIndex].arr[i] == 1 && vari[rightIndex].arr[i] == 0) {
//            vari[newSpace].arr[i] = 0;
//        }
//        else {
//            vari[newSpace].arr[i] = 1;
//        }
//    }
//}
//
//// Function to perform BICONDITIONAL operation
//void BIconditional_operation(string left, string right, variable* vari, int totalElements, int totalVariables, int totalOperations) {
//    int newSpace = -1;  // Index for a new variable
//    int leftIndex = 0;  // Index of the left variable
//    int rightIndex = 0; // Index of the right variable
//    string newStr = left + "<->" + right;  // Create a new string for BICONDITIONAL operation
//
//    // Loop to find the variable or an empty space
//    for (int i = 0; i < totalOperations + totalVariables; i++) {
//        if (newStr == vari[i].str) {
//            return;  // If the variable already exists, return
//        }
//        else if (vari[i].str == "") {
//            newSpace = i;  // Find an empty space
//        }
//        else if (vari[i].str == left) {
//            leftIndex = i;  // Find the left variable
//        }
//        else if (vari[i].str == right) {
//            rightIndex = i;  // Find the right variable
//        }
//    }
//
//    // Assign the new string to the variable
//    vari[newSpace].str = newStr;
//
//    // Perform BICONDITIONAL operation element-wise
//    for (int i = 0; i < totalElements; i++) {
//        if (vari[leftIndex].arr[i] == vari[rightIndex].arr[i]) {
//            vari[newSpace].arr[i] = 1;
//        }
//        else {
//            vari[newSpace].arr[i] = 0;
//        }
//    }
//}
//
///*---------------------|Operations|---------------------|*/
//
//
///*---------------------|Global Functions|---------------------|*/
//
//// Function to get the precedence of operators
//int getPrecedence(char op) {
//    if (op == '\'') {
//        return 4; // NOT has the highest precedence
//    }
//    else if (op == '.') {
//        return 3; // AND
//    }
//    else if (op == '+') {
//        return 2; // OR
//    }
//    else if (op == '~') {
//        return 1; // IMPLIES
//    }
//    else if (op == '@') {
//        return 0; // BICONDITIONAL
//    }
//    return -1; // Default for other characters
//}
//
//// Function to check if the parentheses in a string are balanced
//bool isbalanced(string str) {
//    Stack S1;
//    for (char a : str) {
//        if (a == '(' || a == '[' || a == '{') {
//            S1.push(a);
//        }
//        else if (a == ')' || a == ']' || a == '}') {
//            if (S1.isempty()) {
//                return false;
//            }
//            char topChar = S1.getTop();
//            S1.pop();
//            if ((a == ')' && topChar != '(') || (a == ']' && topChar != '[') || (a == '}' && topChar != '{')) {
//                return false;
//            }
//        }
//    }
//    return S1.isempty();
//}
//
//// Function to convert infix expression to postfix expression
//string infixToPostfix(string infixExpression) {
//    string postfixExpression = "";
//    Stack S1;
//
//    for (int i = 0; i < infixExpression.length(); i++) {
//        if ((infixExpression[i] >= 'a' && infixExpression[i] <= 'z') || (infixExpression[i] >= 'A' && infixExpression[i] <= 'Z')) {
//            postfixExpression += infixExpression[i];  // Operand
//        }
//        else if (infixExpression[i] == '(' || infixExpression[i] == '[' || infixExpression[i] == '{') {
//            S1.push(infixExpression[i]);
//        }
//        else if (infixExpression[i] == ')' || infixExpression[i] == ']' || infixExpression[i] == '}') {
//            while (!S1.isempty() && S1.getTop() != '(' && S1.getTop() != '[' && S1.getTop() != '{') {
//                postfixExpression += S1.pop();
//            }
//            S1.pop();
//        }
//        else if (infixExpression[i] == '\'') {
//            postfixExpression += infixExpression[i];
//        }
//        else if (getPrecedence(infixExpression[i]) < getPrecedence(S1.getTop())) {
//            while (getPrecedence(infixExpression[i]) < getPrecedence(S1.getTop())) {
//                postfixExpression += S1.pop();
//            }
//            if (infixExpression[i] == '<' && infixExpression[i + 1] == '-' && infixExpression[i + 2] == '>') {
//                S1.push('@');
//                i += 2;
//            }
//            else if (infixExpression[i] == '-' && infixExpression[i + 1] == '>') {
//                S1.push('~');
//                i++;
//            }
//            else {
//                S1.push(infixExpression[i]);
//            }
//        }
//        else {
//            if (infixExpression[i] == '<' && infixExpression[i + 1] == '-' && infixExpression[i + 2] == '>') {
//                S1.push('@');
//                i += 2;
//            }
//            else if (infixExpression[i] == '-' && infixExpression[i + 1] == '>') {
//                S1.push('~');
//                i++;
//            }
//            else {
//                S1.push(infixExpression[i]);
//            }
//        }
//    }
//
//    while (!S1.isempty()) {
//        postfixExpression += S1.pop();
//    }
//    return postfixExpression;
//}
//
//// Function to count unique variables in a string
//int count_variable(string n) {
//    int i = 0;
//    char arr[52] = {};
//    for (int c = 0; n[c] != '\0'; c++) {
//        if ((n[c] >= 'a' && n[c] <= 'z') || (n[c] >= 'A' && n[c] <= 'Z')) {
//            bool ok = false;
//            for (int j = 0; arr[j] != '\0'; j++) {
//                if (n[c] == arr[j]) {
//                    ok = true;
//                    break;
//                }
//            }
//            if (!ok) {
//                arr[i] = n[c];
//                i++;
//            }
//        }
//    }
//    return i;
//}
//
//// Function to count operations in a string
//int count_operations(string n) {
//    int i = 0;
//    for (int c = 0; n[c] != '\0'; c++) {
//        if (n[c] == '+' || n[c] == '.' || n[c] == 39) {
//            i++;
//        }
//        else if (n[c] == '<' && n[c + 1] == '-' && n[c + 2] == '>') {
//            i++;
//            c += 2;
//        }
//        else if (n[c] == '-' && n[c + 1] == '>') {
//            i++;
//            c++;
//        }
//    }
//    return i;
//}
//
//// Function to initialize variables for the truth table
//variable* initializeVariables(string str, int totalVariables, int totalElements, int totalOperations) {
//    variable* temp = new variable[totalVariables + totalOperations];
//    int* power = new int[totalVariables];
//    int index = 0;
//    int i = 0;
//    char chArr[52] = {};
//    int c = 0;
//
//    // Loop to find and store unique variables
//    while (str[i] != '\0') {
//        char ch = str[i];
//        bool found = false;
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//            bool ok = false;
//            for (int j = 0; chArr[j] != '\0'; j++) {
//                if (ch == chArr[j]) {
//                    ok = true;
//                    break;
//                }
//            }
//            if (!ok) {
//                chArr[c] = ch;
//                c++;
//            }
//        }
//        i++;
//    }
//
//    // Assign variables to temp
//    for (int k = 0; k < c; k++) {
//        temp[k].str = chArr[k];
//    }
//
//    // Calculate power values for variables
//    for (int j = 1; j <= totalVariables; j++) {
//        power[j - 1] = pow(2, totalVariables - j);
//    }
//
//    // Initialize arrays for variables
//    for (int j = 0; j < totalVariables + totalOperations; j++) {
//        temp[j].arr = new int[totalElements];
//    }
//
//    int insert = 1;
//    for (int j = 0; j < totalVariables; j++) {
//        for (int k = 0; k < totalElements; k++) {
//            if (k % power[j] == 0) {
//                insert = (insert + 1) % 2;
//            }
//            temp[j].arr[k] = insert;
//        }
//    }
//
//    return temp;
//}
//
//// Function to calculate the truth table based on the postfix expression
//void calculate(string str, variable* vari, int totalElements, int totalVariables, int totalOperations) {
//    int i = 0;
//    StringStack s2;
//
//    while (str[i] != '\0') {
//        char ch = str[i];
//        string tempS = "";
//        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
//            tempS = ch;
//            s2.Push(tempS);
//        }
//        else {
//            if (ch == '\'') {
//                string TOP = s2.Pop();
//                NOT_operation(TOP, vari, totalElements, totalVariables, totalOperations);
//                TOP += '\'';
//                s2.Push(TOP);
//            }
//            else if (ch == '.') {
//                string Right = s2.Pop();
//                string Left = s2.Pop();
//                AND_operation(Left, Right, vari, totalElements, totalVariables, totalOperations);
//                s2.Push(Left + '.' + Right);
//            }
//            else if (ch == '~') {
//                string Right = s2.Pop();
//                string Left = s2.Pop();
//                Implies_operation(Left, Right, vari, totalElements, totalVariables, totalOperations);
//                s2.Push(Left + "->" + Right);
//            }
//            else if (ch == '@') {
//                string Right = s2.Pop();
//                string Left = s2.Pop();
//                BIconditional_operation(Left, Right, vari, totalElements, totalVariables, totalOperations);
//                s2.Push(Left + "<->" + Right);
//            }
//            else if (ch == '+') {
//                string Right = s2.Pop();
//                string Left = s2.Pop();
//                OR_operation(Left, Right, vari, totalElements, totalVariables, totalOperations);
//                s2.Push(Left + '+' + Right);
//            }
//        }
//        i++;
//    }
//}
//
//// Function to print a line for the UI
//void print_line() {
//    cout << "|";
//    for (int i = 0; i < 154; i++) {
//        cout << "=";
//    }
//    cout << "|" << endl;
//}
//
///*---------------------|Global Functions|---------------------|*/
//
//int main() {
//    char x = '0', z;
//    string str;
//    while (x != 27) {  // Loop until Esc key is pressed
//        system("cls");
//        system("Color F0");
//        print_line();
//        cout << "PRESS 1 TO INPUT THE EXPRESSION " << endl;
//        print_line();
//        cout << "PRESS 2 TO GET THE TRUTH TABLE OF A EXPRESSION" << endl;
//        print_line();
//        cout << "PRESS Esc TO END PROGRAM" << endl;
//        print_line();
//        cout << endl << "PLEASE PRESS 1,2 OR Esc TO USE THE FUNCTIONS ";
//        x = _getch();  // Get user input
//        if (x == '1') {
//            system("cls");
//            system("Color 0C");
//            print_line();
//            cout << "USE ' IN EXPRESSION FOR NOT " << endl;
//            cout << "USE . IN EXPRESSION FOR AND " << endl;
//            cout << "USE + IN EXPRESSION FOR OR " << endl;
//            cout << "USE -> IN EXPRESSION FOR IMPLIES " << endl;
//            cout << "USE <-> IN EXPRESSION FOR BICONDITIONAL " << endl;
//            cout << endl << "OTHERWISE IT WILL BE IGNORED " << endl;
//            print_line();
//            cout << "EXPRESSION IS ONLY SUPPORTIVE TO AND,OR,NOT,IMPLIES AND BIDIRECTIONAL" << endl;
//            cout << endl << "PLEASE INPUT THE EXPRESSION:  ";
//            cin >> str;  // Get the infix expression from the user
//            if (!isbalanced(str)) {
//                cout << endl << "GIVEN INPUT EXPRESSION IS NOT BALANCED. SO, NO OPERATIONS WILL BE PERFORMED" << endl;
//            }
//            else {
//                cout << endl << "EXPRESSION IS BALANCED. SO, IT IS SUCCESSFULLY TAKEN AS INPUT." << endl << endl;
//            }
//            print_line();
//            cout << endl << "PLEASE PRESS ANY KEY TO CONTINUE ";
//            z = _getch();  // Wait for user input to continue
//        }
//        if (x == '2') {
//            system("cls");
//            system("Color 4F");
//            if (!isbalanced(str)) {
//                print_line();
//                cout << endl << "GIVEN INPUT EXPRESSION IS NOT BALANCED. SO, NO OPERATIONS WILL BE PERFORMED" << endl;
//                cout << endl << "NO TRUTH TABLE WILL BE MADE" << endl;
//                print_line();
//            }
//            else {
//                string convertedStr = infixToPostfix(str);
//                int totalOperations = count_operations(str);
//                int totalVariables = count_variable(str);
//                int totalElements = pow(2, totalVariables);
//
//                variable* AllOperations = initializeVariables(str, totalVariables, totalElements, totalOperations);
//                calculate(convertedStr, AllOperations, totalElements, totalVariables, totalOperations);
//
//                print_line();
//                cout << "TRUTH TABLE : " << endl;
//                print_line();
//                cout << endl;
//
//                // Print variable names
//                for (int j = 0; j < totalVariables; j++) {
//                    cout << AllOperations[j].str << "    " << "||" << "    ";
//                }
//                // Print operation results
//                for (int j = totalOperations + totalVariables - 1; j >= totalVariables; j--) {
//                    cout << AllOperations[j].str << "   " << "||" << "  ";
//                }
//                cout << endl;
//                // Print table separators
//                for (int j = 0; j < totalOperations + totalVariables; j++) {
//                    cout << "_____________";
//                }
//                cout << endl;
//                for (int j = 0; j < totalOperations + totalVariables; j++) {
//                    cout << ".............";
//                }
//                cout << endl;
//
//                cout << endl;
//
//                // Print truth table values
//                for (int i = 0; i < totalElements; i++) {
//                    for (int j = 0; j < totalVariables; j++) {
//                        if (AllOperations[j].arr[i] == 1) {
//                            cout << "T" << "    " << "||" << "    ";
//                        }
//                        else {
//                            cout << "F" << "    " << "||" << "    ";
//                        }
//                    }
//                    for (int j = totalOperations + totalVariables - 1; j >= totalVariables; j--) {
//                        if (AllOperations[j].arr[i] == 1) {
//                            cout << "T" << "    " << "||" << "     ";
//                        }
//                        else {
//                            cout << "F" << "    " << "||" << "     ";
//                        }
//                    }
//                    cout << endl;
//                    for (int j = 0; j < totalOperations + totalVariables; j++) {
//                        cout << "___________";
//                    }
//                    cout << endl;
//                }
//                cout << endl << endl << endl;
//                print_line();
//            }
//
//            cout << endl << "PLEASE PRESS ANY KEY TO CONTINUE ";
//            z = _getch();  // Wait for user input to continue
//        }
//    }
//}
