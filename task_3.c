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
	int ans = get_perimeter(val, 5); // вызов функции @2@, потом передача
					 // значения в ans @8@

	printf("периметр = %d\n", ans);

	return 0;
}

// определение функций
int get_perimeter(int parameter_1,int parameter_2){
	int c = 0; // @3@
	doubling_sides(&parameter_1, &parameter_2); // вызов функции @4@
	c = (parameter_1 + parameter_2)*2; // @7@
	return c;
}

void doubling_sides(int* side_1, int* side_2){
	*side_1 =  (*side_1) * 2; //@5@
	*side_2 = (*side_2) * 2;  //@6@
}


/* 
Все выкладки, предварительные расчеты
не писать, придерживаться шаблона.
как это расписать? Шаблон
1 строка: Записывается номер выражения @X@, где X - номер выражения 
2 строка: Записывается само выражение, строка из кода как есть
3 строка: Какие изменения произошли в памяти, какое значение появилось в ячеки или какие 
ячейки были созданы

Приме использования шаблона.
@2@:
int ans = get_perimeter(val, 5);
int get_perimeter::parameter_1 = val
int get_perimeter::parameter_2 = 5

get_perimeter::parameter_1 value: 2 addr: 0x0002
get_perimeter::parameter_2 value: 5 addr: 0x0003

@6@:
*side_2 = (*side_2) * 2;
get_perimeter::parameter_2 value: 10 addr: 0x0003
*/
