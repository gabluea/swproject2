#define PIN_LED 7
unsigned int count, toggle;

void setup() {
    pinMode(PIN_LED, OUTPUT);
    Serial.begin(115200); //Initialize serial port
    while (!Serial) {
      ; // wait for serial port to connect.
    }
    Serial.println("Hello World!");
    count = toggle = 0;
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(1000); //wait for 1,000 milliseconds
    Serial.println(++count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(--count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(++count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(--count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(++count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(--count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(++count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(--count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(++count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(--count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
    Serial.println(++count);
    toggle = toggle_state(count); //toggle LED value.
    digitalWrite(PIN_LED, toggle); //update LED status.
    delay(100);
}

void loop() {
    while(1) {}
}
int toggle_state(int toggle) {
  return toggle;
}
