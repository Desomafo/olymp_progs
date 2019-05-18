#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>

template <typename Number>
Number GCD(Number u, Number v) {
    while (v != 0) {
        Number r = u % v;
        u = v;
        v = r;
    }
    return u;
}

using namespace std;

//unsigned long long gcd(unsigned long long u, unsigned long long v)
//{
//    unsigned long long shift = 0;

//    /* GCD(0,v) == v; GCD(u,0) == u, GCD(0,0) == 0 */
//    if (u == 0) return v;
//    if (v == 0) return u;

//    /* Let shift := lg K, where K is the greatest power of 2
//        dividing both u and v. */
//    while (((u | v) & 1) == 0) {
//        shift++;
//        u >>= 1;
//        v >>= 1;
//    }

//    while ((u & 1) == 0)
//        u >>= 1;

//    /* From here on, u is always odd. */
//    do {
//        /* remove all factors of 2 in v -- they are not common */
//        /*   note: v is not zero, so while will terminate */
//        while ((v & 1) == 0)
//            v >>= 1;

//        /* Now u and v are both odd. Swap if necessary so u <= v,
//            then set v = v - u (which is even). For bignums, the
//             swapping is just pointer movement, and the subtraction
//              can be done in-place. */
//        if (u > v) {
//            unsigned long long t = v; v = u; u = t; // Swap u and v.
//        }

//        v -= u; // Here v >= u.
//    } while (v != 0);

//    /* restore common factors of 2 */
//    return u << shift;
//}

unsigned long long pow_gcd(unsigned long long x, unsigned long long y) {
    cout << pow(5, x) + pow(7, x) << "  " << pow(5, y) + pow(7, y) << endl;
    return GCD((unsigned long long)(pow(5, x) + pow(7, x)), (unsigned long long)(pow(5, y) + pow(7, y)));
}

int main()
{
    cout << pow_gcd(23, 29) << endl;
    return 0;
}
