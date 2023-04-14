
#define LED_8 8
#define LED_4 4
#define LED_2 2

long prev;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_2, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_8, OUTPUT);
}

void loop() {  
  const long now = millis();

  if (now - prev > 1000) {
    prev = millis();
    
    if (now % 2 == 0) {      
      digitalWrite(LED_2, HIGH);   // turn the LED off by making the voltage LOW
    } else {
      digitalWrite(LED_2, LOW);
    }

    if (now % 4 == 0) {      
      digitalWrite(LED_4, LOW);  // turn the LED on (HIGH is the voltage level)
    } else {
      digitalWrite(LED_4, HIGH);   // turn the LED off by making the voltage LOW      
    }

    if (now % 8 == 0) {      
      digitalWrite(LED_8, HIGH);  // turn the LED on (HIGH is the voltage level)
    } else {
      digitalWrite(LED_8, LOW);   // turn the LED off by making the voltage LOW      
    }   

  }
}
