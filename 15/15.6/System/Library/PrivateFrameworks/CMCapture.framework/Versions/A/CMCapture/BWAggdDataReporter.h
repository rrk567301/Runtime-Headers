@class NSObject;
@protocol OS_dispatch_queue;

@interface BWAggdDataReporter : NSObject {
    NSObject<OS_dispatch_queue> *_aggdDispatchQueue;
    int _lastShutterLag;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)reportZeroShutterLagInitSuccess;
- (id)_aggdCameraStreamingTimeStringFromDeviceType:(int)a0 devicePosition:(int)a1;
- (id)_aggdGNRProcessingStatusStringFromProcessingStatus:(int)a0;
- (id)_aggdPearlInfraredProjectorUptimeStringFromCurrent:(int)a0 pattern:(int)a1 applicationID:(id)a2;
- (id)_aggdSDOFProcessingStatusStringFromProcessingStatus:(int)a0;
- (id)_aggdStereoFusionProcessingStatusStringFromProcessingStatus:(int)a0;
- (id)_aggdStereoFusionProcessingTypeStringForCaptureType:(int)a0 isStereoFusionCapture:(char)a1 wideSubCaptureType:(int)a2 teleSubCaptureType:(int)a3 isOriginalImage:(char)a4;
- (id)_aggdStringForPrefix:(id)a0 primaryCaptureType:(int)a1 secondaryCaptureType:(int)a2 captureFlags:(unsigned long long)a3 sceneFlags:(unsigned long long)a4 stillDuringVideo:(char)a5 frontCamera:(char)a6;
- (int)lastShutterLag;
- (void)reportAPSOffsetEstimatorForPortType:(id)a0 accelMotion:(float)a1 gyroMotion:(float)a2 inSessionOffset:(float)a3 deltaOffsetFC:(float)a4 deltaOffsetMI:(float)a5 deltaOffsetFATP:(float)a6 deltaOffsetLastSession:(float)a7 errorHeadroomViolated:(char)a8 errorConvergenceFailed:(char)a9 errorMotionTooLarge:(char)a10 errorConfidenceTooLow:(char)a11 errorOffsetTooLarge:(char)a12 errorDeltaTooLarge:(char)a13 errorSaturated:(char)a14 errorCouldNotRun:(char)a15 successRun:(char)a16 startAPSVoltage:(int)a17 modeGCOL:(char)a18 modeOL:(char)a19;
- (void)reportAPSSphereInteractionCalibrationForPosition:(int)a0 residualErrorNeutral:(float)a1 calibrationZHeightNeutral:(float)a2 residualErrorMacro:(float)a3 calibrationZHeightMacro:(float)a4 calibrationStatus:(unsigned int)a5 isValid:(char)a6;
- (void)reportAutoFocusCalibrationForPosition:(int)a0 freqZ:(int)a1 deltaFreqZ:(int)a2 qZ:(int)a3 deltaQZ:(int)a4 gainZ:(int)a5 calibrationStatus:(unsigned int)a6 gelModelCoefficientD1:(int *)a7 gelModelCoefficientD2:(int *)a8 gelModelCoefficientP1:(int *)a9 gelModelCoefficientP2:(int *)a10 isValid:(char)a11;
- (void)reportAutoFocusPositionSensorCalibrationForPosition:(int)a0 iStopZEstimate:(int)a1 eSensorOutput:(short)a2 wSensorOutput:(short)a3 gravityZ:(int)a4 calibrationStatus:(unsigned int)a5 sensorTemp:(short)a6 successfulInfinityEndStopDelta:(int)a7 currentInfinityEndStopDelta:(int)a8 previousInfinityEndStopDelta:(int)a9 currentAngleDelta:(int)a10 previousAngleDelta:(int)a11 factoryCalibrationOffset:(int *)a12 estimatedNeutralZ:(int *)a13 deltaNeutralZFromNVM:(int *)a14 estimatedSagZ:(int *)a15 combinedSensorOutput:(int *)a16 deltaSagFromNVM:(int *)a17 isValid:(char)a18 dataWasRejectedByHistory:(char)a19;
- (void)reportAutoFocusPositionSensorMode:(int)a0 portType:(id)a1;
- (void)reportCalibrationStatisticsWithTime:(id)a0 timeValue:(double)a1 attemptsField:(id)a2 attemptsValue:(long long)a3 successField:(id)a4 successValue:(long long)a5 magneticFieldMagnitudeField:(id)a6 magneticFieldMagnitudeValue:(double)a7;
- (void)reportCameraAppCaptureForNonCameraAppLoggingWithFrontCamera:(char)a0;
- (void)reportCameraLaunchWithPrewarm:(int)a0 reason:(id)a1;
- (void)reportCameraLaunchWithoutPrewarm:(int)a0;
- (void)reportCameraStreamingTimeInMilliseconds:(unsigned long long)a0 deviceType:(int)a1 devicePosition:(int)a2;
- (void)reportCriticalFocusErrorOccurredForPortType:(id)a0;
- (void)reportFaceCount:(unsigned int)a0 frontCamera:(char)a1;
- (void)reportGNRSampleBufferProcessorProcessingStatus:(int)a0;
- (void)reportISPCreateDuration:(int)a0;
- (void)reportLockScreenCameraLaunchCancelledWithPrewarming:(char)a0 ispStreamingStarted:(char)a1;
- (void)reportLockScreenCameraLaunchCompletedWithPrewarming:(char)a0 restartedSessionDueToError:(int)a1;
- (void)reportLuxLevel:(unsigned int)a0 primaryCaptureType:(int)a1 secondaryCaptureType:(int)a2 captureFlags:(unsigned long long)a3 sceneFlags:(unsigned long long)a4 stillDuringVideo:(char)a5 frontCamera:(char)a6;
- (void)reportNonCameraAppCaptureWithPrimaryCaptureType:(int)a0 secondaryCaptureType:(int)a1 captureFlags:(unsigned long long)a2 sceneFlags:(unsigned long long)a3 stillDuringVideo:(char)a4 frontCamera:(char)a5;
- (void)reportPearlInfraredProjectorUptime:(unsigned long long)a0 current:(int)a1 pattern:(int)a2 applicationID:(id)a3;
- (void)reportSDOFSampleBufferProcessorProcessingStatus:(int)a0;
- (void)reportSensorTemperature:(unsigned int)a0 frontCamera:(char)a1;
- (void)reportShutterLag:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 primaryCaptureType:(int)a1 secondaryCaptureType:(int)a2 captureFlags:(unsigned long long)a3 sceneFlags:(unsigned long long)a4 stillDuringVideo:(char)a5 frontCamera:(char)a6;
- (void)reportSphereCalibrationForPosition:(int)a0 freqX:(float)a1 deltaFreqX:(float)a2 qX:(float)a3 deltaQX:(float)a4 gainX:(float)a5 freqY:(float)a6 deltaFreqY:(float)a7 qY:(float)a8 deltaQY:(float)a9 gainY:(float)a10 calibrationStatus:(unsigned int)a11 isValid:(char)a12;
- (void)reportSphereEndStopCalibrationForPosition:(int)a0 oisPositiveX:(int)a1 oisNegativeX:(int)a2 oisPositiveY:(int)a3 oisNegativeY:(int)a4 maxPositiveXDriftFromNVM:(int)a5 maxNegativeXDriftFromNVM:(int)a6 maxPositiveYDriftFromNVM:(int)a7 maxNegativeYDriftFromNVM:(int)a8 sphereStrokeX:(int)a9 sphereStrokeY:(int)a10 calibrationStatus:(unsigned int)a11 isValid:(char)a12;
- (void)reportSphereJitterDetectionsForPortType:(id)a0 detectionAttemps:(int)a1 successfulDetections:(int)a2;
- (void)reportStereoFusionProcessingTypeForCaptureType:(int)a0 isStereoFusionCapture:(char)a1 wideSubCaptureType:(int)a2 teleSubCaptureType:(int)a3 isOriginalImage:(char)a4;
- (void)reportStereoFusionSampleBufferProcessorProcessingStatus:(int)a0;
- (void)reportStillImageAPSStatisticsForPortType:(id)a0 logicalFocusPosition:(int)a1 apsMotion:(float)a2 sphereMotion:(float)a3 accelMotion:(float)a4 gyroMotion:(float)a5 subjectDistance:(float)a6 luxLevel:(int)a7;
- (void)reportVideoRecordingAPSStatistics:(float)a0 stdDataFromAPSForTele:(float)a1 stdDataFromSphereForWide:(float)a2 stdDataFromSphereForTele:(float)a3 stdDataFromAccel:(float)a4 stdDataFromGyro:(float)a5 maxDataFromAPSForWide:(float)a6 maxDataFromAPSForTele:(float)a7 minDataFromAPSForWide:(float)a8 minDataFromAPSForTele:(float)a9 maxDataFromSphereForWide:(float)a10 maxDataFromSphereForTele:(float)a11 minDataFromSphereForWide:(float)a12 minDataFromSphereForTele:(float)a13 maxDataFromAccel:(float)a14 minDataFromAccel:(float)a15 maxDataFromGyro:(float)a16 minDataFromGyro:(float)a17;
- (void)reportZeroShutterLagFirmwareTimeMachineInitFailure;
- (void)reportZeroShutterLagMetadataInitFailureWithReasons:(unsigned int)a0;
- (void)reportZeroShutterLagPreviewTimeMachineInitFailure;
- (void)reportZeroShutterLagReferenceFrameSelectionFailureForCaptureType:(int)a0;
- (void)reportZeroShutterLagSphereInitFailure;
- (void)reportZeroShutterLagSuccess;
- (void)reportZoomFactor:(float)a0 primaryCaptureType:(int)a1 secondaryCaptureType:(int)a2 captureFlags:(unsigned long long)a3 sceneFlags:(unsigned long long)a4 stillDuringVideo:(char)a5 frontCamera:(char)a6;

@end
