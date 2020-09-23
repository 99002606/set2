#ifndef DISTANCE_H_INCLUDED
#define DISTANCE_H_INCLUDED

class Distance
{
    int m_feet,m_inch;
public:
    Distance();
    Distance(int,int);
    Distance operator+(const Distance &);
    Distance operator-(const Distance &);
    Distance operator+(int);
    Distance operator-(int);
   Distance& operator++();//pre inc
   Distance operator++(int);//post inc
   bool operator==(const Distance &);
   Distance operator>(const Distance &);
    Distance operator<(const Distance &);
    Distance display();
};


#endif // DISTANCE_H_INCLUDED
