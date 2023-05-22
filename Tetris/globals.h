#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include "libs.h"
#include "settings.h"

// DO NOT CHANGE
#define WIDTH 25				// ширина области игры
#define HEIGHT 24				// высота области игры
#define TOPLISTMAXLINELENGTH 34 // длинна топлиста
#define MAX_NUM_DIGITS 12		// максимальное количество цифр для значения положения енкодера

FILE *fileDev;

// init variables
char piece; 					// обозначение формы фигуры
char *name; 					// имя текущего игрока
char arr[MAX_NUM_DIGITS];		// массив, куда копируется положение енкодера из внешнего файла

// set flags to default values
int level,				 		// номер уровня
	score,				  		// количество баллов
	showtext = 1,		  		// показывать инструкцию с управлением справа на игровом экране
	next,				  		// идентификатор следующей фигуры
	shownext = 1,		  		// выводить на игровой экран следующую фигуру
	end,				  		// флаг окончания игры
	clrlines = 0,		  		// количество очищенных игроком линий
	startlevel,			  		// номер уровня выбраный игроком вначале
	dropped = 0,		  		// бонусные баллы
	prevEncoderPos = 0,	  		// предыдущее положение енкодера
    currentEncoderPos = 0;		// текущее положение енкодера
int fixedpoint[2] = {0}; 		

// screen is divided into three sections - left, right and center
char left[HEIGHT][WIDTH] = {0};
char center[HEIGHT][WIDTH] = {0};
char right[HEIGHT][WIDTH] = {0};

struct timeval t1, t2; // Необходимые данные о времени для дропинтервала. Структура, представляющая временной интервал с разрешением в микросекундах

#endif