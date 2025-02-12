#include <boost/multiprecision/cpp_int.hpp>
#include "test.hpp"

using namespace std;
namespace mp = boost::multiprecision;

int main()
{
   mp::cpp_int ten(10);
   mp::cpp_int ran(5);
   mp::cpp_int pmod = mp::powm(ten, 5, 13) * 5;
   BOOST_CHECK(pmod == (100000 % 13) * 5);
   pmod = mp::powm(ten, 5, 13) * ran;
   BOOST_CHECK(pmod == (100000 % 13) * 5);
   return 0;
}
