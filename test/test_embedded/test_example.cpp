#include <Arduino.h>
#include <unity.h>

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

int function_under_test(int a, int b) {
    return a + b;
}

void test_calculator_addition(void) {
    TEST_ASSERT_EQUAL(32, function_under_test(25, 7));
}

void setup() {
    UNITY_BEGIN();
    // wait for serial monitor to be connected, however long it may take.
    while(!Serial) delay(10);
    RUN_TEST(test_calculator_addition);
    UNITY_END();
}

void loop() {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}