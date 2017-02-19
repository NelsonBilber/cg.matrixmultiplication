#include <iostream>
#include <string>
#include <math.h>

using namespace std;


void print(string name, int matrix[3][3] )
{
    cout << name << endl;
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            cout << matrix[i][j]  << " ";
        }
        cout << endl;
    }
    cout << endl;
}


//TRANSLATION
void translation()
{
    cout << "TRANSLATION" << endl;
    cout << "-----------" << endl;
    
    int total = 0;
    
    int movement [3][3]  =  {
        {1,0,0},
        {0,1,2},
        {0,0,1}};

    
    int currentPosition [3][3] = {
        {0,2,1},
        {0,0,3},
        {1,1,1}};
    
    print ("=> A (movement)", movement);
    print ("=> B (current position)", currentPosition);
    
    //Metrix multiplication
    for(int k = 0; k < 3; k++)
    {
        for(int i = 0; i < 3; i++)
        {
            total = 0;
            for(int j = 0; j < 3; j++)
            {
                int num = movement[i][j] * currentPosition[j][k];
                total += num;
                cout << "(" << i << "," << j << ")" << "(" << j << "," << k<< ")" << " = " << total << endl;
            }
            currentPosition[i][k] = total;
            cout << "final result for index (" << i << ", "<< k <<") = " << total << endl;
        }
        cout << endl;
    }
    print("=> Result", currentPosition);
}


//ROTATION
void rotation()
{
    cout << "ROTATION RIGHT" << endl;
    cout << "--------------" << endl;
    
    
    double x[4];
    int arrayPosition = 0;
    float angle = 90.0f;
    
    int rotation [3][3]  =  {
        {0,-1,0},
        {0,0,0},
        {0,0,1}};
    
    
    int currentPosition [3][3] = {
        {0,2,1},
        {0,0,3},
        {1,1,1}};
    
    print ("=> F (rotation)", rotation);
    print ("=> G (current position)", currentPosition);
    
    //center point
    //int centerPointX = (((currentPosition[0][1] - currentPosition[0][0]))/2);
    //int centerPointY = (((currentPosition[1][2] - currentPosition[1][1]))/2);
    
    //Rotate right
    x[0] = cos(angle);
    x[1] = sin(angle);
    x[2] = sinh(angle);
    x[3] = cos(angle);
    
    for(int i = 0; i < 2; i++)
    {
        for(int k = 0; k < 2; k++)
        {
            rotation [i][k] = static_cast<int>(x[arrayPosition]);
            arrayPosition++;
        }
    }
    
    print("prepare rotation", rotation);
}

int main(int argc, char *argv[])
{
    translation();
    rotation();
	return 0;
}
