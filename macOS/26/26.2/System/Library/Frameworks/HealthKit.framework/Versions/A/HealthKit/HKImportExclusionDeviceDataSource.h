@interface HKImportExclusionDeviceDataSource : NSObject

+ (BOOL)isDeviceSerialNumberOnAllowedListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (BOOL)isDeviceSerialNumberOnAllowedListForHKFeatureIdentifierOxygenSaturationRecordingCompanionAnalysis:(id)a0;
+ (BOOL)isDeviceSerialNumberOnTIBListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (BOOL)isDeviceTypeAllowedForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;

- (id)activePairedDevice;
- (id)isActiveWatchProdFusedWithBehavior:(id)a0;
- (BOOL)isDeviceSerialNumberOnImportAllowList:(id)a0 featureIdentifier:(id)a1;
- (BOOL)isDeviceSerialNumberOnTIBList:(id)a0 featureIdentifier:(id)a1;
- (BOOL)isDeviceTypeNotOnImportExclusionList:(id)a0 featureIdentifier:(id)a1;
- (id)isHKFeatureIdentifierOxygenSaturationRecordingCompanionAnalysisImportAllowedForActiveWatchWithSerialNumber:(id)a0;
- (id)isHKFeatureIdentifierOxygenSaturationRecordingImportAllowedForActiveWatchWithDeviceType:(id)a0 serialNumber:(id)a1;
- (id)isImportAllowedForActiveWatchWithBehavior:(id)a0 featureIdentifier:(id)a1;

@end
