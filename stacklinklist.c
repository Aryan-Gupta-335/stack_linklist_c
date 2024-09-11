#include <stdio.h>
#include <stdlib.h>

struct Node* pushArray(struct Node* top, int value);
struct Node* popArray(struct Node* top);
void peepArray(struct Node* top);
void displayArray(struct Node* top);

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

int main() {
    int ch;
    int ele;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Push to linkedlist Stack\n");
        printf("2. Pop from linkedlist Stack\n");
        printf("3. Display linkedlist Stack\n");
        printf("4. Peep to linkedlist Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &ele);
                top = pushArray(top, ele);
                break;
            case 2:
                top = popArray(top);
                break;
            case 3:
                displayArray(top);
                break;
            case 4:
                peepArray(top);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

struct Node* pushArray(struct Node* top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack overflow\n");
        return top;}
    newNode->data = value;
    newNode->next = top;  
    top = newNode;   
    printf("%d pushed onto the stack\n", value);
    return top;
}

struct Node* popArray(struct Node* top) {
    if (top == NULL) {
        printf("Stack underflow!\n");
        return top;
    } else {
        struct Node* temp = top;
        int val = top->data;  
        top = top->next;    
        free(temp);     
        printf("%d popped from the stack\n", val);
        return top;
    }
}

void peepArray(struct Node* top) {
    if (top == NULL) {
        printf("Stack underflow!\n");
    } else {
        printf("Top Element is: %d\n", top->data);
    }
}

void displayArray(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct Node* ptr = top;
        printf("Stack elements are:\n");
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}