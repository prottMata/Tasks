#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

struct Point
{
    Point(float x, float y): x{x}, y{y} {}
    float x;
    float y;
};

int checkPoint(float r, Point circle, Point point){
    float m = pow(point.x - circle.x,2) + pow(point.y - circle.y,2) - pow(r,2);
    int result;
    if(m == 0)
        result = 0;
    else if(m < 0)
        result = 1;
    else
        result = 2;
    return result;
}

int main(int argc, char** argv){
    if (argc < 3) {
        cerr << "Введите названия файлов!" << endl;
        return 1;
    }
    float r;
    Point centerp{0,0};
    ifstream file1(argv[1]);
    if (file1.is_open()){
        file1 >> centerp.x >> centerp.y >> r;
    }
    file1.close();
    vector<Point> points;
    ifstream file2(argv[2]);
    if (file2.is_open())
    {
        float x, y;
        while (file2 >> x >> y)
        {
            points.push_back(Point{x, y});
        }
    }
    file2.close();
    for (const Point& point: points)
    {
        cout << checkPoint(r, centerp, point) <<endl;
    }
    return 0;
}