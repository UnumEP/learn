#include <stdint.h>
#include <stdio.h>


//распиши все действия по ячейкам памяти, @X@ - обозначается номер действия,
// где x - номер действия

//написать как агрументы функции передаются параметрам функции

// объявление функций
int get_perimeter(int,int);
void doubling_sides(int*,int*);

int main(){

	int val = 2; // @1@
	int ans = get_perimeter(val, 5); // вызов функции до ее определения @2@

	printf("периметр = %d\n", ans);

	return 0;
}

// определение функций
int get_perimeter(int parameter_1,int parameter_2){
	int c = 0; // @3@
	doubling_sides(&parameter_1, &parameter_2); // вызов функции до ее определения @4@
	c = (parameter_1 + parameter_2)*2; // @5@
	return c; //@8@
}

void doubling_sides(int* side_1, int* side_2){
	*side_1 =  (*side_1) * 2; //@6@
	*side_2 = (*side_2) * 2;  //@7@
}
