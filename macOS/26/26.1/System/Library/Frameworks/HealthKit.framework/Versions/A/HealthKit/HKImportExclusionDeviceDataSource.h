@interface HKImportExclusionDeviceDataSource : NSObject

+ (BOOL)isDeviceSerialNumberOnAllowedListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (BOOL)isDeviceSerialNumberOnTIBListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (BOOL)isDeviceTypeAllowedForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;

- (BOOL)isDeviceSerialNumberOnPreImportExclusionList:(id)a0 featureIdentifier:(id)a1;
- (id)activePairedDevice;
- (id)isActiveWatchProdFusedWithBehavior:(id)a0;
- (BOOL)isDeviceSerialNumberOnTIBList:(id)a0 featureIdentifier:(id)a1;
- (BOOL)isDeviceTypeNotOnImportExclusionList:(id)a0 featureIdentifier:(id)a1;
- (id)isHKFeatureIdentifierOxygenSaturationRecordingCompanionAnalysisImportAllowedForActiveWatchWithDeviceType:(id)a0 prodFused:(BOOL)a1 serialNumber:(id)a2 regionCode:(id)a3;
- (id)isHKFeatureIdentifierOxygenSaturationRecordingImportAllowedForActiveWatchWithDeviceType:(id)a0 serialNumber:(id)a1 regionCode:(id)a2;
- (id)isImportAllowedForActiveWatchWithBehavior:(id)a0 featureIdentifier:(id)a1;

@end
