#include <iostream>

using namespace std;

#define A 3
#define B 4
#define C 5
#define Area(a, b) ((a * b) / 2)
#define Height(S, c) ((2*S)/c)
#define Equality(a, b) (1/(a*a) + 1/(b*b))
#define HeightEquality(H) (1/(H*H))

int main()
{
    cout << "Lab 13.2 Using macros and preprocessing directive" << endl;
    double a = A,
            b = B,
            c = C,
            S,
            H;

#if (a*a + b*b) == c*c
    S = Area(a, b);
    H = Height(S, c);

    cout << "1/H^2 = " << HeightEquality(H) << endl;
    cout << "1/a^2 + 1/a^2 = " << Equality(a, b) << endl;
#else
    cout << "triangle isn't rectangular";
#endif
    return 0;
}