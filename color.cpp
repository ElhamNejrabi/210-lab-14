#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
   
    Color() : red(0), green(0), blue(0) {}
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}

    void setRed(int r)   { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b)  { blue = b; }

    
    int getRed() const   { return red; }
    int getGreen() const { return green; }
    int getBlue() const  { return blue; }

    
    void print() const {
        cout << left << setw(12) << "Color"
             << " -> R: " << setw(3) << red
             << " G: "   << setw(3) << green
             << " B: "   << setw(3) << blue << endl;
    }
};

int main() {
    
    Color c1;
    c1.setRed(255);
    c1.setGreen(0);
    c1.setBlue(0);
    
     Color c2(0, 255, 0);
    Color c3(0, 0, 255);
    Color c4(128, 128, 128);

    cout << "===== Color Objects =====\n";
    c1.print();
    c2.print();
    c3.print();
    c4.print();

    return 0;
}