#include "derek_LED.h"

int main(int argc, char* argv[]){
   int blinkLED = 0; 
   int blinkNum = 0; 
   if(argc!=2 && argc != 4){
	cout << "Usage is blinkLED <command>" << endl;
        cout << "   command is one of: on, off, flash, status or blink led blinkNum" << endl;
	cout << " e.g. makeLEDs flash" << endl;
   }
   cout << "Starting the myBlink program" << endl;
   string cmd(argv[1]);
   
   if(argc == 4) {
      blinkLED = atoi(argv[2]); 
      blinkNum = atoi(argv[3]); 
   } 

   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else if(cmd=="blink" && i == blinkLED){
         leds[i].blink(blinkNum);
      } else { cout << "Invalid command!" << endl; }
   }
   cout << "Finished the makeLEDs program" << endl;
   return 0;
}