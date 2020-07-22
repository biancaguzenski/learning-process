#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head;


void insertElementBeggining(int x){
    
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

struct Node insertElementEnd(int x){
    
    struct Node *temp = head;
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = x;
    temp1->next = NULL;
    
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = temp1;
    return struct Node head;
}

void deleteElement(){

}

void insertElementEnd(){

}

void printList(){
    struct Node *temp = head; // local variable = because we dont want to modify headnode
    printf("List: ");
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
}

int main(){
    head = NULL;

}

printf("How many numbers in this list?\n");
    int n, x, i, m;
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        printf("Enter a value to put at the end; ");
        scanf("%d", &m);
        insertElementEnd(m);
        printList();
    }
//for (i = 0; i < n; i++){
    //    printf("Enter value: ");
    //    scanf("%d", &x);
    //    insertElementBeggining(x);
    //    printList();
    //}