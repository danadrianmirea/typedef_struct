#include <iostream>
#include <vector>

#include <string.h>

using namespace std;

typedef int Integer;

typedef struct Point 
{
    double x;
    double y;
    double z;
} Point;

int main()
{
    char str[] = "This is an example string";
    char* ptr = strtok(str, " ");

    Integer i;
    i = 3;

    Point p = {2.3, 7.2};

    printf("%.2f %2.f %2.f\n", p.x, p.y, p.z);

    Point p2 = {3.0, .z = 5.0};
    printf("%.2f %2.f %2.f\n", p2.x, p2.y, p2.z);

    return 0;
}