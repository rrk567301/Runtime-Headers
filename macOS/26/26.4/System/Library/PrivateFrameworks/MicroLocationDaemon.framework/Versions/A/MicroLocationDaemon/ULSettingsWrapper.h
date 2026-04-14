@interface ULSettingsWrapper : NSObject

+ (double)vmkSynchronizerMaxOdometryDelay;
+ (unsigned int)visualLoggerMaxDataRetentionSec;
+ (double)anchorSmootherDensityCalculationRadius;
+ (BOOL)anchorSmootherEnabled;
+ (int)anchorSmootherMaxAnchorsInRadius;
+ (double)anchorSmootherMaxZAxisDistance;
+ (double)anchorSmootherYawDifferenceThresholdDegrees;
+ (BOOL)blinkerBufferingPolarisGraphEnabled;
+ (BOOL)blinkerIgnoreTaskCancellation;
+ (unsigned int)conclaveTarget;
+ (BOOL)enableProximitySignal;
+ (BOOL)exclaveVisualLoggerEnabled;
+ (BOOL)featureDetectionPolarisGraphEnabled;
+ (BOOL)logImagesToVisualLogger;
+ (BOOL)mockOdometryMetadata;
+ (BOOL)objectDetectionPolarisGraphEnabled;
+ (BOOL)peripheralCameraSource;
+ (BOOL)peripheralConfigCompressionEnabled;
+ (BOOL)polarisTaskSaveImageToDisk;
+ (id)polarisTaskSaveImageToDiskPath;
+ (BOOL)polarisTaskUsePeripheralGraph;
+ (BOOL)sceneClassificationPolarisGraphEnabled;
+ (int)temporaryMappingElevateObjectConfidence;
+ (int)temporaryMappingNumberOfInputs;
+ (BOOL)temporaryMappingStartPeripheralResourcesOnOdometry;
+ (double)temporaryMappingTimeout;
+ (id)visualLoggerHistoryPath;
+ (int)vmkMaxMapSize;
+ (double)vmkMinMeasurementInterval;

@end
