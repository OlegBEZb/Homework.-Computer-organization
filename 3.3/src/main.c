#include <stdint.h>
#include <stdbool.h> 
#include <math.h>
#include <string.h>

volatile uint8_t countSetBits(uint32_t n);

volatile uint8_t countLeadingZeros( uint32_t n);
 
int main(void)
{
	volatile int32_t abc=0x11ff0fff;
	volatile int32_t result=countLeadingZeros(abc);
	
	while(1);
	return 0;
}

volatile uint8_t countSetBits(uint32_t n)
{
	return ((n&1)==1)+((n&2)==2)+((n&4)==4)+((n&8)==8)+((n&16)==16)+((n&32)==32)+((n&1<<6)==(1<<6))+((n&1<<7)==(1<<7))+((n&1<<8)==(1<<8))+((n&1<<9)==(1<<9))+((n&1<<10)==(1<<10))+((n&1<<11)==(1<<11))+((n&1<<12)==(1<<12))+((n&1<<13)==(1<<13))+((n&1<<14)==(1<<14))+((n&1<<15)==(1<<15))+((n&1<<16)==(1<<16))+((n&1<<17)==(1<<17))+((n&1<<18)==(1<<18))+((n&1<<19)==(1<<19))+((n&1<<20)==(1<<20))+((n&1<<21)==(1<<21))+((n&1<<22)==(1<<22))+((n&1<<23)==(1<<23))+((n&1<<24)==(1<<24))+((n&1<<25)==(1<<25))+((n&1<<26)==(1<<26))+((n&1<<27)==(1<<27))+((n&1<<28)==(1<<28))+((n&1<<29)==(1<<29))+((n&1<<30)==(1<<30))+((n&1<<31)==(1<<31));
}
volatile uint8_t countLeadingZeros( uint32_t n)
{
	volatile uint32_t edinici=0xffffffff;
	volatile uint32_t number=(edinici-((n&1)==1))&(edinici-((n&1<<1)==(1<<1))*(edinici>>31))&(edinici-((n&1<<2)==(1<<2))*(edinici>>30))&(edinici-((n&1<<3)==(1<<3))*(edinici>>29))&(edinici-((n&1<<4)==(1<<4))*(edinici>>28))&(edinici-((n&1<<5)==(1<<5))*(edinici>>27))&(edinici-((n&1<<6)==(1<<6))*(edinici>>26))&(edinici-((n&1<<7)==(1<<7))*(edinici>>25))&(edinici-((n&1<<8)==(1<<8))*(edinici>>24))&(edinici-((n&1<<9)==(1<<9))*(edinici>>23))&(edinici-((n&1<<10)==(1<<10))*(edinici>>22))&(edinici-((n&1<<11)==(1<<11))*(edinici>>21))&(edinici-((n&1<<12)==(1<<12))*(edinici>>20))&(edinici-((n&1<<13)==(1<<13))*(edinici>>19))&(edinici-((n&1<<14)==(1<<14))*(edinici>>18))&(edinici-((n&1<<15)==(1<<15))*(edinici>>17))&(edinici-((n&1<<16)==(1<<16))*(edinici>>16))&(edinici-((n&1<<17)==(1<<17))*(edinici>>15))&(edinici-((n&1<<18)==(1<<18))*(edinici>>14))&(edinici-((n&1<<19)==(1<<19))*(edinici>>13))&(edinici-((n&1<<20)==(1<<20))*(edinici>>12))&(edinici-((n&1<<21)==(1<<21))*(edinici>>11))&(edinici-((n&1<<22)==(1<<22))*(edinici>>10))&(edinici-((n&1<<23)==(1<<23))*(edinici>>9))&(edinici-((n&1<<24)==(1<<24))*(edinici>>8))&(edinici-((n&1<<25)==(1<<25))*(edinici>>7))&(edinici-((n&1<<26)==(1<<26))*(edinici>>6))&(edinici-((n&1<<27)==(1<<27))*(edinici>>5))&(edinici-((n&1<<28)==(1<<28))*(edinici>>4))&(edinici-((n&1<<29)==(1<<29))*(edinici>>3))&(edinici-((n&1<<30)==(1<<30))*(edinici>>2))&(edinici-((n&1<<31)==(1<<31))*(edinici>>1));
	return countSetBits(number)-1;
}