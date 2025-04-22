#include"add.h"
#include"sub.h"

int main()
{
    cout << "a=10, b=20" << "\n";
    int c = add(10, 20);
    cout << "c=10+20=" << c << "\n";
    cout << "c=10-20=" << sub(10, 20) << "\n";
    return 0;
}