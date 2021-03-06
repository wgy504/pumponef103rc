/**
 * @file    config_gas_h2.h
 * @brief   H2相关设置
 * @author  ptz
 * @email   ptz19861212@163.com
 * @version 0.0.1
 * @date    2013-12-19 23:51:16 星期四 
 * @history (1).2013-12-19 23:51:16 星期四 create
 */
/* Copyright (C)
 * 
 * My own license
 * All right reserved
 * 
 */

#ifndef __CONFIG_H2_H__
#define __CONFIG_H2_H__

#include "my_compile.h"
// 不需要包换那些 my_gas.h ，因为宏也只是替换，所以不需要包含气体名称的头文件


// 这个是为了O2和EX气体不能设置STEL和TWA进行的，
#include "my_gas_name.h"
// 这个是为了O2和EX气体不能设置STEL和TWA进行的，注意
// 预编译的判断不能有枚举和sizeof

// 气体
#define CONFIG_GAS						GAS_H2

// 气体单位
#define CONFIG_GAS_UNIT_INDEX			GAS_UNIT_PPM
#define CONFIG_GAS_UNIT					" PPM"

// 气体名称
#define CONFIG_GAS_NAME_INDEX			GAS_NAME_INDEX_H2
#define CONFIG_GAS_NAME_EN				"H2"
#define CONFIG_GAS_NAME_CN				"氢气"

// 气体方向
#define CONFIG_GAS_DIRECT				GAS_DIRECT_POSITIVE


// 校准日期
#define CONFIG_GAS_CALI_DATE_MON				1
#define CONFIG_GAS_CALI_DATE_DAY				22
#define CONFIG_GAS_CALI_DATE_YEAR				2014
// 校准时间
#define CONFIG_GAS_CALI_TIME_HOUR				9
#define CONFIG_GAS_CALI_TIME_MIN				10
#define CONFIG_GAS_CALI_TIME_SEC				11

#if (CONFIG_H2__1000 == PRE_COMP_ENABLE)
	// 小数点
	#define CONFIG_GAS_POINT					POINT_HHHHH
	// 量程
	#define CONFIG_GAS_RANGE					1000
	// 低报
	#define CONFIG_GAS_ALARM_LOWER			100
	// 高报
	#define CONFIG_GAS_ALARM_UPPER			200
	// STEL
	#define CONFIG_GAS_ALARM_STEL			100
	// TWA
	#define CONFIG_GAS_ALARM_TWA			100
	// ref1 数值
	#define CONFIG_GAS_REF1_VALUE			0
	// ref1 ADC
	#define CONFIG_GAS_REF1_ADC				200

	// ref2 数值
	#define CONFIG_GAS_REF2_VALUE			0
	// ref2 ADC
	#define CONFIG_GAS_REF2_ADC				0

	// ref3 数值
	#define CONFIG_GAS_REF3_VALUE			700
	// ref3 ADC
	#define CONFIG_GAS_REF3_ADC				920

	// ref4 数值
	#define CONFIG_GAS_REF4_VALUE			0
	// ref4 ADC
	#define CONFIG_GAS_REF4_ADC				0

	// ref5 数值
	#define CONFIG_GAS_REF5_VALUE			0
	// ref5 ADC
	#define CONFIG_GAS_REF5_ADC				0

	// 在最低点的屏蔽数值
	#define CONFIG_GAS_REF1_THRESHOLD		2
	// 标气和正常检测气体的时候的屏蔽数值
	#define CONFIG_GAS_VALUE_THRESHOLD		2
	// 标零时候的ADC范围
	#define CONFIG_GAS_REF1_RANGE			90

#elif (CONFIG_H2__2000 == PRE_COMP_ENABLE)
	// 小数点
	#define CONFIG_GAS_POINT					POINT_HHHHH
	// 量程
	#define CONFIG_GAS_RANGE					2000
	// 低报
	#define CONFIG_GAS_ALARM_LOWER			200
	// 高报
	#define CONFIG_GAS_ALARM_UPPER			400
	// STEL
	#define CONFIG_GAS_ALARM_STEL			200
	// TWA
	#define CONFIG_GAS_ALARM_TWA			200
	// ref1 数值
	#define CONFIG_GAS_REF1_VALUE			0
	// ref1 ADC
	#define CONFIG_GAS_REF1_ADC				200

	// ref2 数值
	#define CONFIG_GAS_REF2_VALUE			0
	// ref2 ADC
	#define CONFIG_GAS_REF2_ADC				0

	// ref3 数值
	#define CONFIG_GAS_REF3_VALUE			700
	// ref3 ADC
	#define CONFIG_GAS_REF3_ADC				920

	// ref4 数值
	#define CONFIG_GAS_REF4_VALUE			0
	// ref4 ADC
	#define CONFIG_GAS_REF4_ADC				0

	// ref5 数值
	#define CONFIG_GAS_REF5_VALUE			0
	// ref5 ADC
	#define CONFIG_GAS_REF5_ADC				0

	// 在最低点的屏蔽数值
	#define CONFIG_GAS_REF1_THRESHOLD		2
	// 标气和正常检测气体的时候的屏蔽数值
	#define CONFIG_GAS_VALUE_THRESHOLD		2
	// 标零时候的ADC范围
	#define CONFIG_GAS_REF1_RANGE			90

#endif

// 零点ADC
#define CONFIG_GAS_ZERO_ADC			CONFIG_GAS_REF1_ADC
// 零点数值
#define CONFIG_GAS_ZERO_VALUE		CONFIG_GAS_REF1_VALUE
// 零点范围
#define CONFIG_GAS_ZERO_RANGE		CONFIG_GAS_REF1_RANGE


#endif
