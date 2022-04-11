
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{

}

void _CYCLIC ProgramCyclic(void)
{
	if (button5 == 1){
		if(counter%2 == 0){
			LED[0]=!LED[0];
		}
		if(counter%4 == 0){
			LED[1]=!LED[1];
		}
		if(counter%8 == 0){
			LED[2]=!LED[2];
		}
		if(counter%16 == 0){
			LED[3]=!LED[3];
		}
		counter++;
	
	}
	else{
		LED[0] = button1;
		LED[1] = button2;
		LED[2] = button3;
		LED[3] = button4;
	}
}
void _EXIT ProgramExit(void)
{

}

