/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

#define KEYMAP( \
	K000, K001, K002, K003, K004, \
	K010, K011, K012,       K014, \
	K020, K021, K022, K023,       \
	K030, K031, K032, K033, K034, \
	K040, K041, K042, K043,       \
	K050, K051, K052, K053, K054, \
	K060, K061, K062, K063,       \
	K070, K071, K072, K073, K074, \
	K080, K081, K082, K083,       \
	K090, K091, K092, K093, K094, \
	K100, K101, K102, K103, K104, \
	K110, K111,       K113, K114, \
	K120, K121, K122, K123, K124, \
	      K131, K132, K133, K134, \
	K140, K141, K142, K143, K144, \
	K150, K151, K152, K153, K154  \
) { \
	{ K000,  K001,  K002,  K003,  K004 }, \
	{ K010,  K011,  K012,  KC_NO, K014 }, \
	{ K020,  K021,  K022,  K023,  KC_NO }, \
	{ K030,  K031,  K032,  K033,  K034 }, \
	{ K040,  K041,  K042,  K043,  KC_NO }, \
	{ K050,  K051,  K052,  K053,  K054 }, \
	{ K060,  K061,  K062,  K063,  KC_NO }, \
	{ K070,  K071,  K072,  K073,  K074 }, \
	{ K080,  K081,  K082,  K083,  KC_NO }, \
	{ K090,  K091,  K092,  K093,  K094 }, \
	{ K100,  K101,  K102,  K103,  K104 }, \
	{ K110,  K111,  KC_NO, K113,  K114 }, \
	{ K120,  K121,  K122,  K123,  K124 }, \
	{ KC_NO, K131,  K132,  K133,  K134 }, \
	{ K140,  K141,  K142,  K143,  K144 }, \
	{ K150,  K151,  K152,  K153,  K154 }  \
}
