/*
* 파일명 : "21912183김재현 HW9 9.1.sln"
* 프로그램의 목적 및 기본 기능 :
* -복소수의 사칙연산과 구조체의 정렬을 하는 프로그램
* 프로그램 작성자 : 김재현(2191283)
* 최초 프로그램 작성일 : 2022.05.08
* ======================================================================================
* 프로그램 수정 / 보완 이력
* ======================================================================================
* 프로그램 수정자	일자		버전	수정내용
* 김재현			2022.05.08	v1.0	최초작성
*/
#include "StdH.h"
#include "Cmplx.h"

int main(void)
{
	Cmplx cmplxs[7];
	cmplxs[0] = inputCmplx();
	cmplxs[1] = inputCmplx();
	printf("cmplxs[0] = "); printCmplx(cmplxs[0]); printf("\n");
	printf("cmplxs[1] = "); printCmplx(cmplxs[1]); printf("\n");
	cmplxs[2] = cmplxAdd(cmplxs[0], cmplxs[1]);	//복소수 덧셈
	printf("cmplxs[2] = cmplxs[0] + cmplxs[1] = \n ");
	printCmplx(cmplxs[0]); printf(" + "); printCmplx(cmplxs[1]);
	printf(" = "); printCmplx(cmplxs[2]); printf("\n");
	cmplxs[3] = cmplxSub(cmplxs[0], cmplxs[1]);	//복소수 뺄셈
	printf("cmplxs[3] = cmplxs[0] - cmplxs[1] = \n ");
	printCmplx(cmplxs[0]); printf(" - "); printCmplx(cmplxs[1]);
	printf(" = "); printCmplx(cmplxs[3]); printf("\n");
	cmplxs[4] = cmplxMul(cmplxs[0], cmplxs[1]);	//복소수 곱셈
	printf("cmplxs[4] = cmplxs[0] * cmplxs[1] = \n ");
	printCmplx(cmplxs[0]); printf(" * "); printCmplx(cmplxs[1]);
	printf(" = "); printCmplx(cmplxs[4]); printf("\n");
	cmplxs[5] = cmplxDiv(cmplxs[0], cmplxs[1]);	//복소수 나눗셈
	printf("cmplxs[5] = cmplxs[0] / cmplxs[1] = \n ");
	printCmplx(cmplxs[0]); printf(" / "); printCmplx(cmplxs[1]);
	printf(" = "); printCmplx(cmplxs[5]); printf("\n");
	cmplxs[6] = cmplxMul(cmplxs[1], cmplxs[5]);
	printf("cmplxs[6] = cmplxs[1] * cmplxs[5] = \n ");
	printCmplx(cmplxs[1]); printf(" * "); printCmplx(cmplxs[5]);
	printf(" = "); printCmplx(cmplxs[6]); printf("\n");
	printf("Before sorting complexs: \n");
	for (int i = 0; i < 7; i++)
	{
		printf("cmplxs[%d] = ", i); printCmplx(cmplxs[i]);
		printf("\n");
	}
	sortCmplx(cmplxs, 7);	//구조체 정렬
	printf("Sorted complexs: \n");
	for (int i = 0; i < 7; i++)
	{
		printf("cmplxs[%d] = ", i); printCmplx(cmplxs[i]);
		printf("\n");
	}
	return 0;
}