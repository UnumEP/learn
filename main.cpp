#include <stdio.h>

int baby = 15;

int* ptr_vagon_1;
int* ptr_vagon_2;
int* ptr_vagon_3;
int* ptr_vagon_4;

int main(){

	ptr_vagon_1 = &baby;
	ptr_vagon_2 = ptr_vagon_1;
	ptr_vagon_3 = &ptr_vagon_2;
	ptr_vagon_4 = ptr_vagon_3;

	int mother = ? ptr_vagon_4;

	return 0;
}
