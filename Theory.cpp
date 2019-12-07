variable:
	
	a=10 // integer size:2 bytes.,  range:-32,768 to +32767	%d
	b=12.4 // float  size :4bytes., range : 3.4e-34 to 3.4e+34	%f
	c=12.400000
		// double  ., size: 8 bytes., range 3.4 e-308 to 3.4 e+308	%lf
	c='a';
		// 1 byte -128 to +127
	%c
	str[10]="gitam";
	//9
	//10 bytes
	%s
	long, short, signed, unsigned
	int 2 bytes
	long int 4 bytes
	-2146473648 to +2146473642
	unsigned int 0 to 65535
	unsigned char 0 to 255
	%u--- unsigned integer
	ASCII
	 total 256 ASCII values are present
	 A= 65,,,,,Z=90
	 a=97,,,,,z=122
	 0=48,,,,,9=57
	 space=' '=32
	 int a=015;	//(15)base8
	 printf("%d",a);
	 printf("%d",a); // decimal equalent of 15
	 int b=0x17;
	 printf("%d",b);	//(17) base 16
	 
Operators:

1.Arthematic operators:
		+,-,/,* and %
	a=10,b=3
	a%b=1

2. Logical operator
	 && and
	 or ||
	 not |
exp1 exp2 exp1&&exp2 exp1||exp2 |exp1
T		T	   T	  		T		F
T		F	   F			T		F
F		T	   F			T		T
F		F	   F			F		T

3. Realational operators
< <= >>= == !=

4.Assignment Operators
=
+=, -=, /=, *= ---> compound assignments
a+=b-----> a=a+b

5. Sizeof()
used to find the size of datatype/literals/variables

6.Conditional Operator or Ternary Operator
conditional operator is equal to if else condition
exp1:exp2:exp3;
---
if(exp1)
exp2;
else
exp3;

7.Increment / Decrement operation
a=10;
++a ===.//pre increment
a++ === // post increment
---a === // pre decrment
a-- === //post decrement

8. Bitwise Operator

& and
| or
^ XOR

