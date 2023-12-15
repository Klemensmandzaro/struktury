#include <iostream>
using namespace std;
int main() {
    double b=0;
    struct student{
        string imie_nazwisko;
        double ocena;
        string index;
    };
    student pjatk[10]={
            {"Leonardo Chmielewski", 4.0, "s20937"},
            {"Bogumił Szewczyk", 5.0, "s39827"},
            {"Eugeniusz Chmielewski", 3.0, "s93720"},
            {"Maurycy Wysocki", 2.5, "s83629"},
            {"Adam Jaworski", 3.6, "s87362"},
            {"Heronim Sikorski", 3.4, "s72649"},
            {"Adam Wróblewski", 4.8, "s92730"},
            {"Marian Sikora", 4.75, "s02838"},
            {"Lucjan Dąbrowski", 4.6, "s92730"},
            {"Martin Jakubowski", 4.9, "s82630"}
    };
    for (int i=0; i<10; i++)
    {
        cin>>pjatk[i].ocena;
        b+=pjatk[i].ocena;
    }
    for (int i=0; i<10; i++)
    {
        cout<<pjatk[i].index<<": "<<pjatk[i].ocena<<endl;
    }
    cout<<b/10;
    return 0;
}
