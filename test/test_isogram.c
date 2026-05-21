
#include "../src/isogram.h"
#include "vendor/unity.h"
#include <stdlib.h>

void setUp(){}

void tearDown(){}

// this is a unit test
void test_empty_string(void) {
  TEST_ASSERT_TRUE(is_isogram(""));
}
void test_single_letter(void) {
  TEST_ASSERT_TRUE(is_isogram("a"));
}
void test_repeated_letter(void) {
  TEST_ASSERT_FALSE(is_isogram("aa"));
}
void test_case_insensitivity(void) {
  TEST_ASSERT_FALSE(is_isogram("Aa"));
}
void test_long_isogram(void) {
  TEST_ASSERT_TRUE(is_isogram("isogram"));
}
void test_long_non_isogram(void) {
  TEST_ASSERT_FALSE(is_isogram("isograms"));
}
void test_sc_single_letter(void) {
  TEST_ASSERT_TRUE(is_isogram("!"));
}
void test_sc_repeated_letter(void) {
  TEST_ASSERT_FALSE(is_isogram("!!"));
}
void test_sc_mixed(void) {
  TEST_ASSERT_FALSE(is_isogram("!aA"));
}
void test_sc_mixed_isogram(void) {
  TEST_ASSERT_TRUE(is_isogram("!a?"));
}
void test_sc_mixed_non_isogram(void) {
  TEST_ASSERT_FALSE(is_isogram("!a?a"));
}
void test_number_isogram(void) {
  TEST_ASSERT_TRUE(is_isogram("12345"));
}
void test_number_non_isogram(void) {
  TEST_ASSERT_FALSE(is_isogram("123451"));
}

int main(void) {
  UnityBegin("isIsogram");

  RUN_TEST(test_empty_string);
  RUN_TEST(test_single_letter);
  RUN_TEST(test_repeated_letter);
  RUN_TEST(test_case_insensitivity);
  RUN_TEST(test_long_isogram);
  RUN_TEST(test_long_non_isogram);
  RUN_TEST(test_long_non_isogram);
  RUN_TEST(test_sc_single_letter);
  RUN_TEST(test_sc_repeated_letter);
  RUN_TEST(test_sc_mixed);
  RUN_TEST(test_sc_mixed_isogram);
  RUN_TEST(test_sc_mixed_non_isogram);
  RUN_TEST(test_number_isogram);
  RUN_TEST(test_number_non_isogram);

  UnityEnd();
  return 0;
}
