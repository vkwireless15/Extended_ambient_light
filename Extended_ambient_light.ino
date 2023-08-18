#define DriverDoor_pin 2 
#define FrontPasDoor_pin 3 
#define RearLeftDoor_pin 4 
#define RearRightDoor_pin 5 
#define TorpLeft_pin 6 
#define TorpRight_pin 7 
#define FootLightLed_pin 8 
#define DoorknobLed_pin 9 
#define PocketLed_pin 10    

#define Doors 40
#define TorpRightMax 40
#define TorpLeftMin 30

#define FootLight 1
#define Doorknob 1
#define Pocket 1

#define COLOR_DEBTH 3
#include <microLED.h>   // подключаем библу

microLED<Doors, DriverDoor_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> DriverDoor;
microLED<Doors, FrontPasDoor_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> FrontPasDoor;
microLED<Doors, RearLeftDoor_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> RearLeftDoor;
microLED<Doors, RearRightDoor_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> RearRightDoor;

microLED<TorpLeftMin, TorpLeft_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> TorpLeft;
microLED<TorpRightMax, TorpRight_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> TorpRight;

microLED<FootLight, FootLightLed_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> FootLightLed;
microLED<Doorknob, DoorknobLed_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> DoorknobLed;
microLED<Pocket, PocketLed_pin, MLED_NO_CLOCK, LED_WS2818, ORDER_GRB, CLI_AVER> PocketLed;

char DoorBrightness = 128;
char TorpBrightness = 128;
char FootBrightness = 128;
char DoorknobBrightness = 128;
char PocketBrightness = 128;

void setup() {
  DriverDoor.setBrightness(DoorBrightness);
  FrontPasDoor.setBrightness(DoorBrightness);
  RearLeftDoor.setBrightness(DoorBrightness);
  RearRightDoor.setBrightness(DoorBrightness);
  TorpLeft.setBrightness(TorpBrightness);
  TorpRight.setBrightness(TorpBrightness);
  FootLightLed.setBrightness(FootBrightness);
  DoorknobLed.setBrightness(DoorknobBrightness);
  PocketLed.setBrightness(PocketBrightness);
}

void loop() {  
  DriverDoor.show();   // вывод
  delay(30);      // 30 кадров в секунду
}

//DriverDoor.setBrightness(bright);
