#ifndef __APP_H
#define __APP_H

/*NO Device mode*/
#define _NO_DEVICE 0

#define DD_NUM_OF_MD 4
#define DD_NUM_OF_AB 0
#define DD_NUM_OF_SV 0

#include "DD_RC.h"
#include "DD_MD.h"
#include "DD_SV.h"

int appTask(void);
int appInit(void);

/* 駆動用モータ */
#define MECHA1_MD0 0
#define MECHA1_MD1 1
/* 腕用モータ */
#define MECHA1_MD2 2
#define MECHA1_MD3 3
/* 上部回転用モータ */
//#define MECHA1_MD4 4
 
#define CENTRAL_THRESHOLD 0

#define MD_GAIN (DD_MD_MAX_DUTY  / DD_RC_ANALOG_MAX / 2 )

/* 腕振り用モータのduty */
#define _ARM_DUTY (DD_MD_MAX_DUTY-1)
#define MD_ARM_DUTY _ARM_DUTY

/* 上部回転用のモータ */
#define _ROTATE_DUTY (DD_MD_MAX_DUTY-3000)
#define MD_TURN_RIGHT_DUTY _ROTATE_DUTY
#define MD_TURN_LEFT_DUTY -_ROTATE_DUTY
//arm関連
#define ARM1_DUTY 4000
#define ARM2_DUTY 4000

#endif
