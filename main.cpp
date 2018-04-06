//1. a, b, c гурван тооны хамгийн ихийг олох define макро функц бич.
#include <iostream>
using namespace std;
//Жиших гэсэн нэртэй Макро функц зарлаж түүний авах утгууд болон хийх үйлдэл
#define jishih(a, b, c ) (c>(a>b? a:b))? c:(a>b? a:b);
int main()
{
    //бүхэл тоон төрлийн утга авах a, b, c хувьсагчдад  гараас утга оруулах бөгөөд max гэсэн хувьсагчид их тоог нь онооно.
    int a, b, c, max;
    cin>>a>>b>>c;
    max=jishih(a, b, c);
    cout << max;
    return 0;
}
