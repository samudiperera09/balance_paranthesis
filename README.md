# balance_paranthesis
**Description:**
This C program checks whether a given expression has balanced parentheses. It uses a stack data structure to keep track of opening parentheses and matches them with the corresponding closing parentheses.

The program defines a stack of integers with a maximum size of 10 using the `stack` array and initializes the top of the stack (`top`) to -1. It also declares a few other variables to help with the checking process.

The `push` function is used to insert an element into the stack. It checks if the stack is already full and displays an error message if it is. Otherwise, it increments the top variable and inserts the given character into the stack.

The `pop` function is used to remove and return the top element from the stack. It checks if the stack is empty and displays an error message if it is. Otherwise, it returns the top element and decrements the top variable.

In the `main` function, the user is prompted to enter an expression. The expression is stored in the `exp` character array using the `gets` function (note: `gets` is generally discouraged due to security vulnerabilities; it is used here for simplicity).

The program then iterates through each character of the expression. If an opening parenthesis ('(', '{', or '[') is encountered, it is pushed onto the stack using the `push` function. If a closing parenthesis (')', '}', or ']') is encountered, the program checks if the stack is empty. If it is, the flag variable is set to 0, indicating an invalid expression. Otherwise, the top element is popped from the stack, and if it doesn't match the current closing parenthesis, the flag variable is set to 0.

After iterating through the entire expression, the program checks if there are any remaining elements in the stack. If there are, the flag variable is set to 0.

Finally, the program checks the value of the flag variable. If it is 1, the expression is considered valid, and a corresponding message is displayed. Otherwise, an invalid expression message is shown.

