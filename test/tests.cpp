#include "gtest/gtest.h"
#include "../include/Factory.h"

TEST(Staff, task_1) {
	Driver employee(9, "Vasya", 1, 150);
	EXPECT_EQ(9, employee.getID());
}

TEST(Staff, task_2) {
	Cleaner employee(1, "Petya", 0, 100);
	employee.setWorkTime(40);
	EXPECT_EQ(40, employee.getWorkTime());
}

TEST(Staff, task_3) {
	Cleaner employee(1, "Kolya", 0, 100);
	EXPECT_EQ("Petya", employee.getName());
}

TEST(Staff, task_4) {
	SeniorManager employee(99, "Vasilich", 6, 524000, 20, 100);
	EXPECT_EQ(524000, employee.getBudget());
}