@interface HKImportExclusionDeviceDataSource : NSObject

+ (char)isDeviceSerialNumberOnAllowedListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (char)isDeviceSerialNumberOnTIBListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (char)isDeviceTypeAllowedForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;

- (char)isDeviceSerialNumberOnPreImportExclusionList:(id)a0 featureIdentifier:(id)a1;
- (id)activePairedDevice;
- (id)isActiveWatchProdFusedWithBehavior:(id)a0;
- (char)isDeviceSerialNumberOnTIBList:(id)a0 featureIdentifier:(id)a1;
- (char)isDeviceTypeNotOnImportExclusionList:(id)a0 featureIdentifier:(id)a1;
- (id)isImportAllowedForActiveWatchWithBehavior:(id)a0 featureIdentifier:(id)a1;

@end
