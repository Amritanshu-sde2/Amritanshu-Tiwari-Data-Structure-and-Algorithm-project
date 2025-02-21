// Data structure minor project 3 semester 
#include <stdio.h> 
#include <stdlib.h> 
 
#define TABLE_SIZE 10 // Size of the hash table 
 
#define MAX_VERTICES 10 // Define the maximum number of vertices for graph 
 
#define MAX_HEAP_SIZE 100 // Define the maximum size of the heap 
 
// Node structure for Linked List and its variants 
typedef struct Node 
{ 
    int data; 
    struct Node *next; 
} Node; 
 
// Node structure for Doubly Linked List 
typedef struct DNode 
{ 
    int data; 
    struct DNode *next; 
    struct DNode *prev  ; 
} DNode; 
 
// Node structure for Tree 
typedef struct TreeNode 
{ 
    int data; 
    struct TreeNode *left; 
    struct TreeNode *right; 
    int height; // For AVL Tree 
} TreeNode; 
 
// Queue structure for Queue operations 
typedef struct Queue 
{ 
    int items[100]; 
    int front; 
    int rear; 
} Queue; 
 
// Hash Table structure 
typedef struct HashNode 
{ 
    int data; 
    struct HashNode *next; 
} HashNode; 
 
typedef struct HashTable 
{ 
    HashNode *table[TABLE_SIZE]; 
} HashTable; 
 
// Graph structure 
typedef struct Graph 
{ 
    int numVertices; 
    Node *adjLists[MAX_VERTICES]; 
} Graph; 
 
// Heap structure 
typedef struct Heap 
{ 
    int arr[MAX_HEAP_SIZE]; 
    int size; 
} Heap; 
 
// Function prototypes 
void arrayOperations(); 
void linkedListOperations(); 
void circularLinkedListOperations(); 
void doublyLinkedListOperations(); 
void stackOperations(); 
void queueOperations(); 
void circularQueueOperations(); 
void dequeOperations(); 
void priorityQueueOperations(); 
void treeOperations(); 
void binarySearchTreeOperations(); 
void avlTreeOperations(); 
void matrixOperations(); 
void hashTableOperations(); 
void graphOperations(); 
void heapOperations(); 
void sortingOperations(); 
 
// AVL Tree functions 
TreeNode *insert(TreeNode *node, int data); 
TreeNode *deleteNode(TreeNode *root, int data); 
TreeNode *search(TreeNode *root, int data); 
int height(TreeNode *node); 
int getBalance(TreeNode *node); 
TreeNode *rightRotate(TreeNode *y); 
TreeNode *leftRotate(TreeNode *x); 
void preorder(TreeNode *node); 
void inorder(TreeNode *node); 
void postorder(TreeNode *node); 
 
// Queue functions 
Queue *createQueue(); 
int isFull(Queue *q); 
int isEmpty(Queue *q); 
void enqueue(Queue *q, int value); 
int dequeue(Queue *q); 
void displayQueue(Queue *q); 
 
// Stack functions 
void push(int stack[], int *top, int value); 
int pop(int stack[], int *top); 
int peek(int stack[], int top); 
void displayStack(int stack[], int top); 
 
// Matrix functions 
void addMatrices(int a[10][10], int b[10][10], int result[10][10], int rows, int cols); 
void displayMatrix(int matrix[10][10], int rows, int cols); 
void insertElement(int matrix[10][10], int *rows, int *cols); 
void deleteElement(int matrix[10][10], int *rows, int *cols); 
void searchElement(int matrix[10][10], int rows, int cols, int element); 
 
// Hash Table functions 
HashTable *createHashTable(); 
int hashFunction(int key); 
void insertHash(HashTable *ht, int key); 
void deleteHash(HashTable *ht, int key); 
int searchHash(HashTable *ht, int key); 
void displayHashTable(HashTable *ht); 
 
// Graph functions 
Graph *createGraph(int vertices); 
void addEdge(Graph *graph, int src, int dest); 
void removeEdge(Graph *graph, int src, int dest); 
void displayGraph(Graph *graph); 
int searchGraph(Graph *graph, int vertex); 
 
// Heap functions 
void insertHeap(Heap *heap, int value); 
int deleteHeap(Heap *heap); 
void displayHeap(Heap *heap); 
void heapSort(int arr[], int n); 
void heapify(int arr[], int n, int i); 
 
// Sorting functions 
void bubbleSort(int arr[], int n); 
void selectionSort(int arr[], int n); 
void insertionSort(int arr[], int n); 
void quickSort(int arr[], int low, int high); 
int partition(int arr[], int low, int high); 
void sortingOperations(); 
void displayArray(int arr[], int n); 
 
// Main menu 
int main() 
{ 
    int choice; 
    do 
    { 
        printf("===================================================\n"); 
        printf("||    UNITY IN DATA STRUCTURES AND ALGORITHMS    ||\n"); 
        printf("===================================================\n"); 
        printf("\n"); 
        printf("====================================================\n"); 
        printf("||\t\tDATA STRUCTURE & ALGORITHMS       ||\n"); 
        printf("||\t1. Array data structure                   ||\n"); 
        printf("||\t2. Two Dimensional Array data structure   ||\n"); 
        printf("||\t3. Linked List data structure             ||\n"); 
        printf("||\t4. Circular Linked List data structure    ||\n"); 
        printf("||\t5. Doubly Linked List data structure      ||\n"); 
        printf("||\t6. Stack data structure                   ||\n"); 
        printf("||\t7. Queue data structure                   ||\n"); 
        printf("||\t8. Circular Queue data structure          ||\n"); 
        printf("||\t9. Double Ended Queue data structure      ||\n"); 
        printf("||\t10. Priority Queue data structure         ||\n"); 
        printf("||\t11. Tree data structure                   ||\n"); 
        printf("||\t12. Binary Search Tree data structure     ||\n"); 
        printf("||\t13. AVL Tree data structure               ||\n"); 
        printf("||\t14. Hashing data structure                ||\n"); 
        printf("||\t15. Graph data structure                  ||\n"); 
        printf("||\t16. Heap data structure                   ||\n"); 
        printf("||\t17. Sorting data structure                ||\n"); 
        printf("||\t18. Exit                                  ||\n"); 
        printf("====================================================\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            arrayOperations(); 
            break; 
        case 2: 
            matrixOperations(); 
            break; 
        case 3: 
            linkedListOperations(); 
            break; 
        case 4: 
            circularLinkedListOperations(); 
            break; 
        case 5: 
            doublyLinkedListOperations(); 
            break; 
        case 6: 
            stackOperations(); 
            break; 
        case 7: 
            queueOperations(); 
            break; 
        case 8: 
            circularQueueOperations(); 
            break; 
        case 9: 
            dequeOperations(); 
            break; 
        case 10: 
            priorityQueueOperations(); 
            break; 
        case 11: 
            treeOperations(); 
            break; 
        case 12: 
            binarySearchTreeOperations(); 
            break; 
        case 13: 
            avlTreeOperations(); 
            break; 
        case 14: 
            hashTableOperations(); 
            break; 
        case 15: 
            graphOperations(); 
            break; 
        case 16: 
            heapOperations(); 
            break; 
        case 17: 
            sortingOperations(); 
            break; 
        case 18: 
            printf("Exiting...\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 18); 
    return 0; 
} 
 
// Array Operations 
void arrayOperations() 
{ 
    int arr[100], n, choice, element, i; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    printf("Enter elements:\n"); 
    for (i = 0; i < n; i++) 
    { 
        scanf("%d", &arr[i]); 
    } 
 
    // Display the initial array 
    printf("Initial Array: "); 
    displayArray(arr, n); 
 
    do 
    { 
        printf("**********************************\n"); 
        printf("*\tArray Operations Menu:   *\n"); 
        printf("*\t1. Insert Element        *\n"); 
        printf("*\t2. Delete Element        *\n"); 
        printf("*\t3. Search Element        *\n"); 
        printf("*\t4. Sort Array            *\n"); 
        printf("*\t5. Display Array         *\n"); 
        printf("*\t6. Back to Main Menu     *\n"); 
        printf("**********************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter element to insert: "); 
            scanf("%d", &element); 
            arr[n++] = element; // Insert at the end 
            printf("Element inserted.\n"); 
            break; 
        case 2: 
            printf("Enter element to delete: "); 
            scanf("%d", &element); 
            for (i = 0; i < n; i++) 
            { 
                if (arr[i] == element) 
                { 
                    for (int j = i; j < n - 1; j++) 
                    { 
                        arr[j] = arr[j + 1]; // Shift elements left 
                    } 
                    n--; // Reduce size 
                    printf("Element deleted.\n"); 
                    break; 
                } 
            } 
            break; 
        case 3: 
            printf("Enter element to search: "); 
            scanf("%d", &element); 
            for (i = 0; i < n; i++) 
            { 
                if (arr[i] == element) 
                { 
                    printf("Element found at index %d.\n", i); 
                    break; 
                } 
            } 
            if (i == n) 
            { 
                printf("Element not found.\n"); 
            } 
            break; 
        case 4: 
            // Simple bubble sort 
            for (i = 0; i < n - 1; i++) 
            { 
                for (int j = 0; j < n - i - 1; j++) 
                { 
                    if (arr[j] > arr[j + 1]) 
                    { 
                        int temp = arr[j]; 
                        arr[j] = arr[j + 1]; 
                        arr[j + 1] = temp; 
                    } 
                } 
            } 
            printf("Array sorted.\n"); 
            break; 
        case 5: 
            displayArray(arr, n); // Display current array 
            break; 
        case 6: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 6); 
} 
 
// Matrix Operations 
void matrixOperations() 
{ 
    int a[10][10], b[10][10], result[10][10]; 
    int rows, cols, choice; 
 
    printf("Enter number of rows and columns for matrices: "); 
    scanf("%d %d", &rows, &cols); 
 
    printf("Enter elements of first matrix:\n"); 
    for (int i = 0; i < rows; i++) 
    { 
        for (int j = 0; j < cols; j++) 
        { 
            scanf("%d", &a[i][j]); 
        } 
    } 
 
    printf("Enter elements of second matrix:\n"); 
    for (int i = 0; i < rows; i++) 
    { 
        for (int j = 0; j < cols; j++) 
        { 
            scanf("%d", &b[i][j]); 
        } 
    } 
 
    do 
    { 
        printf("***********************************\n"); 
        printf("*\tMatrix Operations Menu:   *\n"); 
        printf("*\t1. Add Matrices           *\n"); 
        printf("*\t2. Display Matrices       *\n"); 
        printf("*\t3. Insert Element         *\n"); 
        printf("*\t4. Delete Element         *\n"); 
        printf("*\t5. Search Element         *\n"); 
        printf("*\t6. Back to Main Menu      *\n"); 
        printf("***********************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            addMatrices(a, b, result, rows, cols); 
            printf("Matrices added successfully.\n"); 
            break; 
        case 2: 
            printf("First Matrix:\n"); 
            displayMatrix(a, rows, cols); 
            printf("Second Matrix:\n"); 
            displayMatrix(b, rows, cols); 
            printf("Resultant Matrix:\n"); 
            displayMatrix(result, rows, cols); 
            break; 
        case 3: 
            insertElement(a, &rows, &cols); 
            break; 
        case 4: 
            deleteElement(a, &rows, &cols); 
            break; 
        case 5: 
            printf("Enter element to search: "); 
            int element; 
            scanf("%d", &element); 
            searchElement(a, rows, cols, element); 
            break; 
        case 6: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 6); 
} 
 
void addMatrices(int a[10][10], int b[10][10], int result[10][10], int rows, int cols) 
{ 
    for (int i = 0; i < rows; i++) 
    { 
        for (int j = 0; j < cols; j++) 
        { 
            result[i][j] = a[i][j] + b[i][j]; 
        } 
    } 
} 
 
void displayMatrix(int matrix[10][10], int rows, int cols) 
{ 
    for (int i = 0; i < rows; i++) 
    { 
        for (int j = 0; j < cols; j++) 
        { 
            printf("%d ", matrix[i][j]); 
        } 
        printf("\n"); 
    } 
} 
 
void insertElement(int matrix[10][10], int *rows, int *cols) 
{ 
    if (*rows < 10 && *cols < 10) 
    { 
        int row, col, value; 
        printf("Enter row and column to insert (0-based index): "); 
        scanf("%d %d", &row, &col); 
        if (row < *rows && col < *cols) 
        { 
            printf("Enter value to insert: "); 
            scanf("%d", &value); 
            matrix[row][col] = value; 
            printf("Element inserted.\n"); 
        } 
        else 
        { 
            printf("Invalid position!\n"); 
        } 
    } 
    else 
    { 
        printf("Matrix is full!\n"); 
    } 
} 
 
void deleteElement(int matrix[10][10], int *rows, int *cols) 
{ 
 
    int row, col; 
    printf("Enter row and column to delete (0-based index): "); 
    scanf("%d %d", &row, &col); 
    if (row < *rows && col < *cols) 
    { 
        matrix[row][col] = 0; // Assuming deletion sets the value to 0 
        printf("Element deleted.\n"); 
    } 
    else 
    { 
        printf("Invalid position!\n"); 
    } 
} 
 
void searchElement(int matrix[10][10], int rows, int cols, int element) 
{ 
    for (int i = 0; i < rows; i++) 
    { 
        for (int j = 0; j < cols; j++) 
        { 
            if (matrix[i][j] == element) 
            { 
                printf("Element %d found at position (%d, %d).\n", element, i, j); 
                return; 
            } 
        } 
    } 
    printf("Element %d not found in the matrix.\n", element); 
} 
 
// Linked List Operations 
void linkedListOperations() 
{ 
    Node *head = NULL; 
    int choice, data; 
    do 
    { 
        printf("*******************************************\n"); 
        printf("*\tLinked List Operations Menu:      *\n"); 
        printf("*\t1. Insert at Beginning            *\n"); 
        printf("*\t2. Insert at End                  *\n"); 
        printf("*\t3. Delete Node                    *\n"); 
        printf("*\t4. Display List                   *\n"); 
        printf("*\t5. Search Node                    *\n"); 
        printf("*\t6. Back to Main Menu              *\n"); 
        printf("*******************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter data to insert at beginning: "); 
            scanf("%d", &data); 
            Node *newNode = (Node *)malloc(sizeof(Node)); 
            newNode->data = data; 
            newNode->next = head; 
            head = newNode; 
            printf("Node inserted at beginning.\n"); 
            break; 
        case 2: 
            printf("Enter data to insert at end: "); 
            scanf("%d", &data); 
            Node *temp = head; 
            Node *newEndNode = (Node *)malloc(sizeof(Node)); 
            newEndNode->data = data; 
            newEndNode->next = NULL; 
            if (head == NULL) 
            { 
                head = newEndNode; 
            } 
            else 
            { 
                while (temp->next != NULL) 
                { 
                    temp = temp->next; 
                } 
                temp->next = newEndNode; 
            } 
            printf("Node inserted at end.\n"); 
            break; 
        case 3: 
            printf("Enter data to delete: "); 
            scanf("%d", &data); 
            Node *current = head; 
            Node *previous = NULL; 
            while (current != NULL && current->data != data) 
            { 
                previous = current; 
                current = current->next; 
            } 
            if (current == NULL) 
            { 
                printf("Node not found.\n"); 
            } 
            else 
            { 
                if (previous == NULL) 
                { 
                    head = current->next; // Node to delete is the head 
                } 
                else 
                { 
                    previous->next = current->next; // Bypass the node to delete 
                } 
                free(current); 
                printf("Node deleted.\n"); 
            } 
            break; 
        case 4: 
            printf("Linked List: "); 
 
            Node *displayNode = head; 
            while (displayNode != NULL) 
            { 
                printf("%d -> ", displayNode->data); 
                displayNode = displayNode->next; 
            } 
            printf("NULL\n"); 
            break; 
        case 5: 
            printf("Enter data to search: "); 
            scanf("%d", &data); 
            current = head; 
            while (current != NULL) 
            { 
                if (current->data == data) 
                { 
                    printf("Node found with data: %d\n", data); 
                    break; 
                } 
                current = current->next; 
            } 
            if (current == NULL) 
            { 
                printf("Node not found.\n"); 
            } 
            break; 
        case 6: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 6); 
} 
 
// Circular Linked List Operations 
void circularLinkedListOperations() 
{ 
    Node *head = NULL; 
    Node *tail = NULL; 
    int choice, data; 
    do 
    { 
 
        printf("*******************************************************\n"); 
        printf("*\tCircular Linked List Operations Menu:         *\n"); 
        printf("*\t1. Insert at Beginning                        *\n"); 
        printf("*\t2. Insert at End                              *\n"); 
        printf("*\t3. Delete Node                                *\n"); 
        printf("*\t4. Display List                               *\n"); 
        printf("*\t5. Search Node                                *\n"); 
        printf("*\t6. Back to Main Menu                          *\n"); 
        printf("*******************************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter data to insert at beginning: "); 
            scanf("%d", &data); 
            Node *newNode = (Node *)malloc(sizeof(Node)); 
            newNode->data = data; 
            if (head == NULL) 
            { 
                head = newNode; 
                tail = newNode; 
                newNode->next = head; // Point to itself 
            } 
            else 
            { 
                newNode->next = head; 
                tail->next = newNode; // Update tail's next 
                head = newNode;       // Update head 
            } 
            printf("Node inserted at beginning.\n"); 
            break; 
        case 2: 
            printf("Enter data to insert at end: "); 
            scanf("%d", &data); 
            Node *newEndNode = (Node *)malloc(sizeof(Node)); 
            newEndNode->data = data; 
            if (head == NULL) 
            { 
                head = newEndNode; 
                tail = newEndNode; 
                newEndNode->next = head; // Point to itself 
            } 
            else 
            { 
                tail->next = newEndNode; 
                newEndNode->next = head; // Point to head 
                tail = newEndNode;       // Update tail 
            } 
            printf("Node inserted at end.\n"); 
            break; 
        case 3: 
            printf("Enter data to delete: "); 
            scanf("%d", &data); 
            if (head == NULL) 
            { 
                printf("List is empty.\n"); 
                break; 
            } 
            Node *current = head; 
            Node *previous = tail; 
            while (current->data != data) 
            { 
                previous = current; 
                current = current->next; 
                if (current == head) 
                { 
                    printf("Node not found.\n"); 
                    break; 
                } 
            } 
            if (current->data == data) 
            { 
                if (current == head) 
                { 
                    if (head == tail) 
                    { 
                        free(head); 
                        head = NULL; 
                        tail = NULL; 
                    } 
                    else 
                    { 
                        tail->next = head->next; // Update tail's next 
                        Node *temp = head; 
                        head = head->next; // Update head 
                        free(temp); 
                    } 
                } 
                else 
                { 
                    previous->next = current->next; // Bypass the node to delete 
                    free(current); 
                } 
                printf("Node deleted.\n"); 
            } 
            break; 
        case 4: 
            if (head == NULL) 
            { 
                printf("Circular Linked List is empty.\n"); 
            } 
            else 
            { 
                printf("Circular Linked List: "); 
                Node *displayNode = head; 
                do 
                { 
                    printf("%d -> ", displayNode->data); 
                    displayNode = displayNode->next; 
                } while (displayNode != head); 
                printf("(back to head)\n"); 
            } 
            break; 
        case 5: 
            printf("Enter data to search: "); 
            scanf("%d", &data); 
            if (head == NULL) 
            { 
                printf("List is empty.\n"); 
                break; 
            } 
            current = head; 
            do 
            { 
                if (current->data == data) 
                { 
                    printf("Node found with data: %d \n", data); 
                    break; 
                } 
                current = current->next; 
            } while (current != head); 
            if (current == head) 
            { 
                printf("Node not found.\n"); 
            } 
            break; 
        case 6: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 6); 
} 
 
// Doubly Linked List Operations 
void doublyLinkedListOperations() 
{ 
    DNode *head = NULL; 
    int choice, data; 
    do 
    { 
        printf("**************************************************\n"); 
        printf("*\tDoubly Linked List Operations Menu:      *\n"); 
        printf("*\t1. Insert at Beginning                   *\n"); 
        printf("*\t2. Insert at End                         *\n"); 
        printf("*\t3. Delete Node                           *\n"); 
        printf("*\t4. Display List                          *\n"); 
        printf("*\t5. Search Node                           *\n"); 
        printf("*\t6. Back to Main Menu                     *\n"); 
        printf("**************************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter data to insert at beginning: "); 
            scanf("%d", &data); 
            DNode *newNode = (DNode *)malloc(sizeof(DNode)); 
            newNode->data = data; 
            newNode->next = head; 
            newNode->prev = NULL; 
            if (head != NULL) 
            { 
                head->prev = newNode; 
            } 
            head = newNode; 
            printf("Node inserted at beginning.\n"); 
            break; 
        case 2: 
            printf("Enter data to insert at end: "); 
            scanf("%d", &data); 
            DNode *newEndNode = (DNode *)malloc(sizeof(DNode)); 
            newEndNode->data = data; 
            newEndNode->next = NULL; 
            if (head == NULL) 
            { 
                head = newEndNode; 
                newEndNode->prev = NULL; 
            } 
            else 
            { 
                DNode *temp = head; 
                while (temp->next != NULL) 
                { 
                    temp = temp->next; 
                } 
                temp->next = newEndNode; 
                newEndNode->prev = temp; 
            } 
            printf("Node inserted at end.\n"); 
            break; 
        case 3: 
            printf("Enter data to delete: "); 
            scanf("%d", &data); 
            DNode *current = head; 
            while (current != NULL) 
            { 
                if (current->data == data) 
                { 
                    if (current->prev != NULL) 
                    { 
                        current->prev->next = current->next; 
                    } 
                    else 
                    { 
                        head = current->next; // Node to delete is the head 
                    } 
                    if (current->next != NULL) 
                    { 
                        current->next->prev = current->prev; 
                    } 
                    free(current); 
                    printf("Node deleted.\n"); 
                    break; 
                } 
                current = current->next; 
            } 
            if (current == NULL) 
            { 
                printf("Node not found.\n"); 
            } 
            break; 
        case 4: 
            printf("Doubly Linked List: "); 
            DNode *displayNode = head; 
            while (displayNode != NULL) 
            { 
                printf("%d <-> ", displayNode->data); 
                displayNode = displayNode->next; 
            } 
            printf("NULL\n"); 
            break; 
        case 5: 
            printf("Enter data to search: "); 
            scanf("%d", &data); 
            current = head; 
            while (current != NULL) 
            { 
                if (current->data == data) 
                { 
                    printf("Node found with data: %d\n", data); 
                    break; 
                } 
                current = current->next; 
            } 
            if (current == NULL) 
            { 
                printf("Node not found.\n"); 
            } 
            break; 
        case 6: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 6); 
} 
 
// Stack Operations 
void stackOperations() 
{ 
    int stack[100], top = -1, choice, data; 
    do 
    { 
        printf("*******************************************\n"); 
        printf("*\tStack Operations Menu:            *\n"); 
        printf("*\t1. Push                           *\n"); 
        printf("*\t2. Pop                            *\n"); 
        printf("*\t3. Peek                           *\n"); 
        printf("*\t4. Display Stack                  *\n"); 
        printf("*\t5. Back to Main Menu              *\n"); 
        printf("*******************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            if (top == 99) 
            { 
                printf("Stack Overflow!\n"); 
            } 
            else 
            { 
                printf("Enter data to push: "); 
                scanf("%d", &data); 
                stack[++top] = data; 
                printf("Data pushed onto stack.\n"); 
            } 
            break; 
        case 2: 
            if (top == -1) 
            { 
                printf("Stack Underflow!\n"); 
            } 
            else 
            { 
                printf("Popped data: %d\n", stack[top--]); 
            } 
            break; 
        case 3: 
            if (top == -1) 
            { 
                printf("Stack is empty.\n"); 
            } 
            else 
            { 
                printf("Top element: %d\n", stack[top]); 
            } 
            break; 
        case 4: 
            if (top == -1) 
            { 
                printf("Stack is empty.\n"); 
            } 
            else 
            { 
                printf("Stack: "); 
                for (int i = top; i >= 0; i--) 
                { 
                    printf("%d ", stack[i]); 
                } 
                printf("\n"); 
            } 
            break; 
        case 5: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 5); 
} 
 
// Queue Operations 
void queueOperations() 
{ 
    Queue *q = createQueue(); 
    int choice, data; 
    do 
    { 
        printf("*******************************************\n"); 
        printf("*\tQueue Operations Menu:            *\n"); 
        printf("*\t1. Enqueue                        *\n"); 
        printf("*\t2. Dequeue                        *\n"); 
        printf("*\t3. Display Queue                  *\n"); 
        printf("*\t4. Back to Main Menu              *\n"); 
        printf("*******************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter data to enqueue: "); 
            scanf("%d", &data); 
            enqueue(q, data); 
            break; 
        case 2: 
            data = dequeue(q); 
            if (data != -1) 
            { 
                printf("Dequeued data: %d\n", data); 
            } 
            break; 
        case 3: 
            displayQueue(q); 
            break; 
        case 4: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 4); 
} 
 
// Circular Queue Operations 
void circularQueueOperations() 
{ 
    int queue[100], front = -1, rear = -1, choice, data; 
    do 
    { 
        printf("***************************************************\n"); 
        printf("*\tCircular Queue Operations Menu:           *\n"); 
        printf("*\t1. Enqueue                                *\n"); 
        printf("*\t2. Dequeue                                *\n"); 
        printf("*\t3. Display Queue                          *\n"); 
        printf("*\t4. Back to Main Menu                      *\n"); 
        printf("***************************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            if ((rear + 1) % 100 == front) 
            { 
                printf("Queue Overflow!\n"); 
            } 
            else 
            { 
                printf("Enter data to enqueue: "); 
                scanf("%d", &data); 
                if (front == -1) 
                { 
                    front = 0; // First element 
                } 
                rear = (rear + 1) % 100; 
                queue[rear] = data; 
                printf("Data enqueued.\n"); 
            } 
            break; 
        case 2: 
            if (front == -1) 
            { 
                printf("Queue Underflow!\n"); 
            } 
            else 
            { 
                printf("Dequeued data: %d\n", queue[front]); 
                if (front == rear) 
                { 
                    front = rear = -1; // Queue is empty 
                } 
                else 
                { 
                    front = (front + 1) % 100; 
                } 
            } 
            break; 
        case 3: 
            if (front == -1) 
            { 
                printf("Queue is empty.\n"); 
            } 
            else 
            { 
                printf("Queue: "); 
                int i = front; 
                while (1) 
                { 
                    printf("%d ", queue[i]); 
                    if (i == rear) 
                        break; 
                    i = (i + 1) % 100; 
                } 
                printf("\n"); 
            } 
            break; 
        case 4: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 4); 
} 
 
// Double Ended Queue Operations 
void dequeOperations() 
{ 
    int deque[100], front = -1, rear = -1, choice, data; 
    do 
    { 
        printf("*********************************************************\n"); 
        printf("*\tDouble Ended Queue Operations Menu:             *\n"); 
        printf("*\t1. Insert at Front                              *\n"); 
        printf("*\t2. Insert at Rear                               *\n"); 
        printf("*\t3. Delete from Front                            *\n"); 
        printf("*\t4. Delete from Rear                             *\n"); 
        printf("*\t5. Display Deque                                *\n"); 
        printf("*\t6. Back to Main Menu                            *\n"); 
        printf("*********************************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            if ((front == 0 && rear == 99) || (front == rear + 1)) 
            { 
                printf("Deque Overflow!\n"); 
            } 
            else 
            { 
                printf("Enter data to insert at front: "); 
                scanf("%d", &data); 
                if (front == -1) 
                { 
                    front = rear = 0; // First element 
                } 
                else if (front == 0) 
                { 
                    front = 99; // Wrap around 
                } 
                else 
                { 
                    front--; 
                } 
                deque[front] = data; 
                printf("Data inserted at front.\n"); 
            } 
            break; 
        case 2: 
            if ((front == 0 && rear == 99) || (front == rear + 1)) 
            { 
                printf("Deque Overflow!\n"); 
            } 
            else 
            { 
                printf("Enter data to insert at rear: "); 
                scanf("%d", &data); 
                if (front == -1) 
                { 
                    front = rear = 0; // First element 
                } 
                else 
                { 
                    rear = (rear + 1) % 100; // Wrap around 
                } 
                deque[rear] = data; 
                printf("Data inserted at rear.\n"); 
            } 
            break; 
        case 3: 
            if (front == -1) 
            { 
                printf("Deque Underflow!\n"); 
            } 
            else 
            { 
                printf("Deleted data from front: %d\n", deque[front]); 
                if (front == rear) 
                { 
                    front = rear = -1; // Deque is empty 
                } 
                else 
                { 
                    front = (front + 1) % 100; // Move front forward 
                } 
            } 
            break; 
        case 4: 
            if (front == -1) 
            { 
                printf("Deque Underflow!\n"); 
            } 
            else 
            { 
                printf("Deleted data from rear: %d\n", deque[rear]); 
                if (front == rear) 
                { 
                    front = rear = -1; // Deque is empty 
                } 
                else if (rear == 0) 
                { 
                    rear = 99; // Wrap around 
                } 
                else 
                { 
                    rear--; // Move rear backward 
                } 
            } 
            break; 
        case 5: 
            if (front == -1) 
            { 
                printf("Deque is empty.\n"); 
            } 
            else 
            { 
                printf("Deque: "); 
                int i = front; 
                while (1) 
                { 
                    printf("%d ", deque[i]); 
                    if (i == rear) 
                        break; 
                    i = (i + 1) % 100; 
                } 
                printf("\n"); 
            } 
            break; 
        case 6: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 6); 
} 
 
// Priority Queue Operations 
void priorityQueueOperations() 
{ 
    int queue[100], priority[100], size = 0, choice, data, prio; 
    do 
    { 
        printf("*************************************************\n"); 
        printf("*\tPriority Queue Operations Menu:         *\n"); 
        printf("*\t1. Enqueue                              *\n"); 
        printf("*\t2. Dequeue                              *\n"); 
        printf("*\t3. Display Queue                        *\n"); 
        printf("*\t4. Back to Main Menu                    *\n"); 
        printf("*************************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            if (size == 100) 
            { 
                printf("Priority Queue Overflow!\n"); 
            } 
            else 
            { 
                printf("Enter data to enqueue: "); 
                scanf("%d", &data); 
                printf("Enter priority (higher number means higher priority): "); 
                scanf("%d", &prio); 
                int i; 
                for (i = size - 1; (i >= 0 && priority[i] < prio); i--) 
                { 
                    queue[i + 1] = queue[i]; 
                    priority[i + 1] = priority[i]; 
                } 
                queue[i + 1] = data; 
                priority[i + 1] = prio; 
                size++; 
 
                printf("Data enqueued with priority.\n"); 
            } 
            break; 
        case 2: 
            if (size == 0) 
            { 
                printf("Priority Queue Underflow!\n"); 
            } 
            else 
            { 
                printf("Dequeued data: %d\n", queue[0]); 
                for (int j = 0; j < size - 1; j++) 
                { 
                    queue[j] = queue[j + 1]; 
                    priority[j] = priority[j + 1]; 
                } 
                size--; 
            } 
            break; 
        case 3: 
            if (size == 0) 
            { 
                printf("Priority Queue is empty.\n"); 
            } 
            else 
            { 
                printf("Priority Queue: "); 
                for (int j = 0; j < size; j++) 
                { 
                    printf("Data: %d (Priority: %d) ", queue[j], priority[j]); 
                } 
                printf("\n"); 
            } 
            break; 
        case 4: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 4); 
} 
 
// Tree Operations 
void treeOperations() 
{ 
    TreeNode *root = NULL; 
    int choice, data; 
    do 
    { 
        printf("********************************************\n"); 
        printf("*\tTree Operations Menu:              *\n"); 
        printf("*\t1. Insert Node                     *\n"); 
        printf("*\t2. Delete Node                     *\n"); 
        printf("*\t3. Display Preorder                *\n"); 
        printf("*\t4. Display Inorder                 *\n"); 
        printf("*\t5. Display Postorder               *\n"); 
        printf("*\t6. Search Node                     *\n"); 
        printf("*\t7. Back to Main Menu               *\n"); 
        printf("********************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter data to insert: "); 
            scanf("%d", &data); 
            root = insert(root, data); 
            printf("Node inserted.\n"); 
            break; 
        case 2: 
            printf("Enter data to delete: "); 
            scanf("%d", &data); 
            root = deleteNode(root, data); 
            printf("Node deleted if it existed.\n"); 
            break; 
        case 3: 
            printf("Preorder Traversal: "); 
            preorder(root); 
            printf("\n"); 
            break; 
        case 4: 
            printf("Inorder Traversal: "); 
            inorder(root); 
            printf("\n"); 
            break; 
        case 5: 
            printf("Postorder Traversal: "); 
            postorder(root); 
            printf("\n"); 
            break; 
        case 6: 
            printf("Enter data to search: "); 
            scanf("%d", &data); 
            TreeNode *foundNode = search(root, data); 
            if (foundNode) 
            { 
                printf("Node found with data: %d\n", foundNode->data); 
            } 
            else 
            { 
                printf("Node not found.\n"); 
            } 
            break; 
        case 7: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 7); 
} 
 
// Binary Search Tree Operations 
void binarySearchTreeOperations() 
{ 
    TreeNode *root = NULL; 
    int choice, data; 
    do 
    { 
        printf("******************************************************************\n"); 
        printf("*\tBinary Search Tree Operations Menu:                      *\n"); 
        printf("*\t1. Insert Node                                           *\n"); 
        printf("*\t2. Delete Node                                           *\n"); 
        printf("*\t3. Display Preorder                                      *\n"); 
        printf("*\t4. Display Inorder                                       *\n"); 
        printf("*\t5. Display Postorder                                     *\n"); 
        printf("*\t6. Search Node                                           *\n"); 
        printf("*\t7. Back to Main Menu                                     *\n"); 
        printf("******************************************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter data to insert: "); 
            scanf("%d", &data); 
            root = insert(root, data); 
            printf("Node inserted.\n"); 
            break; 
        case 2: 
            printf("Enter data to delete: "); 
            scanf("%d", &data); 
            root = deleteNode(root, data); 
            printf("Node deleted if it existed.\n"); 
            break; 
        case 3: 
            printf("Preorder Traversal: "); 
            preorder(root); 
            printf("\n"); 
            break; 
        case 4: 
            printf("Inorder Traversal: "); 
            inorder(root); 
            printf("\n"); 
            break; 
        case 5: 
            printf("Postorder Traversal: "); 
            postorder(root); 
            printf("\n"); 
            break; 
        case 6: 
            printf("Enter data to search: "); 
            scanf("%d", &data); 
            TreeNode *foundNode = search(root, data); 
            if (foundNode) 
            { 
                printf("Node found with data: %d\n"); 
                printf("Node found with data: %d\n", foundNode->data); 
            } 
            else 
            { 
                printf("Node not found.\n"); 
            } 
            break; 
        case 7: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 7); 
} 
 
// AVL Tree Operations 
void avlTreeOperations() 
{ 
    TreeNode *root = NULL; 
    int choice, data; 
    do 
    { 
        printf("**************************************************\n"); 
        printf("*\tAVL Tree Operations Menu:                *\n"); 
        printf("*\t1. Insert Node                           *\n"); 
        printf("*\t2. Delete Node                           *\n"); 
        printf("*\t3. Display Preorder                      *\n"); 
        printf("*\t4. Display Inorder                       *\n"); 
        printf("*\t5. Display Postorder                     *\n"); 
        printf("*\t6. Search Node                           *\n"); 
        printf("*\t7. Back to Main Menu                     *\n"); 
        printf("**************************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter data to insert: "); 
            scanf("%d", &data); 
            root = insert(root, data); 
            printf("Node inserted.\n"); 
            break; 
        case 2: 
            printf("Enter data to delete: "); 
            scanf("%d", &data); 
            root = deleteNode(root, data); 
            printf("Node deleted if it existed.\n"); 
            break; 
        case 3: 
            printf("Preorder Traversal: "); 
            preorder(root); 
            printf("\n"); 
            break; 
        case 4: 
            printf("Inorder Traversal: "); 
            inorder(root); 
            printf("\n"); 
            break; 
        case 5: 
            printf("Postorder Traversal: "); 
            postorder(root); 
            printf("\n"); 
            break; 
        case 6: 
            printf("Enter data to search: "); 
            scanf("%d", &data); 
            TreeNode *foundNode = search(root, data); 
            if (foundNode) 
            { 
                printf("Node found with data: %d\n", foundNode->data); 
            } 
            else 
            { 
                printf("Node not found.\n"); 
            } 
            break; 
        case 7: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 7); 
} 
 
// Hash Table Operations 
void hashTableOperations() 
{ 
    HashTable *ht = createHashTable(); 
    int choice, key; 
 
    do 
    { 
        printf("*************************************\n"); 
        printf("*\tHash Table Operations Menu: *\n"); 
        printf("*\t1. Insert Key               *\n"); 
        printf("*\t2. Delete Key               *\n"); 
        printf("*\t3. Search Key               *\n"); 
        printf("*\t4. Display Hash Table       *\n"); 
        printf("*\t5. Back to Main Menu        *\n"); 
        printf("*************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter key to insert: "); 
            scanf("%d", &key); 
            insertHash(ht, key); 
            printf("Key inserted.\n"); 
            break; 
        case 2: 
            printf("Enter key to delete: "); 
            scanf("%d", &key); 
            deleteHash(ht, key); 
            printf("Key deleted if it existed.\n"); 
            break; 
        case 3: 
            printf("Enter key to search: "); 
            scanf("%d", &key); 
            if (searchHash(ht, key)) 
            { 
                printf("Key %d found in the hash table.\n", key); 
            } 
            else 
            { 
                printf("Key %d not found in the hash table.\n", key); 
            } 
            break; 
        case 4: 
            displayHashTable(ht); 
            break; 
        case 5: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 5); 
} 
 
// Hashing Functions 
 
HashTable *createHashTable() 
{ 
    HashTable *ht = (HashTable *)malloc(sizeof(HashTable)); 
    for (int i = 0; i < TABLE_SIZE; i++) 
    { 
        ht->table[i] = NULL; 
    } 
    return ht; 
} 
 
int hashFunction(int key) 
{ 
    return key % TABLE_SIZE; 
} 
 
void insertHash(HashTable *ht, int key) 
{ 
    int index = hashFunction(key); 
    HashNode *newNode = (HashNode *)malloc(sizeof(HashNode)); 
    newNode->data = key; 
    newNode->next = ht->table[index]; 
    ht->table[index] = newNode; 
} 
 
void deleteHash(HashTable *ht, int key) 
{ 
    int index = hashFunction(key); 
    HashNode *current = ht->table[index]; 
    HashNode *previous = NULL; 
 
    while (current != NULL && current->data != key) 
    { 
        previous = current; 
        current = current->next; 
    } 
 
    if (current == NULL) 
    { 
        printf("Key %d not found.\n", key); 
        return; 
    } 
 
    if (previous == NULL) 
    { 
        ht->table[index] = current->next; // Deleting the first node 
    } 
    else 
    { 
        previous->next = current->next; // Bypass the node to delete 
    } 
    free(current); 
} 
 
int searchHash(HashTable *ht, int key) 
{ 
    int index = hashFunction(key); 
    HashNode *current = ht->table[index]; 
 
    while (current != NULL) 
    { 
        if (current->data == key) 
        { 
            return 1; // Key found 
        } 
        current = current->next; 
    } 
    return 0; // Key not found 
} 
 
void displayHashTable(HashTable *ht) 
{ 
    for (int i = 0; i < TABLE_SIZE; i++) 
    { 
        HashNode *current = ht->table[i]; 
        printf("Index %d: ", i); 
        while (current != NULL) 
        { 
            printf("%d -> ", current->data); 
            current = current->next; 
        } 
        printf("NULL\n"); 
    } 
} 
 
// Graph Operations 
void graphOperations() 
{ 
    Graph *graph = createGraph(MAX_VERTICES); 
    int choice, src, dest; 
 
    do 
    { 
        printf("***************************************\n"); 
        printf("*\tGraph Operations Menu:       *\n"); 
        printf("*\t1. Add Edge                  *\n"); 
        printf("*\t2. Remove Edge               *\n"); 
        printf("*\t3. Display Graph             *\n"); 
        printf("*\t4. Search Vertex             *\n"); 
        printf("*\t5. Back to Main Menu         *\n"); 
        printf("***************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter source and destination vertices: "); 
            scanf("%d %d", &src, &dest); 
            addEdge(graph, src, dest); 
            printf("Edge added from %d to %d.\n", src, dest); 
            break; 
        case 2: 
            printf("Enter source and destination vertices: "); 
            scanf("%d %d", &src, &dest); 
            removeEdge(graph, src, dest); 
            printf("Edge removed from %d to %d if it existed.\n", src, dest); 
            break; 
        case 3: 
            displayGraph(graph); 
            break; 
        case 4: 
            printf("Enter vertex to search: "); 
            scanf("%d", &src); 
            if (searchGraph(graph, src)) 
            { 
                printf("Vertex %d found in the graph.\n", src); 
            } 
            else 
            { 
                printf("Vertex %d not found in the graph.\n", src); 
            } 
            break; 
        case 5: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 5); 
} 
 
// Graph Functions 
Graph *createGraph(int vertices) 
{ 
    Graph *graph = (Graph *)malloc(sizeof(Graph)); 
    graph->numVertices = vertices; 
    for (int i = 0; i < vertices; i++) 
    { 
        graph->adjLists[i] = NULL; 
    } 
    return graph; 
} 
 
void addEdge(Graph *graph, int src, int dest) 
{ 
    Node *newNode = (Node *)malloc(sizeof(Node)); 
    newNode->data = dest; 
    newNode->next = graph->adjLists[src]; 
    graph->adjLists[src] = newNode; 
 
    // For undirected graph, add an edge from dest to src as well 
    newNode = (Node *)malloc(sizeof(Node)); 
    newNode->data = src; 
    newNode->next = graph->adjLists[dest]; 
    graph->adjLists[dest] = newNode; 
} 
 
void removeEdge(Graph *graph, int src, int dest) 
{ 
    Node *current = graph->adjLists[src]; 
    Node *previous = NULL; 
 
    while (current != NULL && current->data != dest) 
    { 
        previous = current; 
        current = current->next; 
    } 
 
    if (current == NULL) 
    { 
        printf("Edge from %d to %d not found.\n", src, dest); 
        return; 
    } 
 
    if (previous == NULL) 
    { 
        graph->adjLists[src] = current->next; // Remove the first node 
    } 
    else 
    { 
        previous->next = current->next; // Bypass the node to delete 
    } 
    free(current); 
 
    // For undirected graph, remove the edge from dest to src as well 
    current = graph->adjLists[dest]; 
    previous = NULL; 
 
    while (current != NULL && current->data != src) 
    { 
        previous = current; 
        current = current->next; 
    } 
 
    if (current != NULL) 
    { 
        if (previous == NULL) 
        { 
            graph->adjLists[dest] = current->next; // Remove the first node 
        } 
        else 
        { 
            previous->next = current->next; // Bypass the node to delete 
        } 
        free(current); 
    } 
} 
 
void displayGraph(Graph *graph) 
{ 
    for (int i = 0; i < graph->numVertices; i++) 
    { 
        Node *current = graph->adjLists[i]; 
        printf("Vertex %d: ", i); 
        while (current != NULL) 
        { 
            printf("-> %d ", current->data); 
            current = current->next; 
        } 
        printf("\n"); 
    } 
} 
 
int searchGraph(Graph *graph, int vertex) 
{ 
    if (vertex < 0 || vertex >= graph->numVertices) 
    { 
        return 0; // Vertex out of bounds 
    } 
    return graph->adjLists[vertex] != NULL; // Check if the vertex has any edges 
} 
 
// Heap Operations 
void heapOperations() 
{ 
    Heap heap; 
    heap.size = 0; 
    int choice, value; 
 
    do 
    { 
        printf("*********************************************\n"); 
        printf("*\tHeap Operations Menu:               *\n"); 
        printf("*\t1. Insert Element                   *\n"); 
        printf("*\t2. Delete Element                   *\n"); 
        printf("*\t3. Display Heap                     *\n"); 
        printf("*\t4. Heap Sort                        *\n"); 
        printf("*\t5. Back to Main Menu                *\n"); 
        printf("*********************************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            printf("Enter value to insert: "); 
            scanf("%d", &value); 
            insertHeap(&heap, value); 
            printf("Element inserted into heap.\n"); 
            break; 
        case 2: 
            value = deleteHeap(&heap); 
            if (value != -1) 
            { 
                printf("Deleted element: %d\n", value); 
            } 
            break; 
        case 3: 
            displayHeap(&heap); 
            break; 
        case 4: 
            printf("Heap Sort: "); 
            heapSort(heap.arr, heap.size); 
            displayHeap(&heap); 
            break; 
        case 5: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 5); 
} 
 
// Heap Functions 
void insertHeap(Heap *heap, int value) 
{ 
    if (heap->size >= MAX_HEAP_SIZE) 
    { 
        printf("Heap is full!\n"); 
        return; 
    } 
    heap->arr[heap->size] = value; 
    heap->size++; 
    for (int i = heap->size / 2 - 1; i >= 0; i--) 
    { 
        heapify(heap->arr, heap->size, i); 
    } 
} 
 
int deleteHeap(Heap *heap) 
{ 
    if (heap->size <= 0) 
    { 
        printf("Heap is empty!\n"); 
        return -1; // Indicate error 
    } 
    int root = heap->arr[0]; 
    heap->arr[0] = heap->arr[heap->size - 1]; 
    heap->size--; 
    heapify(heap->arr, heap->size, 0); 
    return root; 
} 
 
void displayHeap(Heap *heap) 
{ 
    if (heap->size == 0) 
    { 
        printf("Heap is empty.\n"); 
        return; 
    } 
    printf("Heap: "); 
    for (int i = 0; i < heap->size; i++) 
    { 
        printf("%d ", heap->arr[i]); 
    } 
    printf("\n"); 
} 
 
void heapSort(int arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
    { 
        heapify(arr, n, i); 
    } 
    for (int i = n - 1; i > 0; i--) 
    { 
        int temp = arr[0]; 
        arr[0] = arr[i]; 
        arr[i] = temp; 
        heapify(arr, i, 0); 
    } 
} 
 
void heapify(int arr[], int n, int i) 
{ 
    int largest = i;       // Initialize largest as root 
    int left = 2 * i + 1;  // left = 2*i + 1 
    int right = 2 * i + 2; // right = 2*i + 2 
 
    if (left < n && arr[left] > arr[largest]) 
    { 
        largest = left; 
    } 
    if (right < n && arr[right] > arr[largest]) 
    { 
        largest = right; 
    } 
    if (largest != i) 
    { 
        int swap = arr[i]; 
        arr[i] = arr[largest]; 
        arr[largest] = swap; 
        heapify(arr, n, largest); 
    } 
} 
 
// Sorting Operations 
void sortingOperations() 
{ 
    int arr[100], n, choice; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    printf("Enter elements:\n"); 
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d", &arr[i]); 
    } 
 
    do 
    { 
        printf("**********************************\n"); 
        printf("*\tSorting Operations Menu:   *\n"); 
        printf("*\t1. Bubble Sort             *\n"); 
        printf("*\t2. Selection Sort          *\n"); 
        printf("*\t3. Insertion Sort          *\n"); 
        printf("*\t4. Quick Sort              *\n"); 
        printf("*\t5. Display Array           *\n"); 
        printf("*\t6. Back to Main Menu       *\n"); 
        printf("**********************************\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
            bubbleSort(arr, n); 
            printf("Array sorted using Bubble Sort.\n"); 
            break; 
        case 2: 
            selectionSort(arr, n); 
            printf("Array sorted using Selection Sort.\n"); 
            break; 
        case 3: 
            insertionSort(arr, n); 
            printf("Array sorted using Insertion Sort.\n"); 
            break; 
        case 4: 
            quickSort(arr, 0, n - 1); 
            printf("Array sorted using Quick Sort.\n"); 
            break; 
        case 5: 
            displayArray(arr, n); 
            break; 
        case 6: 
            printf("Returning to main menu.\n"); 
            break; 
        default: 
            printf("Invalid choice! Please try again.\n"); 
        } 
    } while (choice != 6); 
} 
 
// Sorting Algorithms 
void bubbleSort(int arr[], int n) 
{ 
    for (int i = 0; i < n - 1; i++) 
    { 
        for (int j = 0; j < n - i - 1; j++) 
        { 
            if (arr[j] > arr[j + 1]) 
            { 
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
} 
 
// SelectionSort Function 
void selectionSort(int arr[], int n) 
{ 
    for (int i = 0; i < n - 1; i++) 
    { 
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) 
        { 
            if (arr[j] < arr[minIndex]) 
            { 
                minIndex = j; 
            } 
        } 
        int temp = arr[minIndex]; 
        arr[minIndex] = arr[i]; 
        arr[i] = temp; 
    } 
} 
 
// InsertionSort function 
void insertionSort(int arr[], int n) 
{ 
    for (int i = 1; i < n; i++) 
    { 
        int key = arr[i]; 
        int j = i - 1; 
        while (j >= 0 && arr[j] > key) 
        { 
            arr[j + 1] = arr[j]; 
            j--; 
        } 
        arr[j + 1] = key; 
    } 
} 
 
// Partition function 
int partition(int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j < high; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            int temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = temp; 
        } 
    } 
    int temp = arr[i + 1]; 
    arr[i + 1] = arr[high]; 
    arr[high] = temp; 
    return (i + 1); 
} 
 
// quicksort Function 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
 
// Function to display the array 
void displayArray(int arr[], int n) 
{ 
    printf("Current Array: "); 
    for (int i = 0; i < n; i++) 
    { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 
 
// AVL Tree Functions 
TreeNode *insert(TreeNode *node, int data) 
{ 
    if (node == NULL) 
    { 
        TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode)); 
        newNode->data = data; 
        newNode->left = newNode->right = NULL; 
        newNode->height = 1; // New node is initially added at leaf 
        return newNode; 
    } 
    if (data < node->data) 
    { 
        node->left = insert(node->left, data); 
    } 
    else if (data > node->data) 
    { 
        node->right = insert(node->right, data); 
    } 
    else 
    { 
        return node; // Duplicate data not allowed 
    } 
 
    // Update height of this ancestor node 
    node->height = 1 + (height(node->left) > height(node->right) ? height(node->left) : height(node->right)); 
 
    // Get the balance factor 
    int balance = getBalance(node); 
 
    // If the node becomes unbalanced, then there are 4 cases 
 
    // Left Left Case 
    if (balance > 1 && data < node->left->data) 
    { 
        return rightRotate(node); 
    } 
 
    // Right Right Case 
    if (balance < -1 && data > node->right->data) 
    { 
        return leftRotate(node); 
    } 
 
    // Left Right Case 
    if (balance > 1 && data > node->left->data) 
    { 
        node->left = leftRotate(node->left); 
        return rightRotate(node); 
    } 
 
    // Right Left Case 
    if (balance < -1 && data < node->right->data) 
    { 
        node->right = rightRotate(node->right); 
        return leftRotate(node); 
    } 
 
    return node; // Return the (unchanged) node pointer 
} 
 
TreeNode *deleteNode(TreeNode *root, int data) 
{ 
    if (root == NULL) 
    { 
        return root; // Element not found 
    } 
 
    if (data < root->data) 
    { 
        root->left = deleteNode(root->left, data); 
    } 
    else if (data > root->data) 
    { 
        root->right = deleteNode(root->right, data); 
    } 
    else 
    { 
        // Node with only one child or no child 
        if ((root->left == NULL) || (root->right == NULL)) 
        { 
            TreeNode *temp = root->left ? root->left : root->right; 
 
            // No child case 
            if (temp == NULL) 
            { 
                temp = root; 
                root = NULL; // This node is deleted 
            } 
            else 
            { 
                *root = *temp; // Copy the contents of the non-empty child 
            } 
            free(temp); 
        } 
        else 
        { 
            // Node with two children: Get the inorder successor (smallest in the right subtree) 
            TreeNode *temp = root->right; 
            while (temp->left != NULL) 
            { 
                temp = temp->left; 
            } 
 
            // Copy the inorder successor's data to this node 
            root->data = temp->data; 
 
            // Delete the inorder successor 
            root->right = deleteNode(root->right, temp->data); 
        } 
    } 
 
    // If the tree had only one node, then return 
    if (root == NULL) 
    { 
        return root; 
    } 
 
    // Update height of the current node 
    root->height = 1 + (height(root->left) > height(root->right) ? height(root->left) : height(root->right)); 
 
    // Get the balance factor 
    int balance = getBalance(root); 
 
    // If the node becomes unbalanced, then there are 4 cases 
 
    // Left Left Case 
    if (balance > 1 && getBalance(root->left) >= 0) 
    { 
        return rightRotate(root); 
    } 
 
    // Left Right Case 
    if (balance > 1 && getBalance(root->left) < 0) 
    { 
        root->left = leftRotate(root->left); 
        return rightRotate(root); 
    } 
 
    // Right Right Case 
    if (balance < -1 && getBalance(root->right) <= 0) 
    { 
        return leftRotate(root); 
    } 
 
    // Right Left Case 
    if (balance < -1 && getBalance(root->right) > 0) 
    { 
        root->right = rightRotate(root->right); 
        return leftRotate(root); 
    } 
 
    return root; 
} 
 
TreeNode *search(TreeNode *root, int data) 
{ 
    if (root == NULL || root->data == data) 
    { 
        return root; // Node found or tree is empty 
    } 
    if (data < root->data) 
    { 
        return search(root->left, data); // Search in left subtree 
    } 
    return search(root->right, data); // Search in right subtree 
} 
 
int height(TreeNode *node) 
{ 
    if (node == NULL) 
    { 
        return 0; 
    } 
    return node->height; 
} 
 
int getBalance(TreeNode *node) 
{ 
    if (node == NULL) 
    { 
        return 0; 
    } 
    return height(node->left) - height(node->right); 
} 
 
TreeNode *rightRotate(TreeNode *y) 
{ 
    TreeNode *x = y->left; 
    TreeNode *T2 = x->right; 
 
    // Perform rotation 
    x->right = y; 
    y->left = T2; 
 
    // Update heights 
    y->height = 1 + (height(y->left) > height(y->right) ? height(y->left) : height(y->right)); 
    x->height = 1 + (height(x->left) > height(x->right) ? height(x->left) : height(x->right)); 
 
    // Return new root 
    return x; 
} 
 
TreeNode *leftRotate(TreeNode *x) 
{ 
    TreeNode *y = x->right; 
    TreeNode *T2 = y->left; 
 
    // Perform rotation 
    y->left = x; 
    x->right = T2; 
 
    // Update heights 
    x->height = 1 + (height(x->left) > height(x->right) ? height(x->left) : height(x->right)); 
    y->height = 1 + (height(y->left) > height(y->right) ? height(y->left) : height(y->right)); 
 
    // Return new root 
    return y; 
} 
 
// Preorder Traversal 
void preorder(TreeNode *node) 
{ 
    if (node != NULL) 
    { 
        printf("%d ", node->data); 
        preorder(node->left); 
        preorder(node->right); 
    } 
} 
 
// Inorder Traversal 
void inorder(TreeNode *node) 
{ 
    if (node != NULL) 
    { 
        inorder(node->left); 
        printf("%d ", node->data); 
        inorder(node->right); 
    } 
} 
 
// Postorder Traversal 
void postorder(TreeNode *node) 
{ 
    if (node != NULL) 
    { 
        postorder(node->left); 
        postorder(node->right); 
        printf("%d ", node->data); 
    } 
} 
 
// Queue functions 
Queue *createQueue() 
{ 
    Queue *q = (Queue *)malloc(sizeof(Queue)); 
    q->front = -1; 
    q->rear = -1; 
    return q; 
} 
 
int isFull(Queue *q) 
{ 
    return q->rear == 99; 
} 
 
int isEmpty(Queue *q) 
{ 
    return q->front == -1; 
} 
 
void enqueue(Queue *q, int value) 
{ 
    if (isFull(q)) 
    { 
        printf("Queue Overflow!\n"); 
    } 
    else 
    { 
        if (q->front == -1) 
        { 
            q->front = 0; // First element 
        } 
        q->rear++; 
        q->items[q->rear] = value; 
    } 
} 
 
int dequeue(Queue *q) 
{ 
    if (isEmpty(q)) 
    { 
        printf("Queue Underflow!\n"); 
        return -1; // Indicate error 
    } 
    else 
    { 
        int item = q->items[q->front]; 
        q->front++; 
        if (q->front > q->rear) 
        { 
            q->front = q->rear = -1; // Reset queue 
        } 
        return item; 
    } 
} 
 
void displayQueue(Queue *q) 
{ 
    if (isEmpty(q)) 
    { 
        printf("Queue is empty.\n"); 
    } 
    else 
    { 
        printf("Queue: "); 
        for (int i = q->front; i <= q->rear; i++) 
        { 
            printf("%d ", q->items[i]); 
        } 
        printf("\n"); 
    } 
} 
 
// Stack functions 
void push(int stack[], int *top, int value) 
{ 
    if (*top == 99) 
    { 
        printf("Stack Overflow!\n"); 
    } 
    else 
    { 
        stack[++(*top)] = value; 
    } 
} 
 
int pop(int stack[], int *top) 
{ 
    if (*top == -1) 
    { 
        printf("Stack Underflow!\n"); 
        return -1; // Indicate error 
    } 
    else 
    { 
        return stack[(*top)--]; 
    } 
} 
 
int peek(int stack[], int top) 
{ 
    if (top == -1) 
    { 
        printf("Stack is empty.\n"); 
        return -1; // Indicate error 
    } 
    else 
    { 
        return stack[top]; 
    } 
} 
 
void displayStack(int stack[], int top) 
{ 
    if (top == -1) 
    { 
        printf("Stack is empty.\n"); 
    } 
    else 
    { 
        printf("Stack: "); 
        for (int i = top; i >= 0; i--) 
        { 
            printf("%d ", stack[i]); 
        } 
        printf("\n"); 
    } 
} 
// Time Complexities of this project 
 
// Best case = O(n^3) 
// Average case = O(n^2) 
// Worst case = O(♾️) 
 
// Recursion 
 
// Best case = O(a^n) 
// where a=1,2,3,---------♾️ 
 
// 1. Array Operations 
 
// Insert Element: 
 
// Best Case: O(1) (if inserting at the end and space is available) 
// Average Case: O(1) (amortized) 
// Worst Case: O(n) (if inserting at a specific index) 
 
// Delete Element: 
 
// Best Case: O(1) (if deleting the last element) 
// Average Case: O(n) (shifting elements) 
// Worst Case: O(n) (if deleting the first element) 
 
// Search Element: 
 
// Best Case: O(1) (if the element is at the first index) 
// Average Case: O(n) (linear search) 
// Worst Case: O(n) (if the element is not found) 
 
// Sort Array (Bubble Sort): 
 
// Best Case: O(n) (if the array is already sorted) 
// Average Case: O(n^2) 
// Worst Case: O(n^2) 
 
// 2. Matrix Operations 
 
// Add Matrices: 
 
// Best Case: O(rows * cols) 
// Average Case: O(rows * cols) 
// Worst Case: O(rows * cols) 
 
// Display Matrix: 
 
// Best Case: O(rows * cols) 
// Average Case: O(rows * cols) 
// Worst Case: O(rows * cols) 
 
// Insert Element: 
 
// Best Case: O(1) (if within bounds) 
// Average Case: O(1) (if within bounds) 
// Worst Case: O(1) (if within bounds) 
 
// Delete Element: 
 
// Best Case: O(1) (if within bounds) 
// Average Case: O(1) (if within bounds) 
// Worst Case: O(1) (if within bounds) 
 
// Search Element: 
 
// Best Case: O(1) (if the element is at the first position) 
// Average Case: O(rows * cols) 
// Worst Case: O(rows * cols) 
 
// 3. Linked List Operations 
 
// Insert at Beginning: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Insert at End: 
 
// Best Case: O(1) (if tail pointer is maintained) 
// Average Case: O(n) (if no tail pointer) 
// Worst Case: O(n) 
 
// Delete Node: 
 
// Best Case: O(1) (if deleting the head) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Display List: 
 
// Best Case: O(1) (if the list is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Search Node: 
 
// Best Case: O(1) (if the element is at the head) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 4. Circular Linked List Operations 
 
// Insert at Beginning: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Insert at End: 
 
// Best Case: O(1) (if tail pointer is maintained) 
// Average Case: O(n) (if no tail pointer) 
// Worst Case: O(n) 
 
// Delete Node: 
 
// Best Case: O(1) (if deleting the head) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Display List: 
 
// Best Case: O(1) (if the list is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Search Node: 
 
// Best Case: O(1) (if the element is at the head) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 5. Doubly Linked List Operations 
 
// Insert at Beginning: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Insert at End: 
 
// Best Case: O(1) (if tail pointer is maintained) 
// Average Case: O(n) (if no tail pointer) 
// Worst Case: O(n) 
 
// Delete Node: 
 
// Best Case: O(1) (if deleting the head) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Display List: 
 
// Best Case: O(1) (if the list is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Search Node: 
 
// Best Case: O(1) (if the element is at the head) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 6. Stack Operations 
 
// Push: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Pop: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Peek: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Display Stack: 
 
// Best Case: O(1) (if the stack is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 7. Queue Operations 
 
// Enqueue: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Dequeue: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Display Queue: 
 
// Best Case: O(1) (if the queue is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 8. Circular Queue Operations 
 
// Enqueue: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Dequeue: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Display Queue: 
 
// Best Case: O(1) (if the queue is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 9. Double Ended Queue Operations 
 
// Insert at Front: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Insert at Rear: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Delete from Front: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Delete from Rear: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Display Deque: 
 
// Best Case: O(1) (if the deque is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 10. Priority Queue Operations 
 
// Enqueue: 
 
// Best Case: O(1) (if the new element has the highest priority) 
// Average Case: O(n) (inserting in sorted order) 
// Worst Case: O(n) 
 
// Dequeue: 
 
// Best Case: O(1) (if the highest priority element is at the front) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Display Queue: 
 
// Best Case: O(1) (if the queue is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 11. Tree Operations (Binary Search Tree) 
 
// Insert: 
 
// Best Case: O(1) (if the tree is empty) 
// Average Case: O(log n) (for balanced trees) 
// Worst Case: O(n) (for skewed trees) 
 
// Delete: 
 
// Best Case: O(1) (if deleting the root) 
// Average Case: O(log n) 
// Worst Case: O(n) 
 
// Search: 
 
// Best Case: O(1) (if the element is the root) 
// Average Case: O(log n) 
// Worst Case: O(n) 
 
// Traversal (Preorder, Inorder, Postorder): 
 
// Best Case: O(1) (if the tree is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 12. AVL Tree Operations 
 
// Insert: 
 
// Best Case: O(1) (if the tree is empty) 
// Average Case: O(log n) 
// Worst Case: O(log n) 
 
// Delete: 
 
// Best Case: O(1) (if deleting the root) 
// Average Case: O(log n) 
// Worst Case: O(log n) 
 
// Search: 
 
// Best Case: O(1) (if the element is the root) 
// Average Case: O(log n) 
// Worst Case: O(log n) 
 
// Traversal: 
 
// Best Case: O(1) (if the tree is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 13. Hash Table Operations 
 
// Insert: 
 
// Best Case: O(1) (if no collision) 
// Average Case: O(1) 
// Worst Case: O(n) (if all keys hash to the same index) 
 
// Delete: 
 
// Best Case: O(1) (if no collision) 
// Average Case: O(1) 
// Worst Case: O(n) 
 
// Search: 
 
// Best Case: O(1) (if no collision) 
// Average Case: O(1) 
// Worst Case: O(n) 
 
// Display Hash Table: 
 
// Best Case: O(1) (if the table is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// 14. Graph Operations 
 
// Add Edge: 
 
// Best Case: O(1) 
// Average Case: O(1) 
// Worst Case: O(1) 
 
// Remove Edge: 
 
// Best Case: O(1) (if the edge is the first in the list) 
// Average Case: O(n) (in the worst case, if you have to search through the list) 
// Worst Case: O(n) 
 
// Display Graph: 
 
// Best Case: O(1) (if the graph is empty) 
// Average Case: O(V + E) (where V is vertices and E is edges) 
// Worst Case: O(V + E) 
 
// Search Vertex: 
 
// Best Case: O(1) (if the vertex is the first in the list) 
// Average Case: O(V) 
// Worst Case: O(V ### 15. Heap Operations 
 
// Insert: 
 
// Best Case: O(1) (if the heap is not full and the new element is added at the end) 
// Average Case: O(log n) (for maintaining the heap property) 
// Worst Case: O(log n) 
 
// Delete: 
 
// Best Case: O(1) (if the heap has only one element) 
// Average Case: O(log n) (for maintaining the heap property) 
// Worst Case: O(log n) 
 
// Display Heap: 
 
// Best Case: O(1) (if the heap is empty) 
// Average Case: O(n) 
// Worst Case: O(n) 
 
// Heap Sort: 
 
// Best Case: O(n log n) 
// Average Case: O(n log n) 
// Worst Case: O(n log n) 
 
// 16. Sorting Operations 
 
// Bubble Sort: 
// Best Case: O(n) (if the array is already sorted) 
// Average Case: O(n^2) 
// Worst Case: O(n^2) 
 
// Selection Sort: 
// Best Case: O(n^2) 
// Average Case: O(n^2) 
// Worst Case: O(n^2) 
 
// Insertion Sort: 
// Best Case: O(n) (if the array is already sorted) 
// Average Case: O(n^2) 
// Worst Case: O(n^2) 
 
// Quick Sort: 
// Best Case: O(n log n) (when the pivot divides the array into two equal halves) 
// Average Case: O(n log n) 
// Worst Case: O(n^2) (when the smallest or largest element is always chosen as the pivot) 
 
// Space Complexity 
 
// Array: O(n) for storing elements. 
// Matrix: O(rows * cols). 
// Linked List: O(n) for storing nodes. 
// Stack: O(n) for storing elements. 
// Queue: O(n) for storing elements. 
// Tree: O(n) for storing nodes. 
// Hash Table: O(n) for storing elements. 
// Graph: O(V + E) for adjacency list representation. 
// Heap: O(n) for storing elements.
