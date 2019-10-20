#define bitset(number, bit) number |= 1U << bit
#define bitclear(number, bit) number &= ~(1U << bit)
#define bitchange(number, bit) number ^= 1U << bit
#define bitget(number, bit) ((number >> bit) & 1U)
#define bitvalue(number, bit, value) number ^= (-value ^ number) & (1U << bit)

void setup() {
  DDRB = B00100000;
  PORTB = B00000000;
}

unsigned long t = 0;
void loop() {
  bitvalue(PORTB, 5, (t++ % 2));
  delay(1000);
}