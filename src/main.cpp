#include <iostream>
#include "../include/Controller.h"

// Set up environment to run on Pi
#ifdef __arm__
  #include <wiringPi.h>
  #include <SDL3/SDL_main.h>
#endif


// Define PWM and digital pins for motor controls
#define AN1 18
#define AN2 19
#define DIG1_PIN 23
#define DIG2_PIN 24

// Set

int main()
{
  // Set up functionality for Pi
  #ifdef __arm__
    // uses BCM numbering of the GPIOs and directly accesses the GPIO registers.
    wiringPiSetupGpio();
  #else
    std::cout << "Hello, World!" << std::endl;

  #endif

  return 0;
}
