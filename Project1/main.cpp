#include <iostream>

int main()
{

	int A = 5;
	int B = 10;
	int C = 0;

	__asm
	{
		pushad
		mov eax, A
		mov ebx, B
		add eax, ebx
		mov C, eax
		popad
	}

	printf("5 + 10 = %d\n", C);
	return 0;
}