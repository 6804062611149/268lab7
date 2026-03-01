#include <stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;

    functionM(); // ไม่รับ parameter return ค่า double
    a = functionM(); // functionM() return double แต่ a เป็น int
    
    b = functionN(a, b); // b เป็น int จะถูกแปลงเป็น double implicit warning

    r = functionO(r, a, s, b); // implicit warning

    s = functionP(a, b, c, d, e); // Error ส่ง argument 5 ตัว แต่ Prototype กำหนดไว้แค่ 4 ตัว (Too many arguments)

    u = functionM(); // functionM() return double u เป็น double
    
    c = d + functionN(r, s); // r เป็น double ทศนิยม r จะถูกตัด

    t = s * functionO(r, a, r, a); // functionO return double และ s เป็น double คูณกันได้

    a = v + functionP(r, s, t, t); // Wrong argument type

    functionP(functionN(a, a), s, t, t+r); // Wrong argument type

    v = functionP(functionN(a, a), s, t, t+r); // Wrong argument type

    return 0;
}
