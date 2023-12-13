#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(){
      real = 0;
      imag = 0;
    }
    Complex(double x, double y){
      real = x;
      imag = y;
    }
    Complex operator+(const Complex& other){
        Complex ans1;
        ans1.real = real + other.real;
        ans1.imag = imag + other.imag;
        return ans1;
    }

    Complex operator*(const Complex& other){
      Complex ans2;
      ans2.real = real * other.real - imag * other.imag;
      ans2.imag = real * other.imag + imag * other.real;
      return ans2;
    }

    friend ostream& operator<<(ostream& out, const Complex& num) {
        out << num.real << (num.imag < 0 ? "" : "+") << num.imag << "i";
        return out;
    }

    friend istream& operator>>(istream& in, Complex& num) {
        in >> num.real >> num.imag;
        return in;
    }
};

int main() {
    Complex num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    Complex sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    Complex product = num1 * num2;
    cout << "Product: " << product << endl;

return(0);
}