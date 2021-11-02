#include <bits/stdc++.h>
using namespace std;




time_t start;

time_t startexectime() //Start the Timer
{
time(&start);
ios_base::sync_with_stdio(false);
  return start;
}

time_t endtime;
time_t endexectime(bool log) // end the timer bool 
{
time(&endtime);
double timetaken = double(endtime - start);
  if(log)
  {
    cout << "The piece of code took: "<<fixed<<timetaken<<setprecision(5);
    cout <<" seconds to complete";
  }

  return endtime;
}

