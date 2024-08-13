void setup() {
// SET TO DIGITAL PIN 7
DDRD = 128;
// SET TO DIGITAL PIN 5
DDRB = 32;
// SET TO ANALOG PIN 0
DDRC = 32;
}

void loop() {
  
 PORTD = 128;
 for(long i = 0 ; i < 1000000 ; i++){
  PORTD = 128;
 }
PORTD = 0;

for(long i = 0 ; i <1000000 ; i++){
  PORTD = 0;
}

 PORTB = 32;
 for(long i = 0 ; i < 1000000 ; i++){
  PORTB = 32;
 }
PORTB = 0;

for(long i = 0 ; i <1000000 ; i++){
  PORTB = 0;
}

 PORTC = 32;
 for(long i = 0 ; i < 1000000 ; i++){
  PORTC = 32;
 }


PORTC = 0;

for(long i = 0 ; i <1000000 ; i++){
  PORTC = 0;
}



}
