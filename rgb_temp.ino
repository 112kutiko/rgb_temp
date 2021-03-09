#define LED_1_PIN 5
#define LED_2_PIN 6
#define LED_3_PIN 7
 
 

void powerOffAllLEDs()
{
    digitalWrite(LED_1_PIN, LOW);
    digitalWrite(LED_2_PIN, LOW);
    digitalWrite(LED_3_PIN, LOW);
}

void setup() {
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);
  powerOffAllLEDs();
  Serial.begin(9600); 
}
void loop() {
 
   int ledNumber = Serial.parseInt();
   if (Serial.available()){
     Serial.print("temp: ");
    Serial.println(ledNumber);
   Serial.println("color: ");
   }
   if(ledNumber!=0){  powerOffAllLEDs();  
   if(ledNumber<15){
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, HIGH);
    digitalWrite(LED_3_PIN, HIGH);
    Serial.println("white ");
   }else if(ledNumber<29){
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_3_PIN, HIGH);
     Serial.println("light blue ");
   }else if(ledNumber<43) {
    digitalWrite(LED_3_PIN, HIGH); 
     Serial.println(" blue ");
   } else if(ledNumber<58) {
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, HIGH);
    Serial.println("light green ");
   } else if(ledNumber<72) {
     digitalWrite(LED_1_PIN, HIGH);
          Serial.println("green ");
   }else if(ledNumber<86) {
     Serial.println("voilet ");
   digitalWrite(LED_2_PIN, HIGH);
    digitalWrite(LED_3_PIN, HIGH);
    }else{
    digitalWrite(LED_2_PIN, HIGH);  
    Serial.println("red");
   }
     delay(2000);
     }

}
