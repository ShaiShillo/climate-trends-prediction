#define _CRT_SECURE_NO_WARNINGS
#define N 4

#define ROWS 5
#define COLS 4

/Libraries/
#include <stdio.h>

/*
	Assigned by:
		Roie Ihia  #207279936
		Ifat Vider #206865941
*/

/* Function declarations */

void Ex1();
void Ex2();
void Ex3();
void Ex4();

/* Declarations of other sub-functions */

int equalArrays(int[], int[], int, int);
int equalArraysSameSize(int[], int[], int);

void SelectionSort(int[], int);
void swap(int*, int*);
int maxItem(int[], int);

int sortRemoveDup(int[], int);

void sortRowsCols(int[][COLS], int, int, int*, int*);
int arrSorted(int[], int);
int columnSorted(int[][COLS], int, int);

void printArr(int[], int);

void inputMatrix(int[][COLS], int, int);

/* ------------------------------- */

int main()
{
	int select = 0, i, all_Ex_in_loop = 0;
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
	if (scanf("%d", &all_Ex_in_loop) == 1)
		do
		{
			for (i = 1; i <= N; i++)
				printf("Ex%d--->%d\n", i, i);
			printf("EXIT-->0\n");
			do {
				select = 0;
				printf("please select 0-%d : ", N);
				scanf("%d", &select);
			} while ((select < 0) || (select > N));
			switch (select)
			{
			case 1: Ex1(); break;
			case 2: Ex2(); break;
			case 3: Ex3(); break;
			case 4: Ex4(); break;
			}
		} while (all_Ex_in_loop && select);
		return 0;
}


/* Function definitions */

void Ex1() {
	int A[] = { 1,2,5,3 }, B[] = { 1,2,3,5 }, // Initialize the arrays
		sizeA = sizeof(A) / sizeof(int), sizeB = sizeof(B) / sizeof(int);
	printf("\n%s\n\n", equalArrays(A, B, sizeA, sizeB) ? "Arrays are equal" : "Arrays are not equal");
}

void Ex2() {
	int ar[] = { 56, 32, 5, 90, 40, 42, 19 }, // Initialize the array
		size = sizeof(ar) / sizeof(int);
	SelectionSort(ar, size);
	printf("\nSorted array:\n");
	printArr(ar, size);
	printf("\n");
}

void Ex3() {
	int ar[] = { 56, 32, 56, 90, 56, 32, 19, 56, 31, 32 }, // Initialize the array
		size = sizeof(ar) / sizeof(int), new_size = 0;
	SelectionSort(ar, size); // Sort the source array
	printf("\nArray with duplications:\n");
	printArr(ar, size);
	new_size = sortRemoveDup(ar, size);
	printf("\nArray without duplications:\n");
	printArr(ar, new_size);
	printf("\n");
}

void Ex4() {
	int ar[ROWS][COLS] = { 0 }, sort_rows = 0, sort_cols = 0;
	printf("\nPlease enter the matrix elements:\n");
	inputMatrix(ar, ROWS, COLS);
	sortRowsCols(ar, ROWS, COLS, &sort_rows, &sort_cols);
	printf("\nThe number of rows sorted in ascending order is: %d\n", sort_rows);
	printf("The number of columns sorted in descending order is: %d\n\n", sort_cols);
}

/* Sub-Function definitions */

int equalArrays(int A[], int B[], int sizeA, int sizeB) {
	int size;
	if (sizeA == sizeB)
	{
		size = sizeA;
		return equalArraysSameSize(A, B, size);
	}
	else
		return 0;
}

int equalArraysSameSize(int A[], int B[], int size) {

	if (A[0] != B[0])
		return 0;
	else if (size == 0)
		return 1;
	return equalArraysSameSize(A + 1, B + 1, size - 1);
}

void SelectionSort(int ar[], int n) {
	int i, new_size = n - 1, p;
	for (i = 0; i < n; i++)
	{
		p = maxItem(ar, new_size);
		swap(&ar[p], &ar[new_size]);
		new_size--;
	}
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int maxItem(int ar[], int size) {
	int i, max, p = size;
	max = 0;
	for (i = 0; i < size; i++)
	{
		if (ar[i] > max)
		{
			max = ar[i];
			p = i;
		}
	}
	return p;
}

int sortRemoveDup(int ar[], int n) {
	int* p, * j, * k, i, dupleCount;
	//init pointers:
	p = k = ar;
	j = ar + 1;
	for (i = 0; i < n; i++)
	{
		if (*k == *j) {
			j++;
			dupleCount++;
		}
		else {
			*(p + 1) = *j; //putting next unduplicated value 
			p++; // moving to new arr ending index place
			k = j;// moving to check next duplication
			j++;//moving to check next duplication with new k
		}
	}
}


void sortRowsCols(int ar[][COLS], int m, int n, int* s_rows, int* s_cols) {
	/Write Code Here!/
}

int arrSorted(int a[], int n) {
	/Write Code Here!/
}

int columnSorted(int ar[][COLS], int m, int col) {
	/Write Code Here!/
}

void printArr(int ar[], int size) {
	int i, p;
	for (i = 0; i < size; i++)
	{
		p = ar[i];
		printf("%4d", p);
	}
}

void inputMatrix(int ar[][COLS], int m, int n) {
	/Write Code Here!/
}

/* ------------------- */