int array[3] = {0,128,255};

void setup() {
  Serial.begin(115200);               // Sets the data rate in bits per second (baud) for serial data transmission
  Serial.setTimeout(0.1);             // Sets the maximum time in ms to wait for Serial data
  
  pinMode(LED_BUILTIN, OUTPUT);       // Sets Built-in LED as output
  
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 3; k++){
        while(!Serial.available()){
          
        }
        digitalWrite(LED_BUILTIN, HIGH);
        delay(10);
        analogWrite(LED_BUILTIN, LOW);
        delay(10);
        analogWrite(11, array[k]);
        delay(10);
      }

      analogWrite(10, array[j]);
      delay(10);
    }

    analogWrite(3, array[i]);
    delay(10);
    
    Serial.readString();              // Reads characters from the serial buffer into a String                                 
                                      // thus clearing the buffer and causing Serial.available() to return False
  }
}
