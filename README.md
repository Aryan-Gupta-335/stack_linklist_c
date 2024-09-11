# stack_linklist_c
This is a C program that implements a stack using a linked list. The stack operations are:

1. Push: adds an element to the top of the stack
2. Pop: removes the top element from the stack
3. Peep: displays the top element without removing it
4. Display: displays all elements in the stack
5. Exit: exits the program

The program uses a struct Node to represent a node in the linked list, with an int data field and a next pointer. The top variable keeps track of the current top node of the stack.

The program presents a menu-driven interface for the user to interact with the stack. Each operation is implemented in a separate function:

- pushArray: adds an element to the top of the stack
- popArray: removes the top element from the stack
- peepArray: displays the top element without removing it
- displayArray: displays all elements in the stack

Note that this program has some issues, such as:

- No error handling for invalid input
- No bounds checking for array indices (not applicable in this case since it's a linked list)
- Memory leaks if the program exits without popping all elements

This program can be enhanced by adding more features, such as:

- Error handling for overflow and underflow conditions
- Additional stack operations (e.g., search, insert, delete)
- Dynamic memory management for the linked list

Overall, this program demonstrates basic stack operations using a linked list in C.
