
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed = 0;
	EVRID.ENABLE = 1;
}

void _CYCLIC ProgramCyclic(void)
{
	DRIVE(&EVRID);
}

void _EXIT ProgramExit(void)
{

}

