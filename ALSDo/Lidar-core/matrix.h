#ifndef MATRIX_H
#define MATRIX_H

#ifdef __cplusplus
extern "C" 
{
#endif

/*******************************************************************************
* yanml (2006)
* �򵥵ľ������㣬�������桢ת�á���ˡ���С����
* ���ڷ��������⣬Ӧ���ǲ���LU�ֽ⣬�Եõ����ߵ�����Ч�ʺ��ȶ���
*******************************************************************************/

int inverse(double *const m, double *const nm, const int &n);
void transpose(double *const m, double *const nm, const int &w, const int &h);
int multiply(double *const m1, double *const m2, double *const nm, const int &w1, 
	const int &h1, const int &w2, const int &h2);
int least_square(double *const a, double *const l, double *const x,const int &wa, 
	const int &ha,const int &wl,const int &hl);


#ifdef __cplusplus
}
#endif

#endif



