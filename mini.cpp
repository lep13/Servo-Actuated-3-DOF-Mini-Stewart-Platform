#include <Servo.h>
Servo myservo;  // create servo object to control a servo
Servo myservo1; // create servo object to control a servo
Servo myservo2; // create servo object to control a servo
int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int change = 5;
const int buttonPinI1 = 6;
const int buttonPinD1 = 1;
const int buttonPinI2 = 2;
const int buttonPinD2 = 3;
const int buttonPinI3 = 4;
const int buttonPinD3 = 5;
void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    myservo.attach(12);
    myservo1.attach(11);
    myservo2.attach(10);
    myservo.write(0);
    myservo1.write(0);
    myservo2.write(0);
    pinMode(buttonPinI1, INPUT_PULLUP);
    pinMode(buttonPinD1, INPUT_PULLUP);
    pinMode(buttonPinI2, INPUT_PULLUP);
    pinMode(buttonPinD2, INPUT_PULLUP);
    pinMode(buttonPinI3, INPUT_PULLUP);
    pinMode(buttonPinD3, INPUT_PULLUP);
}
void loop()
{
    // put your main code here, to run repeatedly:
    if (digitalRead(buttonPinI1) == HIGH)
    {
        // Increment the count variable
        pos1 = pos1 + change;
        // Print the updated count to the serial monitor
        myservo.write(pos1);
        // Serial.println(pos1);
        // Delay for 100 milliseconds to debounce the button
        delay(100);
    }
    if (digitalRead(buttonPinD1) == HIGH)
    {
        // Increment the count variable
        pos1 = pos1 - change;
        // Print the updated count to the serial monitor
        myservo.write(pos1);
        // Serial.println(pos1);
        // Delay for 100 milliseconds to debounce the button
        delay(100);
    }
    if (digitalRead(buttonPinI2) == HIGH)
    {
        // Increment the count variable
        pos2 = pos2 + change;
        // Print the updated count to the serial monitor
        myservo1.write(pos2);

        Serial.println(pos2);
        // Delay for 100 milliseconds to debounce the button
        delay(100);
    }
    if (digitalRead(buttonPinD2) == HIGH)
    {
        // Increment the count variable
        pos2 = pos2 - change;
        // Print the updated count to the serial monitor
        myservo1.write(pos2);
        //
        Serial.println(pos2);
        // Delay for 100 milliseconds to debounce the button
        delay(100);
    }
    if (digitalRead(buttonPinI3) == HIGH)
    {
        // Increment the count variable
        pos3 = pos3 + change;
        // Print the updated count to the serial monitor
        myservo2.write(pos3);

        // Serial.println(pos3);
        // Delay for 100 milliseconds to debounce the button
        delay(100);
    }
    if (digitalRead(buttonPinD3) == HIGH)
    {
        // Increment the count variable
        pos3 = pos3 - change;
        // Print the updated count to the serial monitor
        myservo2.write(pos3);

        // Serial.println(pos3);
        // Delay for 100 milliseconds to debounce the button
        delay(100);
    }
}
