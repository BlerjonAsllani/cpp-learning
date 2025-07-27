// ***************************************************
// Projekt:      
// Copyright:    
// Author:       
// Datum:        
// Programmname: 
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
//#include <conio.h>

using namespace std;

namespace first{
    int x = 1;
} 
namespace second{
    int x = 2;
} 

int main()
{
    int x = 0;
    cout << x << ' ' << first::x << ' ' << second::x << '\n';
    //getchar();
    system("PAUSE");
    return 0;
}