
//GPIO for AVR

#include <avr/io.h>
#include "AVR_Ports.h"
#include "AVR_GPIO_Declarations.h"

int main(void)
{

	Port_Direction(C, input);
	Port_Direction(B, output);
	
	//Pin_Direction(C, 2, input);
	//Pin_Direction(B, 0, output);

	while(1)
	{
		if(Pin_Read(C, 2)) //pin is connected to source (SW-OFF)
		{
			Pin_Reset(B, 0); //0
			//Pin_Write(B, 0, 0); //0
		}
		else //pin is connected to ground (SW-ON)
		{
			Pin_Set(B, 0); //1
			//Pin_Write(B, 0, 1); //1
		}
	}
	
}


