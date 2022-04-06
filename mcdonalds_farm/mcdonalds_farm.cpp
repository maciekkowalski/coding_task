#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    string start;
    cout << "If you want to start type RUN" << endl;
    cin >> start;
      if (start != "RUN")
    {
        return 1;
    }
      else {

        int length;
        int a;
        std::cout << "Type how many meters of fence is available:" << std::endl;
        cin >> length;
          if (length < 3)
        // for amount of material less than 3 m we wouldn't be able to build a fence assuming that "a" and "b" are integers
        {
            cout << "Minimum amount of fence is 3 meters";
        }
         
          else {

            /* In purpose to calculate optimal area we need to find a function describing area od farm
               which is a*b and next step is to find derivative of this function in purpose to find a value of a and b for which
               area is optimal */

            /* We assume that 2a+b = amount of available fence. We can se that b = (length - 2a), so our function describing area
               is a*(length - 2a), which is equal to -2a^2 + a*length. Derivative of which function, regardless of "length" value will
               always be: -4a + length , where "length" is our amount of fence material */

           /* In next step we need to find value for which derivative is equal zero, in purpose to find optimal "a" and "b" for which
              uncle McDonald's farm has maximum area. In the end we get a = length / 4 */


            a = length / 4;
             if (length % 4 == 3) // for "length" values which mod 4 is equal 3, we need to add 1 to get optimum "a' value
            {
                a = a + 1; // we assume that "a" is integer
            }
             else a = length / 4;

            int b = length - (2 * a);

            int area_max; // maximum area for "a" and "b" which are integers
            area_max = a * b;

            cout << "Optimal a value is : " << a << " meters" << endl;
            cout << "Optimal b value is : " << b << " meters" << endl;
            cout << "Optimal area of McDonald's farm is :  " << area_max << " square meters" << endl;

        }

    }

    return 0;
}


