#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

// Insert at Front
void insertFront(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = front;

    if(front == NULL)
        rear = newNode;
    else
        front->prev = newNode;

    front = newNode;
    printf("Inserted at front: %d\n", value);
}

// Insert at Rear
void insertRear(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = rear;

    if(rear == NULL)
        front = newNode;
    else
        rear->next = newNode;

    rear = newNode;
    printf("Inserted at rear: %d\n", value);
}

// Delete from Front
void deleteFront() {
    if(front == NULL) {
        printf("Deque is Empty\n");
        return;
    }

    struct Node *temp = front;
    printf("Deleted from front: %d\n", front->data);

    front = front->next;

    if(front == NULL)
        rear = NULL;
    else
        front->prev = NULL;

    free(temp);
}

// Delete from Rear
void deleteRear() {
    if(rear == NULL) {
        printf("Deque is Empty\n");
        return;
    }

    struct Node *temp = rear;
    printf("Deleted from rear: %d\n", rear->data);

    rear = rear->prev;

    if(rear == NULL)
        front = NULL;
    else
        rear->next = NULL;

    free(temp);
}

// Display Deque
void display() {
    if(front == NULL) {
        printf("Deque is Empty\n");
        return;
    }

    struct Node *temp = front;
    printf("Deque elements: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main Function
int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();

    deleteFront();
    deleteRear();
    display();

    return 0;
}
