//#include "q1.cpp"
//#include "q2.cpp"
//#include "q3.cpp"
//#include "q4.cpp"
//#include "q5.cpp"
//#include "q6.cpp"
//#include "q7.cpp"
//#include "q8.cpp"
//#include "q9.cpp"
#include "q10.cpp"
#include <gtest/gtest.h>

/*
//-------------------Question 1----------------- (1)
TEST(Q1, First) {   						

	Employee e1("usman",22.0);
	ASSERT_EQ(22.0, e1.getSalary());
	Employee e2;
	ASSERT_EQ(0, e2.getSalary());
}
*/
//-------------------Question 2----------------- (2)
/*
TEST(Q2, First) {   						

	Car c1(10,5);
	c1.drive(20);
	ASSERT_EQ(3, c1.getFuelLevel());
	c1.drive(20);
	ASSERT_EQ(1, c1.getFuelLevel());
	//Default constructor should set 10KM per litre or 10 Miles Per gallon
	Car c2;
	c2.tank(10);
	c2.drive(40);
	ASSERT_EQ(6, c2.getFuelLevel());
}
*/
/*
//-------------------Question 3----------------- (3)


TEST(Q3, First) {   						

	Circle c1(5);
	ASSERT_EQ(78.5, c1.getArea());
	ASSERT_FLOAT_EQ(31.4, c1.getCircumference());
	Circle c2(10);
	ASSERT_EQ(314.0, c2.getArea());
	ASSERT_FLOAT_EQ(62.8, c2.getCircumference());
	
}


//-------------------Question 4----------------- (4)


TEST(Q4, First) {   						

	FlightInfo F1(123,"XYZ",5000);
	ASSERT_FLOAT_EQ(2200, F1.getFuel());
	FlightInfo F2(234,"ABC",805);
	ASSERT_FLOAT_EQ(500, F2.getFuel());
}

//-------------------Question 5----------------- (5)


TEST(Q5, First) {   						

	Employee2 e1("usman",10.0,50,10);
	ASSERT_FLOAT_EQ(550.0, e1.wageCalculator());
	Employee2 e2;
	e2.setName("XYZ");
	e2.hourlyWage(10);
	e2.setWorkedHours(60);
	e2.setExtraHours(20);
	ASSERT_FLOAT_EQ(700.0, e2.wageCalculator());
}

//-------------------Question 6----------------- (6)


TEST(Q6, First) {   						

	Address a1(123,1,2,"ABC","state1",5);
	Address a2(234,1,2,"ABC","state1",3);
	ASSERT_EQ(false, a1.compareTO(a2));
	a1.setPostalCode(1);
	ASSERT_EQ(true, a1.compareTO(a2));
}

//-------------------Question 7----------------- (7)


TEST(Q7, First) {   						

	Account ac1(1000.0);
	ac1.deposit(500.0);
	ASSERT_EQ(false, ac1.withdraw(2000.0));
	ASSERT_FLOAT_EQ(1495.0, ac1.inquire());
	
	
	Account ac2(1000.0);
	ASSERT_EQ(true, ac2.withdraw(500.0));
	ASSERT_FLOAT_EQ(500.0, ac2.inquire());
}

//-------------------Question 9----------------- (9)

TEST(Q9, First) {   						

	Rectangle r1(20,5);
	Rectangle r2;
	r2.setLength(20);
	r2.setWidth(5);
	ASSERT_EQ(1, r1.sameArea(r2));
	r1.setLength(25);
	ASSERT_EQ(0, r1.sameArea(r2));
	
}
*/
//-------------------Question 10----------------- (10)

TEST(Q10, First) {   						

	Array a1(6);
	a1.setAt(0,1);
	a1.setAt(1,2);
	a1.setAt(2,3);
	a1.setAt(3,4);
	a1.setAt(4,5);
	a1.setAt(5,6);
	
	Array a2(a1);
	ASSERT_EQ(6, a2.pop_back());
	ASSERT_EQ(6, a1.pop_back());
	Array a3(a2.subArr(3));
	a3.push_back(6);
	a3.reverse();
	
	ASSERT_EQ(4, a3.getAt(2));
	
	
	
	
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

