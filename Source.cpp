/*#include <iostream>
using namespace std;
int main()
{
    int count = 10;
    while (count <= 20)
    {
        cout<< count*count << " ";
        count++;
    }*/
/*#include <iostream>
using namespace std;
int main(){
    int i = 35;
    while (i <= 87) {
        if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5) {
            cout << i << ' ';
            
        }
    i++;
    }

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() 
{
    int c, n, s;
    cin >> n;
    c = 0;
    s = 0;
    while (c <= n) {
        s += c;
        c++;
        }
    cout << s <<endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    n = 100;
    
    m = 15;
    while (n < 1000) {
        int s = 0;
        s = s + n/100 + (n/10)%10 + n%10;
        if (s == m) {
            cout << n << ' ';
        }
        n++;
    }
    return 0;
}