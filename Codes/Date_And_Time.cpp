#include <iostream>
#include <ctime>

using namespace std;

int main( ) {
   // current date/time based on current system
   time_t now = time(0);

   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;

   //
   tm *time1, *time2;
   time1 = new tm;
   time2 = new tm;
   time1 = gmtime(&now);
   *time2 = *time1;
   time1 -> tm_mday = 1;
   time1 -> tm_mon = 0;
   time1 -> tm_year = 2017-1900;

   time2 -> tm_mday = 15;
   time2 -> tm_mon = 2;
   time2 -> tm_year = 2017-1900;

   dt = asctime(time1);
   cout << "Time 1 : " << dt << endl;
   dt = asctime(time2);
   cout << "Time 2 : " << dt << endl;

    //convert from struct tm to time_t and display the time difference.
   cout << "Time difference : " << difftime(mktime(time2), mktime(time1))/60/60/24 << " day(s)" << endl;
}
