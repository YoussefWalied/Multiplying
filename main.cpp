typedef long long ll;
//#define xD ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//#define endl "\n"
#include <iostream>
#include <math.h>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

ll GaussMethod(ll x,ll y) {

    if (x < 10 or y < 10) {
        return  x * y;
    }

    string strX = to_string(x);
    string strY = to_string(y);

    int n = max(strX.size(), strY.size());
    int h = floor(n / 2.0);
    ll t = pow(10, h);
    ll xL = x / t;
    ll xR = x % t;
    ll yL = y / t;
    ll yR = y % t;
    ll P1 = GaussMethod(xL, yL);
    ll P2 = GaussMethod(xR, yR);
    ll P3 = GaussMethod(xL + xR, yL + yR) - P2 - P1;

    return  P1 * (pow(10, (2 * h))) + (P3 * (pow(10,h))) + P2;
}


int main(){

    
    cout << GaussMethod(400,50);
    return 0 ;
}

