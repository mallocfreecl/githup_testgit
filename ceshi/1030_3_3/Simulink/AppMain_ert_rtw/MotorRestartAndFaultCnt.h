/*
 * File: MotorRestartAndFaultCnt.h
 *
 * Code generated for Simulink model 'AppMain'.
 *
 * Model version                  : 5.32
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Wed Sep 18 17:44:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->MSP430
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MotorRestartAndFaultCnt_h_
#define RTW_HEADER_MotorRestartAndFaultCnt_h_
#ifndef AppMain_COMMON_INCLUDES_
#define AppMain_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* AppMain_COMMON_INCLUDES_ */

/* Block states (default storage) for system 'MotorRestartAndFaultCnt' (':815') */
typedef struct
{
  uint16_T RestartIntervalLast_PreviousInp;/* 'RestartIntervalLast' (':2133') */
  uint16_T TimeCnt;                    /* 'MotorRestartFSM' (':871') */
  int8_T If_ActiveSubsystem;           /* 'If' (':1833') */
  uint8_T ShortCntLast_PreviousInput;  /* 'ShortCntLast' (':834') */
  uint8_T OpenCntLast_PreviousInput;   /* 'OpenCntLast' (':2085') */
  uint8_T LockCntLast_PreviousInput;   /* 'LockCntLast' (':2086') */
  uint8_T Memory_PreviousInput;        /* 'Memory' (':3185') */
  uint8_T is_active_c1_AppMain;        /* 'MotorRestartFSM' (':871') */
  uint8_T is_c1_AppMain;               /* 'MotorRestartFSM' (':871') */
}
DW_MotorRestartAndFaultCnt_T;

extern void Short(uint16_T *rty_Interval);
extern void MotorRestartAndFaultCnt_Init(DW_MotorRestartAndFaultCnt_T *localDW);
extern void MotorRestartAndFaultCnt(int16_T rtu_TargetSpeed, boolean_T
  rtu_ECUFault, boolean_T rtu_RestartComplete, boolean_T rtu_IsMotorShort,
  boolean_T rtu_IsMotorLock, boolean_T rtu_IsMotorOpenLoad, boolean_T
  rtu_IsMotorDryRunning, int16_T rtu_PwmInCtrlSpeed, int16_T *rty_FaultSpeed,
  boolean_T *rty_FaultRestartEn, uint8_T *rty_ShortCnt, uint8_T *rty_OpenCnt,
  uint8_T *rty_LockCnt, DW_MotorRestartAndFaultCnt_T *localDW);

#endif                               /* RTW_HEADER_MotorRestartAndFaultCnt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
