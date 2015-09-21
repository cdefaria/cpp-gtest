/**
 * Unit Tests for Rando Test
 * Name: Christian DeFaria
 * Lab Section: 1PM
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, shouldWorry)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
	ASSERT_FALSE( rando.shouldWorry(false,false,false) );
	ASSERT_TRUE( rando.shouldWorry(true,false,false) );
}


TEST(RandoTest, isDivisbleBy)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(3,6) );
	ASSERT_TRUE( rando.isDivisbleBy(16,4) );
	ASSERT_FALSE( rando.isDivisbleBy(17,5) );
}

TEST(RandoTest, isPrime)
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(17) );
	ASSERT_FALSE( rando.isPrime(14) );
	ASSERT_FALSE( rando.isPrime(-4) );
}

TEST(RandoTest, nearestToZero)
{
	Rando rando;
	ASSERT_TRUE( rando.nearestToZero(17,4)==4 );
	ASSERT_TRUE( rando.nearestToZero(-1,-4)==-1 );
	ASSERT_TRUE( rando.nearestToZero(-1,4)==-1 );
	ASSERT_TRUE( rando.nearestToZero(0,-4)==0 );
	ASSERT_TRUE( rando.nearestToZero(4,4)==4 );
}
