#include <stdio.h>
#include <math.h>

#define FIX16_SCALE 32768 // ��� ������������� ������������� ����� � 16 ������
#define MI_P 3.14159265358979323846
#define samls 256
int fix16_sin[256];
int i = 0    ;
double x = 0;


int generSin() {


    for (i = 0; i < 256; i++) {
        // ����������� i � �������
        x = 2*(3.14 * i) / 256; // x �� -1 �� 1
        // ��������� ����� � ������������ � fix16
        fix16_sin[i] = (int)(sin(x) * FIX16_SCALE);
    }                                               


    return 0;
}