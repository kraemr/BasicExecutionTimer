#include <bits/stdc++.h>
using namespace std;




time_t start;
void startexectime()
{
time(&start);
ios_base::sync_with_stdio(false);
}

time_t endtime;
void endexectime()
{
time(&endtime);
double timetaken = double(endtime - start);
cout << "The piece of code took: "<<fixed<<timetaken<<setprecision(5);
cout <<" seconds";
}

