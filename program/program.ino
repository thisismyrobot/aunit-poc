// Enable tests by uncommenting the following.
//#define RUN_TESTS
#ifndef RUN_TESTS

void setup() {
  Serial.begin(115200);
}

void loop() {
  int result = adder(5, 6);
  Serial.println(result);
}

#endif

