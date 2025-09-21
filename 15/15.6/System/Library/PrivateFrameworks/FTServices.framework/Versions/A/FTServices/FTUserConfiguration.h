@class NSArray, NSNumber;

@interface FTUserConfiguration : NSObject

@property (readonly, nonatomic) char _nonWifiFaceTimeEntitled;
@property (nonatomic) char cellularFaceTimeEnabled;
@property (nonatomic) char allowAnyNetwork;
@property (copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property (readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
@property (nonatomic) char isDeviceInDualPhoneIdentityMode;
@property (nonatomic) char isDeviceInManualPhoneSelectionMode;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)nonBluetoothAllowedForBundleId:(id)a0;
- (char)cellularDataEnabledForBundleId:(id)a0;
- (char)_adequateInternalOrCarrierInstall;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)a0;
- (char)wifiAllowedForBundleId:(id)a0;

@end
