#include "iostream"
#include "cstdio"
using namespace std;
int main()
{
    int a;
    double b,c;
    printf("Welcome to The Original Calculator! Please choose an operation:1: Addition,2: Subtraction,3: Multiplication,4: Division.Press the corresponding number to begin your calculation!");
    scanf("%d",&a);
    scanf("%lf%lf",&b,&c);
    if (a==1) {
        double sum=b+c;
        cout << "The sum of these two numbers is:" << b+c;
    }
    else if (a==2) {
        cout << "The difference between these two figures is:" << b-c;
    }
    else if (a==3) {
        cout << "The product of these two numbers is:" << b*c;
    }
    else if (a==4) {
        cout << "The quotient of these two figures:" << b/c;
    }
    else {
        cout << "It looks you don't type is 1/2/3/4,you type numbers agin in please!";
    }
    return 0;
}