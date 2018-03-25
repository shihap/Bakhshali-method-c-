/*
 FCI – Programming 1 – 2018 - Assignment 2
 Program Name: bakhshali method c++.cpp
 Last Modification Date: 2/march/2018
 Author1 and ID and Group: shehab 20170129 G5
 Author2 and ID and Group: tarek 20170134 G5
 Author3 and ID and Group: abdelrahman 20170152 G6
 Teaching Assistant: xxxxx xxxxx
 Purpose:get the square of any positive number by using a law and a guess.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{float s , x , a , b , i ;
    a = 0 ;
    b = 0 ;
    i = 0 ;
    cout << "please enter a positive number:";
    cin >> s ;
    while (s <= 0)
    {
    cout << "wrong input" << endl;
    cout << "please enter a positive number:";
    cin >> s ;
    }
    cout << "please enter a guess:";
    cin >> x ;
    while ((x <= 0) || (x > s))
    {
    cout << "wrong input" << endl;
    cout << "please enter a guess:";
    cin >> x ;
    }
    while (i < 100)
    {
    a=(s-(pow(x ,2)))/(2*x);
    b=x+a;
    x=b-((pow(a ,2))/(2*b));
    i+=1;
    }
    cout <<"the squareroot is " << x << endl ;


    system("pause");

    return 0;
}
