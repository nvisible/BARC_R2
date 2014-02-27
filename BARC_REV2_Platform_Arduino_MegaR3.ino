// *******************************************
// *   BARC JEEP PLATFORM ARDUINO MEGA R3    *
// *******************************************


// *****************************
// *  BARC JEEP REV2 OVERVIEW  *
// *****************************

/*
  Revision 2 of the BARC Jeep will add more functions to the Controller and Jeep by including an
   Arduino in each. 
   
   Controller Overview
     A wired Xbox360 controller will be used with a ChatPad attachment. The Chatpad will be gutted
     and used only as an empty shell to insert a screen, Arduino, USB host, Xbee, and power 
     components. I would also like to remove the rumble motors to get more space and replace them
     with smaller motors to maintain haptic feedback.
     A display will allow me to set parameters and get a real-time status of the sensors and motor
     controllers. 
     
   Jeep Platform Overview
     The Jeep will house an Arduino Mega, Xbee, a steering motor controller, and 2 drive motor
     controllers. I'm using the Mega because it has 4 hardware UARTs and I like the idea of having
     the motor controllers on their own serial line (with their own IO buffers).
     Later, I'm adding various sensors to the Jeep to measure just about everything. A shortlist 
     of sensors will consist of: hall-effect and magnets for wheel rotation speed and direction, 
     motor temperature sensors, accelerometer and gyroscope, and distance sensors for obstacle
     detection and collision avoidance.
     
   Connecting the Controller to the JP (Jeep Platform)
     I'll need to write a simple protocol to send controller messages from the Controller to the
     JP. The Jeep will then process the commands and adjust as necessary (to account for things such
     obstacles or traction control). 
   
   Finally, I will split the Arduino ino files into parts: one for the Controller and one for the
     platform. Each will have their own github repo and I will add variants as I experiment with
     different microcontrollers. (ie Teensy 3.1 and others)

*/

void setup(){
  
}

void loop(){
  
}
