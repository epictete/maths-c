#include <stdio.h>

typedef struct Point
{
    double x, y;
}
Point;

const int LEFT = -1, RIGHT = 1, ON_THE_LINE = 0;

double CrossProduct(Point p1, Point p2)
{
    return p1.x * p2.y - p1.y * p2.x;
}

Point Subtract(Point p1, Point p2)
{
    Point result;

    result.x = p1.x - p2.x;
    result.y = p1.y - p2.y;

    return result;
}

int GetDirection(Point a, Point b, Point p)
{
    b = Subtract(b, a);
    p = Subtract(p, a);

    double cross_product = CrossProduct(b, p);

    if (cross_product > 0) return LEFT;
    else if (cross_product < 0) return RIGHT;
    else return ON_THE_LINE;
}

int main(void)
{
    Point a, b, p;

    a.x = -30;
    a.y = 10;
    b.x = 29;
    b.y = -15;
    p.x = 15;
    p.y = 28;

    int direction = GetDirection(a, b, p);

    printf("Position of point (p) relative to segment (a, b) : ");
    if (direction == LEFT) printf("LEFT\n");
    else if (direction == RIGHT) printf("RIGHT\n");
    else printf("ON THE LINE\n");

    return 0;
}