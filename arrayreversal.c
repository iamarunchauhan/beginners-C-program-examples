//Program in C to reverse the order of an elements in an array

#include<stdio.h>

void main() {
  int size;

  printf("Enter size of an array : ");
  scanf("%d", & size); // size of an array

  int arr[size];

  printf("Enter elements of an array : \n");

  //input elements in an array one by one
  for (int i = 0; i < size; i++) {
    scanf("%d", & arr[i]);
  }

  printf("Elements in an array after reversing the order : \n");

  //print elements in reversed order of an array 
  for (int j = size - 1; j >= 0; j--) {
    printf("%d ", arr[j]);
  }
}
