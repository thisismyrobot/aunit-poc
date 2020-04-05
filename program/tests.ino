#ifdef RUN_TESTS

#include <AUnit.h>  // Install via Library Manager
using aunit::TestRunner;

test(simpleAdditionViaAdder) {
   assertEqual(adder(0, 3), 3);
   assertEqual(adder(4, 2), 6);
   assertEqual(adder(-3, 1), -2);
}

void setup() {
  Serial.begin(115200);
  while (! Serial); // Wait until Serial is ready - Leonardo/Micro
}

void loop() {
  aunit::TestRunner::run();
}

#endif

