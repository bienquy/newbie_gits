#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
struct person {
	char name[30];
	int age;
};

using namespace std;

int main() {
	int number;
	char buff[30]; int tuoi;
	person *point;
	scanf("%d", &number);
	printf("%d\n", number);
	 point = (person *)malloc(sizeof(point)*number);
	 if (point == NULL)
		 return 1;
	 for (int i = 0; i < number; i++) {
		 scanf("%s", &buff);
		 scanf("%d", &tuoi);
		 //*(point + i)->name = *buff;
		 strcpy((point + i)->name, buff);
		 (point + i)->age = tuoi;
	 }

	 for (int i = 0; i < number; i++) {
		 cout << (point + i)->name << " " << (point + i)->age << endl;
	 }

	 free(point);
	return 0;
}