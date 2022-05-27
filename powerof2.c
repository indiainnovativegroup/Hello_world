typedef unsigned int U16;
typedef signed char S8;
static S8 chkIsPowerOfTwo(const U16 num);

S8 chkIsPowerOfTwo(const U16 num)
{
	U16 y;

	S8 res =-3;
	y=(U16)1U;


	if((num==0)||(num&(U16)(0x0001U)==1))		/*LSB equal to 1, then not a power of 2*/
	{
		res = -1;
	}
	else
	{
		while(y<num)
		{
			y<<=(U16)1U;
		}
		if(y==num)
			res=1;
		else
			res=-1;
	}

	return(res);
}