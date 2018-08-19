uint8_t led = 0;

void setup() {
 GnssConf.init();
 // put your setup code here, to run once:
 pinMode(led, OUTPUT);
 Serial.config(STGNSS_UART_8BITS_WORD_LENGTH, STGNSS_UART_1STOP_BITS, STGNSS_UART_NOPARITY);
 Serial.begin(9600);
 digitalWrite(led, HIGH);
 }

void loop() {
 // put your main code here, to run repeatedly:
} 

void task_called_after_GNSS_update(void) {
 static uint8_t val = HIGH;
 char buf[32];
 if (val == HIGH) {
  digitalWrite(led, HIGH);
  sprintf(buf, "Bryce Hello world (GPIO%02d high)\r\n", led);
  Serial.print(buf);
  val = LOW;
 }
  else if (val == LOW) {
  digitalWrite(led, LOW);
  sprintf(buf, "Hello world (GPIO%02d low)\r\n", led);
  Serial.print(buf);
  val = HIGH;
 }
}
