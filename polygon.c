#include <stdio.h>
#include <math.h>

typedef struct Point
{
    double x, y;
}
Point;

double CrossProduct(Point a, Point b)
{
    return a.x * b.y - a.y * b.x;
}

double Area(Point vertices[] , int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        printf("Point %d : (%.2lf, %.2lf)\n",i + 1, vertices[i].x, vertices[i].y);
        sum += CrossProduct(vertices[i], vertices[(i + 1) % n]);
    }

    printf("------------------------\n");

    return fabs(sum) / 2.0;
}

int main(void)
{
    int n = 6;
    Point a, b, c, d, e, f;
    Point vertices[n];

    a.x = -2;
    a.y = -3;
    b.x = 0;
    b.y = -3;
    c.x = 3;
    c.y = 0;
    d.x = 2;
    d.y = 2;
    e.x = -1;
    e.y = 1;
    f.x = -4;
    f.y = 0;

    vertices[0] = a;
    vertices[1] = b;
    vertices[2] = c;
    vertices[3] = d;
    vertices[4] = e;
    vertices[5] = f;

    printf("Area of polygon : %.2lf\n", Area(vertices, n));

    return 0;
}