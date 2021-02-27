#include <stdio.h>
#include <math.h>

typedef struct Point
{
    double x;
    double y;
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
        printf("Point %d : (%.2lf, %.2lf)\n", i + 1, vertices[i].x, vertices[i].y);
        sum += CrossProduct(vertices[i], vertices[(i + 1) % n]);
    }
    printf("------------------------\n");
    return fabs(sum) / 2.0;
}

int main(void)
{
    int n = 6;
    Point vertices[n];
    Point a;
    a.x = -2;
    a.y = -3;
    vertices[0] = a;
    Point b;
    b.x = 0;
    b.y = -3;
    vertices[1] = b;
    Point c;
    c.x = 3;
    c.y = 0;
    vertices[2] = c;
    Point d;
    d.x = 2;
    d.y = 2;
    vertices[3] = d;
    Point e;
    e.x = -1;
    e.y = 1;
    vertices[4] = e;
    Point f;
    f.x = -4;
    f.y = 0;
    vertices[5] = f;
    printf("Area of polygon : %.2lf\n", Area(vertices, n));
    return 0;
}