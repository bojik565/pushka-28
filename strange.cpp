#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e = 5, f, g, h, i;

    for (a = 1; a <= 9; a += 2)
      if (a != e)
        for (b = 2; b <= 8; b += 2)
          for (c = 1; c <= 9; c += 2)
            if (c != 5 && c != a && (a + b + c) % 3 == 0) // проверка неповторения и делимости на 3
              for (d = 2; d <= 8; d += 2)
                if (d != b && (10 * c + d) % 4 == 0) // проверка неповторения и делимости на 4
                  for (f = 2; f <= 8; f += 2)
                    if (f != b && f != d && (a + b + c + d + e + f) % 3 == 0) // проверка неповторения и делимости на 6
                      for (g = 1; g <= 9; g += 2)
                        if (g != a && g != c && g != e && (a * 1000000 + b * 100000 + c * 10000 + d * 1000 + e * 100 + f * 10 + g) % 7 == 0) // проверка неповторения и делимости на 7
                          for (h = 2; h <= 8; h += 2)
                            if (h != b && h != d && h != f && (f * 100 + g * 10 + h) % 8 == 0) // проверка неповторения и делимости на 8
                              for (i = 1; i <= 9; i += 2)
                                if (i != a && i != c && i != 5 && i != g) // проверка неповторения
                                  cout << a << b << c << d << e << f << g << h << i << 0 << 1 << endl;
}