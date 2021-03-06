#define BOOST_TEST_MODULE_stringtest
#include <boost/test/included/unit_test.hpp>
#include "./str.h"

BOOST_AUTO_TEST_SUITE(stringtest)

BOOST_AUTO_TEST_CASE(test1){
    mystring s;
    BOOST_CHECK(s.size() == 0);
}

BOOST_AUTO_TEST_CASE(test2)
{
    mystring s;
    s.setbuffer("hello world");
    BOOST_REQUIRE_EQUAL('h', s[0]);
}

BOOST_AUTO_TEST_SUITE_END()
