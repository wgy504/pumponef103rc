/**
 * @file    self_check_cali_time.h
 * @brief   校准时间自检 头文件
 * @author  ptz
 * @email   ptz19861212@163.com
 * @version 0.0.1
 * @date    2013-12-02 13:35:28 星期一 
 * @history (1).2013-12-02 13:35:28 星期一 create
 */
/* Copyright (C)
 * 
 * My own license
 * All right reserved
 * 
 */

#ifndef __SELF_CHECK_CALI_TIME_H__
#define __SELF_CHECK_CALI_TIME_H__

#include "self_check.h"

/**
 * @brief   自检初始化
 */
void SelfCheckCaliTimeInit(void);


// 自检的资源
extern const struct S_SelfCheckResource gSelfCheckRsrCaliTime;


#endif
