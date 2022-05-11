
#include "UnoJoy.h"

void setup(){
  setupPins();
  setupUnoJoy();
}

void loop(){
  // Always be getting fresh data
  dataForController_t controllerData = getControllerData();
  setControllerData(controllerData);
}

void setupPins(void){
  // Set all the digital pins as inputs
  // with the pull-up enabled, except for the 
  // two serial line pins
  /*for (int i = 2; i <= 12; i++){
    pinMode(i, INPUT);
    digitalWrite(i, HIGH);
  }*/
  
  digitalWrite(2, HIGH);
 // digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  //digitalWrite(5, HIGH);
  //digitalWrite(6, HIGH);
  //digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
 
  
  //pinMode(A0, INPUT);
  digitalWrite(A0, HIGH);
  //pinMode(A1, INPUT);
  digitalWrite(A1, HIGH);
  //pinMode(A2, INPUT);
  digitalWrite(A2, HIGH);
  //pinMode(A3, INPUT);
  digitalWrite(A3, HIGH);
  //pinMode(A4, INPUT);
  digitalWrite(A4, HIGH);
  //pinMode(A5, INPUT);
  //digitalWrite(A5, HIGH);
}

dataForController_t getControllerData(void){
  
  // Set up a place for our controller data
  //  Use the getBlankDataForController() function, since
  //  just declaring a fresh dataForController_t tends
  //  to get you one filled with junk from other, random
  //  values that were in those memory locations before
  dataForController_t controllerData = getBlankDataForController();
  // Since our buttons are all held high and
  //  pulled low when pressed, we use the "!"
  //  operator to invert the readings from the pins
  controllerData.triangleOn = !digitalRead(A0);//just change A button
  controllerData.circleOn = !digitalRead(A1);//7);//6);//A1);//A0);//A1);//A0);//(3);//(7);//(19);//(A5);//(6);//(11);//(3);
  controllerData.squareOn = !digitalRead(12);//justchange B button
  controllerData.crossOn = !digitalRead(2);
  
  controllerData.l1On = !digitalRead(4);//A5);//A0);//A4);//3);//A1);//(6);//(10);
  controllerData.l2On = !digitalRead(A2);//A2);//(8);//(12);
  //controllerData.l3On = 1;
  controllerData.r1On = !digitalRead(A4);//12);//6);//(3);//(15);//(A1);//(12);//(7);//(11);
  controllerData.r2On = !digitalRead(A3);//A3);//(9);//(A4);
  //controllerData.r3On = 1;  
  controllerData.dpadUpOn = !digitalRead(8);//(A1);//(6);
  controllerData.dpadDownOn = !digitalRead(9);//(A2);//(7);
  controllerData.dpadLeftOn = !digitalRead(10);//(A3);//(8);
  controllerData.dpadRightOn = !digitalRead(11);//(A4);//(9);
  
  //controllerData.selectOn = 1;//!digitalRead(12);
  //controllerData.startOn = 1;//!digitalRead(A4);
  
  //controllerData.dpadUpOn = !analogRead(A1) >> 2;
  //controllerData.dpadDownOn = !analogRead(A2) >> 2;
  //controllerData.dpadLeftOn = !analogRead(A3) >> 2;
  //controllerData.dpadRightOn = !analogRead(A4) >> 2;
  // And return the data!

  //controllerData.startOn = !digitalRead(18);//(A4);//(10);//(A5);
  
  // Set the analog sticks
  //  Since analogRead(pin) returns a 10 bit value,
  //  we need to perform a bit shift operation to
  //  lose the 2 least significant bits and get an
  //  8 bit number that we can use  
//  controllerData.leftStickX = analogRead(A1) >> 2;
//  controllerData.leftStickY = analogRead(A2) >> 2;
//  controllerData.rightStickX = analogRead(A3) >> 2;
//  controllerData.rightStickY = analogRead(A4) >> 2;
  // And return the data!
  return controllerData;
}
