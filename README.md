# BasicExecutionTimer
This header can be used to find out the time, that a funtion takes to reach the end.

## How to use
```
#include "ExecClock.hpp"


int main()
{

startexectime()

for(doing stuff);
{
}
printf("finished doing stuff")

time_t end = endexectime(false); //false = no console output true = console output
cout<<fixed<<end<<setprecision(5); // set the wanted precision and float type 
return 1;
}
```
