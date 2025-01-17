//  /////////////////////////////////////////////////////
//  // DO NOT EDIT.  This is a machine generated file. //
//  /////////////////////////////////////////////////////
/******************************************************************************/
/*                                                                            */
/*  Copyright (C) 2016, FLIR Systems                                          */
/*  All rights reserved.                                                      */
/*                                                                            */
/*  This document is controlled to FLIR Technology Level 2. The information   */
/*  contained in this document pertains to a dual use product controlled for  */
/*  export by the Export Administration Regulations (EAR). Diversion contrary */
/*  to US law is prohibited. US Department of Commerce authorization is not   */
/*  required prior to export or transfer to foreign persons or parties unless */
/*  otherwise prohibited.                                                     */
/*                                                                            */
/******************************************************************************/


#ifndef CLIENT_API_H
#define CLIENT_API_H

#include <stdint.h>
#include "EnumTypes.h"
#include "ReturnCodes.h"
#include "Serializer_Struct.h"
#include "Client_Packager.h"

#ifdef _WIN32
#define FLR_EXPORT __declspec(dllexport)
#else
#define FLR_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_MEMORY_CHUNK  256
FLR_EXPORT FLR_RESULT gaoSetGainState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetGainState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetFfcState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetFfcState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetTempCorrectionState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetTempCorrectionState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetIConstL(const int16_t data);
FLR_EXPORT FLR_RESULT gaoGetIConstL(int16_t *data);
FLR_EXPORT FLR_RESULT gaoSetIConstM(const int16_t data);
FLR_EXPORT FLR_RESULT gaoGetIConstM(int16_t *data);
FLR_EXPORT FLR_RESULT gaoSetAveragerState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetAveragerState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetNumFFCFrames(const uint16_t data);
FLR_EXPORT FLR_RESULT gaoGetNumFFCFrames(uint16_t *data);
FLR_EXPORT FLR_RESULT gaoGetAveragerThreshold(uint16_t *data);
FLR_EXPORT FLR_RESULT gaoSetRnsState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetRnsState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetTestRampState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetTestRampState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetSffcState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetSffcState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetRpmState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetRpmState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoGetRpmThreshold(uint16_t *threshold);
FLR_EXPORT FLR_RESULT gaoSetFfcZeroMeanState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT gaoGetFfcZeroMeanState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT gaoSetRnsPopThreshold(const uint16_t threshold);
FLR_EXPORT FLR_RESULT gaoGetRnsPopThreshold(uint16_t *threshold);
FLR_EXPORT FLR_RESULT gaoSetRnsCloseThreshold(const uint16_t threshold);
FLR_EXPORT FLR_RESULT gaoGetRnsCloseThreshold(uint16_t *threshold);
FLR_EXPORT FLR_RESULT gaoSetRnsTooFewQuit(const uint16_t data);
FLR_EXPORT FLR_RESULT gaoGetRnsTooFewQuit(uint16_t *data);
FLR_EXPORT FLR_RESULT gaoSetRnsTooFew(const uint16_t data);
FLR_EXPORT FLR_RESULT gaoGetRnsTooFew(uint16_t *data);
FLR_EXPORT FLR_RESULT gaoSetRnsMinCorrection(const uint16_t data);
FLR_EXPORT FLR_RESULT gaoGetRnsMinCorrection(uint16_t *data);
FLR_EXPORT FLR_RESULT gaoSetRnsDamping(const uint8_t data);
FLR_EXPORT FLR_RESULT gaoGetRnsDamping(uint8_t *data);
FLR_EXPORT FLR_RESULT gaoSetRnsFrameHysteresis(const uint16_t data);
FLR_EXPORT FLR_RESULT gaoGetRnsFrameHysteresis(uint16_t *data);
FLR_EXPORT FLR_RESULT gaoSetRnsBadDamping(const uint8_t data);
FLR_EXPORT FLR_RESULT gaoGetRnsBadDamping(uint8_t *data);
FLR_EXPORT FLR_RESULT gaoSetRnsNumGoodDampingThreshold(const uint16_t data);
FLR_EXPORT FLR_RESULT gaoGetRnsNumGoodDampingThreshold(uint16_t *data);
FLR_EXPORT FLR_RESULT gaoGetRnsFfcDesired(uint32_t *data);
FLR_EXPORT FLR_RESULT roicGetFPATemp(uint16_t *data);
FLR_EXPORT FLR_RESULT roicGetFrameCount(uint32_t *data);
FLR_EXPORT FLR_RESULT roicGetActiveNormalizationTarget(uint16_t *data);
FLR_EXPORT FLR_RESULT roicSetFPARampState(const FLR_ENABLE_E state);
FLR_EXPORT FLR_RESULT roicGetFPARampState(FLR_ENABLE_E *state);
FLR_EXPORT FLR_RESULT roicGetSensorADC1(uint16_t *data);
FLR_EXPORT FLR_RESULT roicGetSensorADC2(uint16_t *data);
FLR_EXPORT FLR_RESULT roicSetFPATempOffset(const int16_t data);
FLR_EXPORT FLR_RESULT roicGetFPATempOffset(int16_t *data);
FLR_EXPORT FLR_RESULT roicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data);
FLR_EXPORT FLR_RESULT roicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data);
FLR_EXPORT FLR_RESULT roicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table);
FLR_EXPORT FLR_RESULT roicSetFPATempValue(const uint16_t data);
FLR_EXPORT FLR_RESULT roicGetFPATempValue(uint16_t *data);
FLR_EXPORT FLR_RESULT bprSetState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT bprGetState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT telemetrySetState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT telemetryGetState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT telemetrySetLocation(const FLR_TELEMETRY_LOC_E data);
FLR_EXPORT FLR_RESULT telemetryGetLocation(FLR_TELEMETRY_LOC_E *data);
FLR_EXPORT FLR_RESULT telemetrySetPacking(const FLR_TELEMETRY_PACKING_E data);
FLR_EXPORT FLR_RESULT telemetryGetPacking(FLR_TELEMETRY_PACKING_E *data);
FLR_EXPORT FLR_RESULT bosonGetCameraSN(uint32_t *data);
FLR_EXPORT FLR_RESULT bosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data);
FLR_EXPORT FLR_RESULT bosonGetSensorSN(uint32_t *data);
FLR_EXPORT FLR_RESULT bosonRunFFC();
FLR_EXPORT FLR_RESULT bosonSetFFCTempThreshold(const uint16_t data);
FLR_EXPORT FLR_RESULT bosonGetFFCTempThreshold(uint16_t *data);
FLR_EXPORT FLR_RESULT bosonSetFFCFrameThreshold(const uint32_t data);
FLR_EXPORT FLR_RESULT bosonGetFFCFrameThreshold(uint32_t *data);
FLR_EXPORT FLR_RESULT bosonGetFFCInProgress(int16_t *data);
FLR_EXPORT FLR_RESULT bosonReboot();
FLR_EXPORT FLR_RESULT bosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode);
FLR_EXPORT FLR_RESULT bosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode);
FLR_EXPORT FLR_RESULT bosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode);
FLR_EXPORT FLR_RESULT bosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode);
FLR_EXPORT FLR_RESULT bosonWriteDynamicHeaderToFlash();
FLR_EXPORT FLR_RESULT bosonReadDynamicHeaderFromFlash();
FLR_EXPORT FLR_RESULT bosonRestoreFactoryDefaultsFromFlash();
FLR_EXPORT FLR_RESULT bosonRestoreFactoryBadPixelsFromFlash();
FLR_EXPORT FLR_RESULT bosonWriteBadPixelsToFlash();
FLR_EXPORT FLR_RESULT bosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch);
FLR_EXPORT FLR_RESULT bosonSetBadPixelLocation(const uint32_t row, const uint32_t col);
FLR_EXPORT FLR_RESULT bosonlookupFPATempDegCx10(int16_t *data);
FLR_EXPORT FLR_RESULT bosonlookupFPATempDegKx10(uint16_t *data);
FLR_EXPORT FLR_RESULT bosonWriteLensNvFfcToFlash();
FLR_EXPORT FLR_RESULT bosonWriteLensGainToFlash();
FLR_EXPORT FLR_RESULT bosonSetLensNumber(const uint32_t lensNumber);
FLR_EXPORT FLR_RESULT bosonGetLensNumber(uint32_t *lensNumber);
FLR_EXPORT FLR_RESULT bosonSetTableNumber(const uint32_t tableNumber);
FLR_EXPORT FLR_RESULT bosonGetTableNumber(uint32_t *tableNumber);
FLR_EXPORT FLR_RESULT bosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN);
FLR_EXPORT FLR_RESULT bosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct);
FLR_EXPORT FLR_RESULT bosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct);
FLR_EXPORT FLR_RESULT bosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag);
FLR_EXPORT FLR_RESULT bosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag);
FLR_EXPORT FLR_RESULT bosonGetCLowToHighPercent(uint32_t *cLowToHighPercent);
FLR_EXPORT FLR_RESULT bosonGetMaxNUCTables(uint32_t *maxNUCTables);
FLR_EXPORT FLR_RESULT bosonGetMaxLensTables(uint32_t *maxLensTables);
FLR_EXPORT FLR_RESULT bosonGetFfcWaitCloseFrames(uint16_t *data);
FLR_EXPORT FLR_RESULT bosonSetFfcWaitCloseFrames(const uint16_t data);
FLR_EXPORT FLR_RESULT bosonCheckForTableSwitch();
FLR_EXPORT FLR_RESULT bosonGetDesiredTableNumber(uint32_t *desiredTableNumber);
FLR_EXPORT FLR_RESULT bosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus);
FLR_EXPORT FLR_RESULT bosonGetFfcDesired(uint32_t *ffcDesired);
FLR_EXPORT FLR_RESULT bosonGetLastFFCFrameCount(uint32_t *frameCount);
FLR_EXPORT FLR_RESULT bosonGetLastFFCTempDegKx10(uint16_t *temp);
FLR_EXPORT FLR_RESULT bosonGetTableSwitchDesired(uint16_t *tableSwitchDesired);
FLR_EXPORT FLR_RESULT bosonGetOverTempThreshold(float *temperatureInC);
FLR_EXPORT FLR_RESULT bosonGetLowPowerMode(uint16_t *lowPowerMode);
FLR_EXPORT FLR_RESULT bosonGetOverTempEventOccurred(uint16_t *overTempEventOccurred);
FLR_EXPORT FLR_RESULT bosonSetPermitThermalShutdownOverride(const FLR_ENABLE_E permitThermalShutdownOverride);
FLR_EXPORT FLR_RESULT bosonGetPermitThermalShutdownOverride(FLR_ENABLE_E *permitThermalShutdownOverride);
FLR_EXPORT FLR_RESULT bosonGetMyriadTemp(float *myriadTemp);
FLR_EXPORT FLR_RESULT bosonGetNvFFCNucTableNumberLens0(int32_t *nvFFCNucTableNumberLens0);
FLR_EXPORT FLR_RESULT bosonGetNvFFCNucTableNumberLens1(int32_t *nvFFCNucTableNumberLens1);
FLR_EXPORT FLR_RESULT bosonGetNvFFCFPATempDegKx10Lens0(uint16_t *nvFFCFPATempDegKx10Lens0);
FLR_EXPORT FLR_RESULT bosonGetNvFFCFPATempDegKx10Lens1(uint16_t *nvFFCFPATempDegKx10Lens1);
FLR_EXPORT FLR_RESULT bosonSetFFCWarnTimeInSecx10(const uint16_t ffcWarnTime);
FLR_EXPORT FLR_RESULT bosonGetFFCWarnTimeInSecx10(uint16_t *ffcWarnTime);
FLR_EXPORT FLR_RESULT bosonGetOverTempEventCounter(uint32_t *overTempEventCounter);
FLR_EXPORT FLR_RESULT bosonSetOverTempTimerInSec(const uint16_t overTempTimerInSec);
FLR_EXPORT FLR_RESULT bosonGetOverTempTimerInSec(uint16_t *overTempTimerInSec);
FLR_EXPORT FLR_RESULT bosonUnloadCurrentLensCorrections();
FLR_EXPORT FLR_RESULT bosonSetTimeForQuickFFCsInSecs(const uint32_t timeForQuickFFCsInSecs);
FLR_EXPORT FLR_RESULT bosonGetTimeForQuickFFCsInSecs(uint32_t *timeForQuickFFCsInSecs);
FLR_EXPORT FLR_RESULT bosonReloadCurrentLensCorrections();
FLR_EXPORT FLR_RESULT bosonGetBootTimestamps(float *FirstLight, float *StartInit, float *BosonExecDone, float *Timestamp4);
FLR_EXPORT FLR_RESULT bosonSetExtSyncMode(const FLR_BOSON_EXT_SYNC_MODE_E mode);
FLR_EXPORT FLR_RESULT bosonGetExtSyncMode(FLR_BOSON_EXT_SYNC_MODE_E *mode);
FLR_EXPORT FLR_RESULT bosonGetSensorHostCalVersion(uint32_t *version);
FLR_EXPORT FLR_RESULT dvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState);
FLR_EXPORT FLR_RESULT dvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState);
FLR_EXPORT FLR_RESULT dvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format);
FLR_EXPORT FLR_RESULT dvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format);
FLR_EXPORT FLR_RESULT dvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings);
FLR_EXPORT FLR_RESULT dvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings);
FLR_EXPORT FLR_RESULT dvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings);
FLR_EXPORT FLR_RESULT dvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings);
FLR_EXPORT FLR_RESULT dvoApplyCustomSettings();
FLR_EXPORT FLR_RESULT dvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode);
FLR_EXPORT FLR_RESULT dvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode);
FLR_EXPORT FLR_RESULT dvoSetType(const FLR_DVO_TYPE_E tap);
FLR_EXPORT FLR_RESULT dvoGetType(FLR_DVO_TYPE_E *tap);
FLR_EXPORT FLR_RESULT dvoSetVideoStandard(const FLR_DVO_VIDEO_STANDARD_E videoStandard);
FLR_EXPORT FLR_RESULT dvoGetVideoStandard(FLR_DVO_VIDEO_STANDARD_E *videoStandard);
FLR_EXPORT FLR_RESULT dvoSetCheckVideoDacPresent(const FLR_ENABLE_E checkVideoDacPresent);
FLR_EXPORT FLR_RESULT dvoGetCheckVideoDacPresent(FLR_ENABLE_E *checkVideoDacPresent);
FLR_EXPORT FLR_RESULT dvoGetClockInfo(uint32_t *horizontalSyncWidth, uint32_t *verticalSyncWidth, uint32_t *clocksPerRowPeriod, uint32_t *horizontalFrontPorch, uint32_t *horizontalBackPorch, uint32_t *frontTelemetryPixels, uint32_t *rearTelemetryPixels, uint32_t *videoColumns, uint32_t *validColumns, uint32_t *telemetryRows, uint32_t *videoRows, uint32_t *validRows, uint32_t *verticalFrontPorch, uint32_t *verticalBackPorch, uint32_t *rowPeriodsPerFrame, uint32_t *clocksPerFrame, float *clockRateInMHz, float *frameRateInHz, uint32_t *validOnRisingEdge, uint32_t *dataWidthInBits);
FLR_EXPORT FLR_RESULT captureSingleFrame();
FLR_EXPORT FLR_RESULT captureFrames(const FLR_CAPTURE_SETTINGS_T data);
FLR_EXPORT FLR_RESULT captureSingleFrameWithSrc(const FLR_CAPTURE_SRC_E data);
FLR_EXPORT FLR_RESULT captureSingleFrameToFile();
FLR_EXPORT FLR_RESULT scnrSetEnableState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT scnrGetEnableState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT scnrSetThColSum(const uint16_t data);
FLR_EXPORT FLR_RESULT scnrGetThColSum(uint16_t *data);
FLR_EXPORT FLR_RESULT scnrSetThPixel(const uint16_t data);
FLR_EXPORT FLR_RESULT scnrGetThPixel(uint16_t *data);
FLR_EXPORT FLR_RESULT scnrSetMaxCorr(const uint16_t data);
FLR_EXPORT FLR_RESULT scnrGetMaxCorr(uint16_t *data);
FLR_EXPORT FLR_RESULT scnrGetThPixelApplied(uint16_t *data);
FLR_EXPORT FLR_RESULT scnrGetMaxCorrApplied(uint16_t *data);
FLR_EXPORT FLR_RESULT scnrSetThColSumSafe(const uint16_t data);
FLR_EXPORT FLR_RESULT scnrGetThColSumSafe(uint16_t *data);
FLR_EXPORT FLR_RESULT scnrSetThPixelSafe(const uint16_t data);
FLR_EXPORT FLR_RESULT scnrGetThPixelSafe(uint16_t *data);
FLR_EXPORT FLR_RESULT scnrSetMaxCorrSafe(const uint16_t data);
FLR_EXPORT FLR_RESULT scnrGetMaxCorrSafe(uint16_t *data);
FLR_EXPORT FLR_RESULT agcSetPercentPerBin(const float data);
FLR_EXPORT FLR_RESULT agcGetPercentPerBin(float *data);
FLR_EXPORT FLR_RESULT agcSetLinearPercent(const float data);
FLR_EXPORT FLR_RESULT agcGetLinearPercent(float *data);
FLR_EXPORT FLR_RESULT agcSetOutlierCut(const float data);
FLR_EXPORT FLR_RESULT agcGetOutlierCut(float *data);
FLR_EXPORT FLR_RESULT agcGetDrOut(float *data);
FLR_EXPORT FLR_RESULT agcSetMaxGain(const float data);
FLR_EXPORT FLR_RESULT agcGetMaxGain(float *data);
FLR_EXPORT FLR_RESULT agcSetdf(const float data);
FLR_EXPORT FLR_RESULT agcGetdf(float *data);
FLR_EXPORT FLR_RESULT agcSetGamma(const float data);
FLR_EXPORT FLR_RESULT agcGetGamma(float *data);
FLR_EXPORT FLR_RESULT agcGetFirstBin(uint32_t *data);
FLR_EXPORT FLR_RESULT agcGetLastBin(uint32_t *data);
FLR_EXPORT FLR_RESULT agcSetDetailHeadroom(const float data);
FLR_EXPORT FLR_RESULT agcGetDetailHeadroom(float *data);
FLR_EXPORT FLR_RESULT agcSetd2br(const float data);
FLR_EXPORT FLR_RESULT agcGetd2br(float *data);
FLR_EXPORT FLR_RESULT agcSetSigmaR(const float data);
FLR_EXPORT FLR_RESULT agcGetSigmaR(float *data);
FLR_EXPORT FLR_RESULT agcSetUseEntropy(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT agcGetUseEntropy(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT agcSetROI(const FLR_ROI_T roi);
FLR_EXPORT FLR_RESULT agcGetROI(FLR_ROI_T *roi);
FLR_EXPORT FLR_RESULT agcGetMaxGainApplied(float *data);
FLR_EXPORT FLR_RESULT agcGetSigmaRApplied(float *data);
FLR_EXPORT FLR_RESULT agcSetOutlierCutBalance(const float data);
FLR_EXPORT FLR_RESULT agcGetOutlierCutBalance(float *data);
FLR_EXPORT FLR_RESULT agcGetOutlierCutApplied(float *percentHigh, float *percentLow);
FLR_EXPORT FLR_RESULT tfSetEnableState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT tfGetEnableState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT tfSetDelta_nf(const uint16_t data);
FLR_EXPORT FLR_RESULT tfGetDelta_nf(uint16_t *data);
FLR_EXPORT FLR_RESULT tfSetTHDeltaMotion(const uint16_t data);
FLR_EXPORT FLR_RESULT tfGetTHDeltaMotion(uint16_t *data);
FLR_EXPORT FLR_RESULT tfSetWLut(const FLR_TF_WLUT_T data);
FLR_EXPORT FLR_RESULT tfGetWLut(FLR_TF_WLUT_T *data);
FLR_EXPORT FLR_RESULT tfGetMotionCount(uint32_t *data);
FLR_EXPORT FLR_RESULT tfSetMotionThreshold(const uint32_t data);
FLR_EXPORT FLR_RESULT tfGetMotionThreshold(uint32_t *data);
FLR_EXPORT FLR_RESULT tfGetDelta_nfApplied(uint16_t *data);
FLR_EXPORT FLR_RESULT tfGetTHDeltaMotionApplied(uint16_t *data);
FLR_EXPORT FLR_RESULT memReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_EXPORT FLR_RESULT memGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns);
FLR_EXPORT FLR_RESULT memWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_EXPORT FLR_RESULT memReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_EXPORT FLR_RESULT memGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes);
FLR_EXPORT FLR_RESULT memEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index);
FLR_EXPORT FLR_RESULT memEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length);
FLR_EXPORT FLR_RESULT memReadCurrentGain(const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_EXPORT FLR_RESULT memGetGainSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns);
FLR_EXPORT FLR_RESULT colorLutSetControl(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT colorLutGetControl(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT colorLutSetId(const FLR_COLORLUT_ID_E data);
FLR_EXPORT FLR_RESULT colorLutGetId(FLR_COLORLUT_ID_E *data);
FLR_EXPORT FLR_RESULT spnrSetEnableState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT spnrGetEnableState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT spnrGetState(FLR_SPNR_STATE_E *data);
FLR_EXPORT FLR_RESULT spnrSetFrameDelay(const uint32_t data);
FLR_EXPORT FLR_RESULT spnrGetFrameDelay(uint32_t *data);
FLR_EXPORT FLR_RESULT spnrGetSFApplied(float *sf);
FLR_EXPORT FLR_RESULT spnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data);
FLR_EXPORT FLR_RESULT spnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data);
FLR_EXPORT FLR_RESULT spnrSetSFMin(const float sfmin);
FLR_EXPORT FLR_RESULT spnrGetSFMin(float *sfmin);
FLR_EXPORT FLR_RESULT spnrSetSFMax(const float sfmax);
FLR_EXPORT FLR_RESULT spnrGetSFMax(float *sfmax);
FLR_EXPORT FLR_RESULT spnrSetDFMin(const float dfmin);
FLR_EXPORT FLR_RESULT spnrGetDFMin(float *dfmin);
FLR_EXPORT FLR_RESULT spnrSetDFMax(const float dfmax);
FLR_EXPORT FLR_RESULT spnrGetDFMax(float *dfmax);
FLR_EXPORT FLR_RESULT spnrSetNormTarget(const float normTarget);
FLR_EXPORT FLR_RESULT spnrGetNormTarget(float *normTarget);
FLR_EXPORT FLR_RESULT spnrGetNormTargetApplied(float *normTargetApplied);
FLR_EXPORT FLR_RESULT scalerGetMaxZoom(uint32_t *zoom);
FLR_EXPORT FLR_RESULT scalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams);
FLR_EXPORT FLR_RESULT scalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams);
FLR_EXPORT FLR_RESULT scalerSetFractionalZoom(const uint32_t zoomNumerator, const uint32_t zoomDenominator, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable);
FLR_EXPORT FLR_RESULT scalerSetIndexZoom(const uint32_t zoomIndex, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable);
FLR_EXPORT FLR_RESULT sysctrlSetFreezeState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT sysctrlGetFreezeState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT sysctrlGetCameraFrameRate(uint32_t *frameRate);
FLR_EXPORT FLR_RESULT testRampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data);
FLR_EXPORT FLR_RESULT testRampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data);
FLR_EXPORT FLR_RESULT testRampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data);
FLR_EXPORT FLR_RESULT testRampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data);
FLR_EXPORT FLR_RESULT testRampSetMotionState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT testRampGetMotionState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT testRampSetIndex(const uint8_t data);
FLR_EXPORT FLR_RESULT testRampGetIndex(uint8_t *data);
FLR_EXPORT FLR_RESULT testRampGetMaxIndex(uint8_t *data);
FLR_EXPORT FLR_RESULT symbologySetEnable(const FLR_ENABLE_E draw_symbols);
FLR_EXPORT FLR_RESULT symbologyCreateBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height);
FLR_EXPORT FLR_RESULT symbologySendData(const uint8_t ID, const int16_t size, const uint8_t text[]);
FLR_EXPORT FLR_RESULT symbologyCreateArc(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const float start_angle, const float end_angle, const uint32_t color);
FLR_EXPORT FLR_RESULT symbologyCreateText(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const int8_t font, const int16_t size, const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E alignment, const uint32_t color, const uint8_t text[]);
FLR_EXPORT FLR_RESULT symbologyMoveSprite(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y);
FLR_EXPORT FLR_RESULT symbologyAddToGroup(const uint8_t ID, const uint8_t group_ID);
FLR_EXPORT FLR_RESULT symbologyRemoveFromGroup(const uint8_t ID, const uint8_t group_ID);
FLR_EXPORT FLR_RESULT symbologyUpdateAndShow(const uint8_t ID, const uint8_t visible);
FLR_EXPORT FLR_RESULT symbologyUpdateAndShowGroup(const uint8_t group_ID, const uint8_t visible);
FLR_EXPORT FLR_RESULT symbologyDelete(const uint8_t ID);
FLR_EXPORT FLR_RESULT symbologyDeleteGroup(const uint8_t group_ID);
FLR_EXPORT FLR_RESULT symbologyCreateFilledRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color);
FLR_EXPORT FLR_RESULT symbologyCreateOutlinedRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color);
FLR_EXPORT FLR_RESULT symbologyCreateBitmapFromPng(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t size);
FLR_EXPORT FLR_RESULT symbologyCreateCompressedBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height);
FLR_EXPORT FLR_RESULT symbologyCreateBitmapFromPngFile(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const uint8_t path[]);
FLR_EXPORT FLR_RESULT symbologyResetWritePosition(const uint8_t ID);
FLR_EXPORT FLR_RESULT symbologyMoveByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y);
FLR_EXPORT FLR_RESULT symbologyMoveGroupByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y);
FLR_EXPORT FLR_RESULT symbologyCreateFilledEllipse(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color);
FLR_EXPORT FLR_RESULT symbologyCreateLine(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t pos_X2, const int16_t pos_Y2, const uint32_t color);
FLR_EXPORT FLR_RESULT symbologySetZorder(const uint8_t ID, const uint8_t zorder);
FLR_EXPORT FLR_RESULT symbologySaveConfiguration();
FLR_EXPORT FLR_RESULT symbologyReloadConfiguration();
FLR_EXPORT FLR_RESULT symbologyGetEnable(FLR_ENABLE_E *draw_symbols);
FLR_EXPORT FLR_RESULT symbologySetClonesNumber(const uint8_t ID, const uint8_t numberOfClones);
FLR_EXPORT FLR_RESULT symbologyMoveCloneByOffset(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y);
FLR_EXPORT FLR_RESULT symbologyMoveCloneSprite(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y);
FLR_EXPORT FLR_RESULT fileOpsDir(uint8_t *dirent);
FLR_EXPORT FLR_RESULT fileOpsCd(const uint8_t path[], uint8_t *pwd);
FLR_EXPORT FLR_RESULT fileOpsMd(const uint8_t path[]);
FLR_EXPORT FLR_RESULT fileOpsFopen(const uint8_t path[], const uint8_t mode[], uint32_t *id);
FLR_EXPORT FLR_RESULT fileOpsFclose(const uint32_t id);
FLR_EXPORT FLR_RESULT fileOpsFread(const uint32_t id, const uint32_t length, uint8_t *buf, uint32_t *ret);
FLR_EXPORT FLR_RESULT fileOpsFwrite(const uint32_t id, const uint32_t length, const uint8_t buf[], uint32_t *ret);
FLR_EXPORT FLR_RESULT fileOpsFtell(const uint32_t id, uint32_t *offset);
FLR_EXPORT FLR_RESULT fileOpsFseek(const uint32_t id, const uint32_t offset, const uint32_t origin);
FLR_EXPORT FLR_RESULT fileOpsFtruncate(const uint32_t id, const uint32_t length);
FLR_EXPORT FLR_RESULT fileOpsRmdir(const uint8_t path[]);
FLR_EXPORT FLR_RESULT fileOpsRm(const uint8_t path[]);
FLR_EXPORT FLR_RESULT fileOpsRename(const uint8_t oldpath[], const uint8_t newpath[]);
FLR_EXPORT FLR_RESULT fileOpsGetFileSize(const uint8_t path[], uint32_t *fileLength);
FLR_EXPORT FLR_RESULT jffs2Mount();
FLR_EXPORT FLR_RESULT jffs2Unmount();
FLR_EXPORT FLR_RESULT jffs2GetState(FLR_JFFS2_STATE_E *state);
FLR_EXPORT FLR_RESULT splashScreenSetDuration(const uint32_t screen_num, const uint32_t periodMs);
FLR_EXPORT FLR_RESULT splashScreenSetDataType(const uint32_t screen_num, const FLR_SPLASHSCREEN_FILETYPE_E filetype);
FLR_EXPORT FLR_RESULT splashScreenSetBackground(const uint32_t screen_num, const uint32_t backgroundColor);
FLR_EXPORT FLR_RESULT splashScreenGetDuration(const uint32_t screen_num, uint32_t *periodMs);
FLR_EXPORT FLR_RESULT splashScreenGetDataType(const uint32_t screen_num, FLR_SPLASHSCREEN_FILETYPE_E *filetype);
FLR_EXPORT FLR_RESULT splashScreenGetBackground(const uint32_t screen_num, uint32_t *backgroundColor);
FLR_EXPORT FLR_RESULT systemSymbolsGetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, uint8_t *id, FLR_SYSTEMSYMBOLS_ID_TYPE_E *id_type);
FLR_EXPORT FLR_RESULT systemSymbolsSetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const uint8_t id, const FLR_SYSTEMSYMBOLS_ID_TYPE_E id_type);
FLR_EXPORT FLR_RESULT systemSymbolsGetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, FLR_ENABLE_E *enabled);
FLR_EXPORT FLR_RESULT systemSymbolsSetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const FLR_ENABLE_E enabled);
FLR_EXPORT FLR_RESULT sffcGetScaleFactor(float *data);
FLR_EXPORT FLR_RESULT sffcGetDeltaTempLinearCoeff(float *data);
FLR_EXPORT FLR_RESULT sffcSetDeltaTempLinearCoeff(const float data);
FLR_EXPORT FLR_RESULT sffcGetDeltaTempOffsetCoeff(float *data);
FLR_EXPORT FLR_RESULT sffcSetDeltaTempOffsetCoeff(const float data);
FLR_EXPORT FLR_RESULT sffcGetFpaTempLinearCoeff(float *data);
FLR_EXPORT FLR_RESULT sffcSetFpaTempLinearCoeff(const float data);
FLR_EXPORT FLR_RESULT sffcGetFpaTempOffsetCoeff(float *data);
FLR_EXPORT FLR_RESULT sffcSetFpaTempOffsetCoeff(const float data);
FLR_EXPORT FLR_RESULT sffcGetDeltaTempTimeLimitInSecs(uint32_t *data);
FLR_EXPORT FLR_RESULT sffcSetDeltaTempTimeLimitInSecs(const uint32_t data);
FLR_EXPORT FLR_RESULT imageStatsGetTotalHistPixelsInROI(uint32_t *totalPixelsInROI);
FLR_EXPORT FLR_RESULT imageStatsGetPopBelowLowToHighThresh(uint32_t *popBelowLowToHighThresh);
FLR_EXPORT FLR_RESULT imageStatsGetPopAboveHighToLowThresh(uint32_t *popAboveHighToLowThresh);
FLR_EXPORT FLR_RESULT imageStatsSetROI(const FLR_ROI_T roi);
FLR_EXPORT FLR_RESULT imageStatsGetROI(FLR_ROI_T *roi);
FLR_EXPORT FLR_RESULT imageStatsGetFirstBin(uint16_t *firstBin);
FLR_EXPORT FLR_RESULT imageStatsGetLastBin(uint16_t *lastBin);
FLR_EXPORT FLR_RESULT imageStatsGetMean(uint16_t *mean);
FLR_EXPORT FLR_RESULT imageStatsGetFirstBinInROI(uint16_t *firstBinInROI);
FLR_EXPORT FLR_RESULT imageStatsGetLastBinInROI(uint16_t *lastBinInROI);
FLR_EXPORT FLR_RESULT imageStatsGetMeanInROI(uint16_t *meanInROI);
FLR_EXPORT FLR_RESULT srnrSetEnableState(const FLR_ENABLE_E data);
FLR_EXPORT FLR_RESULT srnrGetEnableState(FLR_ENABLE_E *data);
FLR_EXPORT FLR_RESULT srnrSetThRowSum(const uint16_t data);
FLR_EXPORT FLR_RESULT srnrGetThRowSum(uint16_t *data);
FLR_EXPORT FLR_RESULT srnrSetThPixel(const uint16_t data);
FLR_EXPORT FLR_RESULT srnrGetThPixel(uint16_t *data);
FLR_EXPORT FLR_RESULT srnrSetMaxCorr(const uint16_t data);
FLR_EXPORT FLR_RESULT srnrGetMaxCorr(uint16_t *data);
FLR_EXPORT FLR_RESULT srnrGetThPixelApplied(uint16_t *data);
FLR_EXPORT FLR_RESULT srnrGetMaxCorrApplied(uint16_t *data);
FLR_EXPORT FLR_RESULT dummyBadCommand();

#ifdef __cplusplus
}
#endif


#endif
