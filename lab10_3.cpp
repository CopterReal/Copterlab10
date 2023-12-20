#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>
#include<cstdlib>

using namespace std;
int main()
{
        double count = 0;
        double sum = 0;
        double sum_of_square = 0;
        double SD;
        string textline;
        ifstream source("score.txt");
        while (getline(source,textline))
        {
                sum += atof(textline.c_str());
                sum_of_square += pow(atof(textline.c_str()),2);
                count++;
        }
        SD = pow(1/count*sum_of_square-pow(sum/count,2),0.5);
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << sum/count << "\n";
        cout << "Standard deviation = " << SD;
}