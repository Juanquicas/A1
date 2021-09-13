#include <Arduino.h>
# include <Ultra.h>

Ultra u(2,3);
void setup()
{
u.init();


}

void loop()
{
u.read();
}
