#include "arduino_secrets.h"
/* 
  
  The following variables are automatically generated and updated when changes are made to the Thing

  bool switch1;
  bool switch2;
  bool switch3;
  bool switch4;
  bool switch5;
  bool switch6;
  bool switch7;
  bool switch8;

 
*/

#include "thingProperties.h"

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);
  pinMode(33, OUTPUT);
  //pinMode(3, OUTPUT);
  //pinMode(18, OUTPUT);
  //pinMode(17, OUTPUT);
  //pinMode(16, OUTPUT);
  //pinMode(15, OUTPUT);
  //pinMode(7, OUTPUT);
  //pinMode(6, OUTPUT);

  digitalWrite(33, HIGH);
  //digitalWrite(3, HIGH);
  //digitalWrite(18, HIGH);
  //digitalWrite(17, HIGH);
  //digitalWrite(16, HIGH);
  //digitalWrite(15, HIGH);
  //digitalWrite(7, HIGH);
  //digitalWrite(6, HIGH);


  delay(1500);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here
}



/*
  Since Switch1 is READ_WRITE variable, onSwitch1Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onSwitch1Change() {
  if (switch1 == 1) {
    digitalWrite(33, HIGH);
  } else {
    digitalWrite(33, LOW);
  }
}

/*
  Since Switch2 is READ_WRITE variable, onSwitch2Change() is
  executed every time a new value is received from IoT Cloud.

void onSwitch2Change() {
  if (switch2 == 1) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
  }
}


  Since Switch3 is READ_WRITE variable, onSwitch3Change() is
  executed every time a new value is received from IoT Cloud.

void onSwitch3Change() {
  if (switch3 == 1) {
    digitalWrite(18, LOW);
  } else {
    digitalWrite(18, HIGH);
  }
}


  Since Switch4 is READ_WRITE variable, onSwitch4Change() is
  executed every time a new value is received from IoT Cloud.

void onSwitch4Change() {
  if (switch4 == 1) {
    digitalWrite(17, LOW);
  } else {
    digitalWrite(17, HIGH);
  }
}


  Since Switch5 is READ_WRITE variable, onSwitch5Change() is
  executed every time a new value is received from IoT Cloud.

void onSwitch5Change() {
  if (switch5 == 1) {
    digitalWrite(16, LOW);
  } else {
    digitalWrite(16, HIGH);
  }
}


  Since Switch6 is READ_WRITE variable, onSwitch6Change() is
  executed every time a new value is received from IoT Cloud.

void onSwitch6Change() {
  if (switch6 == 1) {
    digitalWrite(15, LOW);
  } else {
    digitalWrite(15, HIGH);
  }
}


  Since Switch8 is READ_WRITE variable, onSwitch8Change() is
  executed every time a new value is received from IoT Cloud.

void onSwitch8Change() {
  if (switch8 == 1) {
    digitalWrite(6, LOW);
  } else {
    digitalWrite(6, HIGH);
  }
}


  Since Switch7 is READ_WRITE variable, onSwitch7Change() is
  executed every time a new value is received from IoT Cloud.

void onSwitch7Change() {
  if (switch7 == 1) {
    digitalWrite(7, LOW);
  } else {
    digitalWrite(7, HIGH);
  }
}
*/