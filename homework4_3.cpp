#include <iostream>
#include <Windows.h>

using namespace std;


//Треугольник
class Triangle
{
protected:
    string name = "Треугольник";
    int side = 3;
    bool isTrue = true;

    int a = 1, b = 2, c = 3;
    int A = 60, B = 130, C = 80;

public:
    void PrintInfo()
    {
        cout << name << ":" << endl;
        if (isTrue)
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Число сторон: " << side << endl;
        cout << "Стороны: " << a << ", " << b << ", " << c << endl;
        cout << "Углы: " << A << ", " << B << ", " << C << "\n\n";
    }

};

//Прямоугольный треугольник
class RecTriangle : public Triangle
{
public:
    RecTriangle()
    {
        C = 80;
        name = "Прямоугольный треугольник";

        if (C != 90)
        {
            isTrue = false;
        }
    }

};

//Равнобедренный треугольник
class RBTriangle : public Triangle
{
public:
    RBTriangle()
    {
        a = c;
        A = C;

        if (a != c && A != C)
        {
            isTrue = false;
        }

        name = "Равнобедренный треугольник";
    }
};

//Равносторонний треугольник
class RSTriangle : public Triangle
{
public:
    RSTriangle()
    {
        a = b;
        c = b;

        A = B;
        C = B;

        if (a != b && c != b && A != B && C != B)
        {
            isTrue = false;
        }

        name = "Равносторонний треугольник";
    }
};

//Четырехугольник
class Quadro
{
protected:
    string name = "Четырехугольник";
    int side = 4;
    bool isTrue = true;

    int a = 1, b = 2, c = 3, d = 4;
    int A = 80, B = 90, C = 100, D = 110;
public:
    void PrintInfo()
    {
        cout << name << ":" << endl;
        if (isTrue)
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Число сторон: " << side << endl;
        cout << "Стороны: " << a << ", " << b << ", " << c << ", " << d << endl;
        cout << "Углы: " << A << ", " << B << ", " << C << ", " << D << "\n\n";
    }
};

//Параллелограмм
class Parallelogram : public Quadro
{
public:
    Parallelogram()
    {
        a = c;
        b = d;

        A = C;
        B = D;

        if (a != c && b != d && A != C && B != D)
        {
            isTrue = false;
        }

        name = "Параллелограмм";
    }
};

//Прямоугольник
class RRectangle : public Parallelogram
{
public:
    RRectangle()
    {
        a = c;
        b = d;

        A = 90;
        B = 90;
        C = 90;
        D = 90;

        if (a != c && b != d && A != 90 && B != 90 && C != 90 && D != 90)
        {
            isTrue = false;
        }

        name = "Прямоугольник";
    }
};

//Квадрат
class Square : public RRectangle
{
public:
    Square()
    {
        a = b;
        c = b;
        d = b;

        A = B;
        C = B;
        D = B;

        if (a != b && c != b && d != b && A != B && C != B && D != B)
        {
            isTrue = false;
        }

        name = "Квадрат";
    }
};

//Ромб
class Rhomb : public Parallelogram
{
public:
    Rhomb()
    {
        a = b;
        c = b;
        d = b;

        A = C;
        B = D;

        if (a != b && c != b && d != b && A != C && B != D)
        {
            isTrue = false;
        }

        name = "Ромб";
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*Triangle triangle;
    triangle.PrintInfo();

    RecTriangle recTriangle;
    recTriangle.PrintInfo();

    RBTriangle rbTriangle;
    rbTriangle.PrintInfo();

    RSTriangle rsTriangle;
    rsTriangle.PrintInfo();

    Quadro quadro;
    quadro.PrintInfo();

    Parallelogram parallelogram;
    parallelogram.PrintInfo();

    RRectangle rRectangle;
    rRectangle.PrintInfo();

    Square square;
    square.PrintInfo();

    Rhomb rhomb;
    rhomb.PrintInfo();*/

    Triangle tr;
    tr.PrintInfo();

    Triangle* triangle;

    RecTriangle recTriangle;
    triangle = &recTriangle;
    triangle->PrintInfo();

    RBTriangle rbTriangle;
    triangle = &rbTriangle;
    triangle->PrintInfo();

    RSTriangle rsTriangle;
    triangle = &rsTriangle;
    triangle->PrintInfo();

    Quadro* quadro;

    Quadro quad;
    quad.PrintInfo();

    Parallelogram parallelogram;
    quadro = &parallelogram;
    quadro->PrintInfo();

    RRectangle rRectangle;
    quadro = &rRectangle;
    quadro->PrintInfo();

    Square square;
    quadro = &square;
    quadro->PrintInfo();

    Rhomb rhomb;
    quadro = &rhomb;
    quadro->PrintInfo();
}