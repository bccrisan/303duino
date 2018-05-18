#ifndef TB_303_H_
#define TB_303_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define TB_303_NUM_CELLS 3995
#define TB_303_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) TB_303_DATA [] = {0, 1,
1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 20, 22, 23, 25,
27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 48, 50, 52, 54, 57, 59, 61, 63, 65, 67,
69, 71, 73, 75, 76, 78, 79, 80, 81, 82, 83, 84, 84, 84, 85, 85, 84, 84, 83, 83,
82, 80, 79, 78, 76, 74, 72, 70, 68, 65, 63, 60, 57, 54, 51, 48, 45, 42, 39, 35,
32, 28, 25, 22, 19, 15, 12, 9, 6, 3, 0, -3, -5, -8, -10, -12, -14, -16, -18,
-19, -20, -21, -22, -23, -23, -24, -24, -24, -23, -23, -22, -21, -20, -19, -18,
-16, -14, -13, -11, -9, -6, -4, -2, 1, 3, 6, 8, 11, 13, 16, 18, 21, 23, 26, 28,
30, 32, 34, 36, 38, 39, 41, 42, 43, 44, 45, 46, 46, 46, 46, 46, 46, 46, 45, 44,
43, 42, 40, 39, 37, 35, 33, 31, 29, 27, 24, 22, 19, 17, 14, 11, 8, 5, 3, 0, -3,
-6, -9, -11, -14, -17, -19, -21, -24, -26, -28, -30, -32, -34, -35, -37, -38,
-39, -40, -41, -41, -42, -42, -42, -42, -42, -42, -41, -41, -40, -39, -38, -37,
-36, -34, -33, -31, -30, -28, -26, -25, -23, -21, -19, -17, -15, -13, -12, -10,
-8, -6, -5, -3, -2, 0, 1, 3, 4, 5, 6, 7, 7, 8, 8, 9, 9, 9, 9, 9, 8, 8, 7, 7, 6,
5, 4, 3, 2, 0, -1, -2, -4, -6, -7, -9, -11, -12, -14, -16, -18, -20, -21, -23,
-25, -27, -28, -30, -32, -33, -35, -36, -37, -38, -40, -41, -42, -42, -43, -44,
-44, -45, -45, -45, -45, -45, -45, -45, -45, -44, -44, -43, -43, -42, -41, -40,
-39, -38, -37, -36, -34, -33, -32, -31, -29, -28, -27, -25, -24, -23, -21, -20,
-19, -17, -16, -15, -14, -13, -12, -11, -10, -9, -9, -8, -7, -7, -6, -6, -6, -6,
-6, -6, -6, -6, -6, -6, -7, -7, -8, -8, -9, -9, -10, -11, -12, -12, -13, -14,
-15, -16, -17, -18, -19, -20, -20, -21, -22, -23, -24, -25, -25, -26, -27, -27,
-28, -29, -29, -30, -30, -30, -30, -31, -31, -31, -31, -31, -31, -30, -30, -30,
-29, -29, -28, -28, -27, -27, -26, -25, -25, -24, -23, -22, -21, -20, -19, -18,
-18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -9, -8, -7, -6, -6, -5, -4, -4,
-3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2,
-2, -3, -3, -4, -4, -4, -5, -5, -6, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -10,
-10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -10,
-10, -10, -10, -9, -9, -8, -8, -7, -7, -7, -6, -5, -5, -4, -4, -3, -3, -2, -2,
-1, 0, 0, 1, 2, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 20,
21, 23, 25, 26, 28, 30, 32, 34, 36, 38, 40, 42, 45, 47, 49, 51, 54, 56, 58, 60,
62, 64, 67, 69, 70, 72, 74, 76, 77, 79, 80, 81, 82, 83, 83, 84, 84, 85, 85, 84,
84, 84, 83, 82, 81, 80, 78, 77, 75, 73, 71, 69, 66, 64, 61, 58, 55, 52, 49, 46,
43, 40, 36, 33, 30, 26, 23, 20, 16, 13, 10, 7, 4, 1, -2, -4, -7, -9, -11, -14,
-15, -17, -19, -20, -21, -22, -23, -23, -24, -24, -24, -24, -23, -22, -22, -21,
-19, -18, -17, -15, -13, -11, -9, -7, -5, -3, 0, 2, 5, 7, 10, 12, 15, 17, 20,
22, 25, 27, 29, 31, 34, 35, 37, 39, 40, 42, 43, 44, 45, 45, 46, 46, 46, 46, 46,
46, 45, 44, 43, 42, 41, 39, 38, 36, 34, 32, 30, 28, 25, 23, 20, 17, 15, 12, 9,
6, 4, 1, -2, -5, -8, -10, -13, -16, -18, -21, -23, -25, -27, -29, -31, -33, -35,
-36, -37, -39, -40, -40, -41, -42, -42, -42, -42, -42, -42, -41, -41, -40, -39,
-38, -37, -36, -35, -33, -32, -30, -29, -27, -25, -23, -21, -20, -18, -16, -14,
-12, -10, -9, -7, -5, -4, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 9, 9, 9, 9, 8,
8, 8, 7, 6, 5, 4, 3, 2, 1, -1, -2, -3, -5, -7, -8, -10, -12, -14, -15, -17, -19,
-21, -23, -24, -26, -28, -29, -31, -33, -34, -35, -37, -38, -39, -40, -41, -42,
-43, -44, -44, -45, -45, -45, -45, -45, -45, -45, -45, -44, -44, -43, -43, -42,
-41, -40, -39, -38, -37, -36, -35, -34, -32, -31, -30, -28, -27, -26, -24, -23,
-22, -20, -19, -18, -17, -15, -14, -13, -12, -11, -10, -10, -9, -8, -8, -7, -7,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -7, -7, -7, -8, -9, -9, -10, -11, -11, -12,
-13, -14, -15, -16, -17, -17, -18, -19, -20, -21, -22, -23, -24, -24, -25, -26,
-27, -27, -28, -28, -29, -29, -30, -30, -30, -31, -31, -31, -31, -31, -31, -30,
-30, -30, -30, -29, -29, -28, -28, -27, -26, -26, -25, -24, -23, -22, -21, -21,
-20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -11, -10, -9, -8, -7, -7, -6,
-5, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -2, -2, -3, -3, -3, -4, -4, -5, -5, -5, -6, -6, -7, -7, -8, -8, -8, -9,
-9, -9, -10, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -10, -10, -10, -10, -9, -9, -8, -8, -8, -7, -7, -6, -6, -5, -5, -4,
-3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 14,
15, 16, 18, 19, 21, 22, 24, 26, 28, 29, 31, 33, 35, 37, 40, 42, 44, 46, 48, 51,
53, 55, 57, 60, 62, 64, 66, 68, 70, 72, 73, 75, 77, 78, 79, 81, 82, 83, 83, 84,
84, 85, 85, 84, 84, 84, 83, 82, 81, 80, 79, 77, 75, 74, 71, 69, 67, 64, 62, 59,
56, 53, 50, 47, 44, 41, 37, 34, 31, 27, 24, 21, 17, 14, 11, 8, 5, 2, -1, -4, -6,
-9, -11, -13, -15, -17, -18, -20, -21, -22, -23, -23, -24, -24, -24, -24, -23,
-23, -22, -21, -20, -19, -17, -16, -14, -12, -10, -8, -6, -3, -1, 1, 4, 6, 9,
12, 14, 17, 19, 22, 24, 26, 29, 31, 33, 35, 37, 38, 40, 41, 42, 44, 44, 45, 46,
46, 46, 46, 46, 46, 45, 45, 44, 43, 41, 40, 38, 37, 35, 33, 31, 28, 26, 24, 21,
18, 16, 13, 10, 7, 4, 2, -1, -4, -7, -10, -12, -15, -17, -20, -22, -25, -27,
-29, -31, -33, -34, -36, -37, -38, -39, -40, -41, -42, -42, -42, -42, -42, -42,
-42, -41, -40, -40, -39, -38, -36, -35, -34, -32, -31, -29, -27, -26, -24, -22,
-20, -18, -16, -15, -13, -11, -9, -7, -6, -4, -2, -1, 0, 2, 3, 4, 5, 6, 7, 7, 8,
8, 9, 9, 9, 9, 9, 8, 8, 7, 6, 6, 5, 4, 2, 1, 0, -1, -3, -5, -6, -8, -9, -11,
-13, -15, -17, -18, -20, -22, -24, -26, -27, -29, -31, -32, -34, -35, -36, -38,
-39, -40, -41, -42, -43, -43, -44, -44, -45, -45, -45, -45, -45, -45, -45, -45,
-44, -44, -43, -42, -42, -41, -40, -39, -38, -36, -35, -34, -33, -31, -30, -29,
-27, -26, -25, -23, -22, -21, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10,
-9, -8, -8, -7, -7, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -7, -7, -8, -8, -9,
-10, -10, -11, -12, -13, -14, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23,
-23, -24, -25, -26, -26, -27, -28, -28, -29, -29, -30, -30, -30, -30, -31, -31,
-31, -31, -31, -31, -30, -30, -30, -29, -29, -28, -28, -27, -26, -26, -25, -24,
-23, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -13, -12, -11, -10,
-9, -8, -8, -7, -6, -5, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -3, -3, -3, -4, -4, -4, -5, -5, -6, -6, -7,
-7, -7, -8, -8, -9, -9, -9, -10, -10, -10, -10, -11, -11, -11, -11, -11, -11,
-11, -11, -11, -11, -11, -11, -10, -10, -10, -10, -9, -9, -9, -8, -8, -7, -7,
-6, -6, -5, -5, -4, -4, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 4, 5, 5, 6, 7, 8,
9, 10, 11, 12, 13, 15, 16, 17, 19, 20, 22, 23, 25, 27, 29, 31, 33, 35, 37, 39,
41, 43, 45, 48, 50, 52, 54, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 76, 78, 79,
80, 81, 82, 83, 84, 84, 84, 85, 85, 84, 84, 83, 83, 82, 80, 79, 78, 76, 74, 72,
70, 68, 65, 63, 60, 57, 54, 51, 48, 45, 42, 38, 35, 32, 28, 25, 22, 18, 15, 12,
9, 6, 3, 0, -3, -5, -8, -10, -12, -14, -16, -18, -19, -20, -21, -22, -23, -23,
-24, -24, -24, -23, -23, -22, -21, -20, -19, -18, -16, -14, -13, -11, -8, -6,
-4, -2, 1, 3, 6, 8, 11, 13, 16, 18, 21, 23, 26, 28, 30, 32, 34, 36, 38, 39, 41,
42, 43, 44, 45, 46, 46, 46, 46, 46, 46, 45, 45, 44, 43, 42, 40, 39, 37, 35, 33,
31, 29, 27, 24, 22, 19, 17, 14, 11, 8, 5, 3, 0, -3, -6, -9, -11, -14, -17, -19,
-22, -24, -26, -28, -30, -32, -34, -35, -37, -38, -39, -40, -41, -41, -42, -42,
-42, -42, -42, -42, -41, -41, -40, -39, -38, -37, -36, -34, -33, -31, -30, -28,
-26, -24, -23, -21, -19, -17, -15, -13, -12, -10, -8, -6, -5, -3, -1, 0, 1, 3,
4, 5, 6, 7, 7, 8, 8, 9, 9, 9, 9, 9, 8, 8, 7, 7, 6, 5, 4, 3, 2, 0, -1, -2, -4,
-6, -7, -9, -11, -12, -14, -16, -18, -20, -21, -23, -25, -27, -28, -30, -32,
-33, -35, -36, -37, -38, -40, -41, -42, -42, -43, -44, -44, -45, -45, -45, -45,
-45, -45, -45, -45, -44, -44, -43, -43, -42, -41, -40, -39, -38, -37, -36, -34,
-33, -32, -31, -29, -28, -27, -25, -24, -23, -21, -20, -19, -17, -16, -15, -14,
-13, -12, -11, -10, -9, -9, -8, -7, -7, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6,
-7, -7, -8, -8, -9, -9, -10, -11, -12, -12, -13, -14, -15, -16, -17, -18, -19,
-20, -21, -21, -22, -23, -24, -25, -26, -26, -27, -28, -28, -29, -29, -30, -30,
-30, -30, -31, -31, -31, -31, -31, -31, -30, -30, -30, -29, -29, -28, -28, -27,
-27, -26, -25, -24, -24, -23, -22, -21, -20, -19, -18, -17, -17, -16, -15, -14,
-13, -12, -11, -10, -9, -9, -8, -7, -6, -6, -5, -4, -4, -3, -3, -2, -2, -2, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -4, -4, -4,
-5, -5, -6, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -10, -10, -10, -11, -11,
-11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -10, -10, -10, -9, -9,
-9, -8, -8, -7, -7, -7, -6, -5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 0, 1, 2, 2,
3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 20, 21, 23, 25, 26, 28,
30, 32, 34, 36, 38, 40, 42, 45, 47, 49, 51, 54, 56, 58, 60, 62, 65, 67, 69, 70,
72, 74, 76, 77, 79, 80, 81, 82, 83, 83, 84, 84, 85, 85, 84, 84, 84, 83, 82, 81,
80, 78, 77, 75, 73, 71, 68, 66, 64, 61, 58, 55, 52, 49, 46, 43, 39, 36, 33, 29,
26, 23, 19, 16, 13, 10, 7, 4, 1, -2, -4, -7, -9, -12, -14, -15, -17, -19, -20,
-21, -22, -23, -23, -24, -24, -24, -24, -23, -22, -22, -21, -19, -18, -17, -15,
-13, -11, -9, -7, -5, -2, 0, 2, 5, 7, 10, 12, 15, 18, 20, 22, 25, 27, 29, 32,
34, 35, 37, 39, 40, 42, 43, 44, 45, 45, 46, 46, 46, 46, 46, 46, 45, 44, 43, 42,
41, 39, 38, 36, 34, 32, 30, 28, 25, 23, 20, 17, 15, 12, 9, 6, 3, 1, -2, -5, -8,
-11, -13, -16, -18, -21, -23, -25, -28, -30, -31, -33, -35, -36, -38, -39, -40,
-40, -41, -42, -42, -42, -42, -42, -42, -41, -41, -40, -39, -38, -37, -36, -35,
-33, -32, -30, -29, -27, -25, -23, -21, -20, -18, -16, -14, -12, -10, -9, -7,
-5, -3, -2, 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 9, 9, 9, 9, 8, 8, 8, 7, 6, 5, 4, 3,
2, 1, -1, -2, -4, -5, -7, -8, -10, -12, -14, -15, -17, -19, -21, -23, -24, -26,
-28, -29, -31, -33, -34, -36, -37, -38, -39, -40, -41, -42, -43, -44, -44, -45,
-45, -45, -45, -45, -45, -45, -45, -44, -44, -43, -43, -42, -41, -40, -39, -38,
-37, -36, -35, -34, -32, -31, -30, -28, -27, -26, -24, -23, -22, -20, -19, -18,
-17, -15, -14, -13, -12, -11, -10, -10, -9, -8, -8, -7, -7, -6, -6, -6, -6, -6,
-6, -6, -6, -6, -7, -7, -7, -8, -9, -9, -10, -11, -11, -12, -13, -14, -15, -16,
-17, -17, -18, -19, -20, -21, -22, -23, -24, -24, -25, -26, -27, -27, -28, -28,
-29, -29, -30, -30, -30, -31, -31, -31, -31, -31, -31, -30, -30, -30, -30, -29,
-29, -28, -28, -27, -26, -26, -25, -24, -23, -22, -21, -21, -20, -19, -18, -17,
-16, -15, -14, -13, -12, -11, -10, -10, -9, -8, -7, -7, -6, -5, -5, -4, -4, -3,
-3, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -3,
-3, -3, -4, -4, -5, -5, -5, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -10, -10,
-10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -10, -10,
-10, -10, -9, -9, -8, -8, -8, -7, -7, -6, -6, -5, -5, -4, -3, -3, -2, -2, -1,
-1, 0, 1, 1, 2, 3, 3, 4, 5, 6, 7, 7, 8, 9, 10, 11, 13, 14, 15, 16, 18, 19, 21,
22, 24, 26, 28, 29, 31, 33, 35, 37, 40, 42, 44, 46, 48, 51, 53, 55, 57, 60, 62,
64, 66, 68, 70, 72, 73, 75, 77, 78, 79, 81, 82, 83, 83, 84, 84, 85, 85, 84, 84,
84, 83, 82, 81, 80, 79, 77, 75, 73, 71, 69, 67, 64, 62, 59, 56, 53, 50, 47, 44,
41, 37, 34, 31, 27, 24, 21, 17, 14, 11, 8, 5, 2, -1, -4, -6, -9, -11, -13, -15,
-17, -18, -20, -21, -22, -23, -23, -24, -24, -24, -24, -23, -23, -22, -21, -20,
-19, -17, -15, -14, -12, -10, -8, -6, -3, -1, 2, 4, 7, 9, 12, 14, 17, 19, 22,
24, 26, 29, 31, 33, 35, 37, 38, 40, 41, 43, 44, 45, 45, 46, 46, 46, 46, 46, 46,
45, 45, 44, 43, 41, 40, 38, 37, 35, 33, 31, 28, 26, 23, 21, 18, 16, 13, 10, 7,
4, 2, -1, -4, -7, -10, -12, -15, -18, -20, -22, -25, -27, -29, -31, -33, -34,
-36, -37, -38, -39, -40, -41, -42, -42, -42, -42, -42, -42, -42, -41, -40, -40,
-39, -38, -36, -35, -34, -32, -31, -29, -27, -26, -24, -22, -20, -18, -16, -15,
-13, -11, -9, -7, -6, -4, -2, -1, 0, 2, 3, 4, 5, 6, 7, 7, 8, 8, 9, 9, 9, 9, 9,
8, 8, 7, 6, 6, 5, 4, 2, 1, 0, -2, -3, -5, -6, -8, -10, -11, -13, -15, -17, -18,
-20, -22, -24, -26, -27, -29, -31, -32, -34, -35, -36, -38, -39, -40, -41, -42,
-43, -43, -44, -45, -45, -45, -45, -45, -45, -45, -45, -45, -44, -44, -43, -42,
-41, -41, -40, -39, -38, -36, -35, -34, -33, -31, -30, -29, -27, -26, -25, -23,
-22, -21, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -8, -7, -7,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -7, -7, -8, -8, -9, -10, -10, -11, -12,
-13, -14, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23, -23, -24, -25, -26,
-26, -27, -28, -28, -29, -29, -30, -30, -30, -30, -31, -31, -31, -31, -31, -30,
-30, -30, -30, -29, -29, -28, -28, -27, -26, -26, -25, -24, -23, -23, -22, -21,
-20, -19, -18, -17, -16, -15, -14, -13, -13, -12, -11, -10, -9, -8, -8, -7, -6,
-5, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -3, -3, -3, -4, -4, -4, -5, -5, -6, -6, -7, -7, -7, -8, -8, -9,
-9, -9, -10, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -10, -10, -10, -10, -9, -9, -9, -8, -8, -7, -7, -6, -6, -5, -5, -4,
-4, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13,
15, 16, 17, 19, 20, 22, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 48, 50,
52, 54, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 76, 78, 79, 80, 81, 82, 83, 84,
84, 84, 85, 85, 84, 84, 83, 83, 82, 80, 79, 78, 76, 74, 72, 70, 68, 65, 63, 60,
57, 54, 51, 48, 45, 42, 38, 35, 32, 28, 25, 22, 18, 15, 12, 9, 6, 3, 0, -3, -5,
-8, -10, -12, -14, -16, -18, -19, -20, -21, -22, -23, -23, -24, -24, -24, -23,
-23, -22, -21, -20, -19, -18, -16, -14, -12, -11, -8, -6, -4, -2, 1, 3, 6, 8,
11, 13, 16, 18, 21, 23, 26, 28, 30, 32, 34, 36, 38, 39, 41, 42, 43, 44, 45, 46,
46, 46, 46, 46, 46, 45, 45, 44, 43, 42, 40, 39, 37, 35, 33, 31, 29, 27, 24, 22,
19, 16, 14, 11, 8, 5, 2, 0, -3, -6, -9, -11, -14, -17, -19, -22, -24, -26, -28,
-30, -32, -34, -35, -37, -38, -39, -40, -41, -41, -42, -42, -42, -42, -42, -42,
-41, -41, -40, -39, -38, -37, -36, -34, -33, -31, -30, -28, -26, -24, -23, -21,
-19, -17, -15, -13, -11, -10, -8, -6, -5, -3, -1, 0, 1, 3, 4, 5, 6, 7, 7, 8, 8,
9, 9, 9, 9, 9, 8, 8, 7, 7, 6, 5, 4, 3, 2, 0, -1, -3, -4, -6, -7, -9, -11, -12,
-14, -16, -18, -20, -22, -23, -25, -27, -28, -30, -32, -33, -35, -36, -37, -39,
-40, -41, -42, -42, -43, -44, -44, -45, -45, -45, -45, -45, -45, -45, -45, -44,
-44, -43, -43, -42, -41, -40, -39, -38, -37, -36, -34, -33, -32, -31, -29, -28,
-26, -25, -24, -22, -21, -20, -19, -17, -16, -15, -14, -13, -12, -11, -10, -9,
-9, -8, -7, -7, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -7, -7, -8, -8, -9, -9,
-10, -11, -12, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -21, -22, -23,
-24, -25, -26, -26, -27, -28, -28, -29, -29, -30, -30, -30, -30, -31, -31, -31,
-31, -31, -31, -30, -30, -30, -29, -29, -28, -28, -27, -27, -26, -25, -24, -24,
-23, -22, -21, -20, -19, -18, -17, -17, -16, -15, -14, -13, -12, -11, -10, -9,
-9, -8, -7, -6, -6, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -4, -4, -4, -5, -5, -6, -6, -6, -7,
-7, -8, -8, -8, -9, -9, -9, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -11, -11, -11, -11, -10, -10, -10, -9, -9, -9, -8, -8, -7, -7, -7, -6,
-5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 0, 1, 2, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10,
11, 12, 13, 14, 15, 17, 18, 20, 21, 23, 25, 26, 28, 30, 32, 34, 36, 38, 40, 43,
45, 47, 49, 51, 54, 56, 58, 60, 63, 65, 67, 69, 71, 72, 74, 76, 77, 79, 80, 81,
82, 83, 84, 84, 84, 85, 85, 84, 84, 84, 83, 82, 81, 80, 78, 76, 75, 73, 71, 68,
66, 63, 61, 58, 55, 52, 49, 46, 43, 39, 36, 33, 29, 26, 23, 19, 16, 13, 10, 7,
4, 1, -2, -5, -7, -9, -12, -14, -16, -17, -19, -20, -21, -22, -23, -23, -24,
-24, -24, -23, -23, -22, -22, -21, -19, -18, -17, -15, -13, -11, -9, -7, -5, -2,
0, 2, 5, 7, 10, 13, 15, 18, 20, 23, 25, 27, 29, 32, 34, 36, 37, 39, 40, 42, 43,
44, 45, 45, 46, 46, 46, 46, 46, 46, 45, 44, 43, 42, 41, 39, 38, 36, 34, 32, 30,
27, 25, 23, 20, 17, 15, 12, 9, 6, 3, 1, -2, -5, -8, -11, -13, -16, -18, -21,
-23, -25, -28, -30, -31, -33, -35, -36, -38, -39, -40, -41, -41, -42, -42, -42,
-42, -42, -42, -41, -41, -40, -39, -38, -37, -36, -35, -33, -32, -30, -29, -27,
-25, -23, -21, -20, -18, -16, -14, -12, -10, -8, -7, -5, -3, -2, 0, 1, 2, 3, 4,
5, 6, 7, 8, 8, 9, 9, 9, 9, 9, 8, 8, 7, 7, 6, 5, 4, 3, 2, 1, -1, -2, -4, -5, -7,
-8, -10, -12, -14, -16, -17, -19, -21, -23, -24, -26, -28, -30, -31, -33, -34,
-36, -37, -38, -39, -40, -41, -42, -43, -44, -44, -45, -45, -45, -45, -45, -45,
-45, -45, -44, -44, -43, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -32,
-31, -30, -28, -27, -26, -24, -23, -22, -20, -19, -18, -17, -15, -14, -13, -12,
-11, -10, -10, -9, -8, -8, -7, -7, -6, -6, -6, -6, -6, -6, -6, -6, -6, -7, -7,
-7, -8, -9, -9, -10, -11, -11, -12, -13, -14, -15, -16, -17, -18, -18, -19, -20,
-21, -22, -23, -24, -25, -25, -26, -27, -27, -28, -28, -29, -29, -30, -30, -30,
-31, -31, -31, -31, -31, -31, -30, -30, -30, -29, -29, -29, -28, -27, -27, -26,
-25, -25, -24, -23, -22, -21, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12,
-11, -10, -10, -9, -8, -7, -7, -6, -5, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -4, -4, -5, -5,
-5, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -10, -10, -10, -10, -11, -11, -11,
-11, -11, -11, -11, -11, -11, -11, -11, -11, -10, -10, -10, -10, -9, -9, -8, -8,
-8, -7, -7, -6, -6, -5, -5, -4, -3, -3, -2, -2, -1, -1, };

#endif /* TB_303_H_ */
