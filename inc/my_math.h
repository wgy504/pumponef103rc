/**
 * @file    my_math.h
 * @brief   数学相关
 * @author  ptz
 * @email   ptz19861212@163.com
 * @version 0.0.1
 * @date    2013-08-13 15:16:25 星期二 
 * @history (1).2013-08-13 15:16:25 星期二 create
 */
/* Copyright (C)
 * 
 * My own license
 * All right reserved
 * 
 */

#ifndef __MY_MATH_H__
#define __MY_MATH_H__

//除以10的运算
//(u8)(date * (((1u << 11) + 9) / 10) >> 8) >> 3	((1u << 11) + 9) /10 由编译器来计算得到205
//udiv8_t u8_div_10(uint8 var)
//{
//	udiv8_t ret;
//	ret.quot=(uint8)(var*((1U<<11)/10)>>8)>>3 ;  
//	ret.rem=var-ret.quot*10;
//	return ret;
//} 
//你取的是204，我取的是205，你可以计算一下，取204时误差很大的。
//我的取值205纯粹是通过圆整来的，不能随意切断去整。
//对于具有16位*16位的单片机来说，可以这样实现：
//#define DIV10(Divider) 
//(unsigned short)(((Divider) * (unsigned short)((1ul<<19)/10.d+0.5))>>16) >> 3 
//同样，32*32的则是这样：
//#define DIV10(Divider) (unsigned long)(((Divider) * (unsigned long)((1ull<<35)/10.d+0.5))>>32) >> 3 
//陷阱：
//以上采用浮点数的可能精度不够，导致结果不正确。
//经过分析，每次/10之后的小数位总是8，圆整时总是进位。因此你的通用算法可以写成这样：
//udiv8_t u8_div_10(uint8 var)
//{
//	udiv8_t ret;
//	ret.quot=(uint8)(var*((1U<<11)/10 + 1)>>8)>>3 ;              //在这里加上一个1，就好了。其它的同理  
//	ret.rem=var-ret.quot*10; 
//	return ret;
//}


//#define DIV_U8_10(date)				(uint8_t)(((date) * 205u) >> 11)	//(dat * 205) / 2048
//#define DIV_U16_10(date)			(uint16_t)(((date) * 6554ul) >> 16)	//(dat * 3277) / 32768  ((1ul << 15) + 2) /10 ????

//#define DIV_U16_10(date)		(uint16_t)(((date) * (uint32_t)52429) >> 19)
//#define DIV_U32_10(date)		(uint32_t)(((date) * (uint64_t)3435973836) >> 35)

#define DIV_VAR(typeadv, bits)  (((typeadv)1 << (bits + 3)) / 10 + 1)
#define DIV_U8_10(date)		\
			(uint8_t)((date * DIV_VAR(uint16_t, 8)) >> (8 + 3))
#define DIV_U16_10(date)	\
			(uint16_t)((date * DIV_VAR(uint32_t, 16)) >> (16 + 3))
#define DIV_U32_10(date)	\
			(uint32_t)((date * DIV_VAR(uint64_t, 32)) >> (32 + 3))


// 求间隔
#define GAP_GET(sum, len, num)	\
			(((sum) - (len) * (num)) / ((num) + 1))


// 求偶数，如果是奇数就+1
#define EVEN(a)					((a & 0x01) ? (a + 1) : a)

// a, b 按照单调增加的来排列
#define INCREASE(a, b)	\
			do {\
					if ((a) > (b))\
					{\
						SWAP(a, b);\
					}\
				} while(0)

// 计算数组包含有几个指针，主要用于字符串数组中包含的字符串数目
#define STR_NUM(a)			(sizeof(a) / sizeof(my_base_t))

#endif
