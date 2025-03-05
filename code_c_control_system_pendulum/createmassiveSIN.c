//#include "createmassiveSIN.h"

int fix16_sin[256];

int generSin() {


    for (int i = 0; i < 256; i++) {
        // ����������� i � �������
        double x = (2 * M_PI * i) / 256; // x �� 0 �� 2?
        // ��������� ����� � ������������ � fix16
        fix16_sin[i] = (int)(sin(x) * FIX16_SCALE);
    }

    // ������� ������ ��� ��������
    for (int i = 0; i < 256; i++) {
        printf("%d, ", fix16_sin[i]);
    }

    return 0;
}