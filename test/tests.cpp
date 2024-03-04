// Copyright 2024 Filatov Maxim
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(TestCheckPrimeGroup, TestCheckPrimeNumbersAccept) {
    EXPECT_TRUE(checkPrime(31));
    EXPECT_TRUE(checkPrime(131));
}

TEST(TestCheckPrimeGroup, TestCheckPrimeNumbersDenied) {
    EXPECT_FALSE(checkPrime(92));
    EXPECT_FALSE(checkPrime(999));
}

TEST(TestCheckPrimeGroup, TestCheckPrimeNumbersLargeAccept) {
    EXPECT_TRUE(checkPrime(59753));
    EXPECT_TRUE(checkPrime(107441));
}

TEST(TestCheckPrimeGroup, TestCheckPrimeNumbersLargeDenied) {
    EXPECT_FALSE(checkPrime(107442));
    EXPECT_FALSE(checkPrime(107443));
}

TEST(TestCheckPrimeGroup, TestCheckPrimeNumbersDenied) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(TestCheckPrimeGroup, TestCheckNPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(1e2), 541);
}

TEST(TestCheckPrimeGroup, TestCheckNPrimeLarge) {
    EXPECT_EQ(nPrime(1697), 14479);
    EXPECT_EQ(nPrime(1e4), 104729);
}

TEST(TestCheckPrimeGroup, TestCheckNextPrime) {
    EXPECT_EQ(nextPrime(17), 19);
    EXPECT_EQ(nextPrime(32), 37);
}

TEST(TestCheckPrimeGroup, TestCheckNextPrimeLarge) {
    EXPECT_EQ(nextPrime(1e4), 10007);
    EXPECT_EQ(nextPrime(5e4), 50021);
}

TEST(TestCheckPrimeGroup, TestSumPrime) {
    EXPECT_EQ(sumPrime(1e1), 17);
    EXPECT_EQ(sumPrime(5e1), 328);
    EXPECT_EQ(sumPrime(2e2), 4227);
}

TEST(TestCheckPrimeGroup, TestSumPrimeLarge) {
    EXPECT_EQ(sumPrime(2e3), 277050);
    EXPECT_EQ(sumPrime(7e3), 2935471);
    EXPECT_EQ(sumPrime(1e4), 5736396);
}

TEST(TestCheckPrimeGroup, TestSumLowerThan2M) {
    EXPECT_EQ(sumPrime(2e6), 142913828922);
}
