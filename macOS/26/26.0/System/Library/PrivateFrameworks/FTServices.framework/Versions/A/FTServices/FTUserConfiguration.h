@class NSArray, NSNumber;

@interface FTUserConfiguration : NSObject

@property (readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property (nonatomic) BOOL cellularFaceTimeEnabled;
@property (nonatomic) BOOL allowAnyNetwork;
@property (copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property (readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
@property (nonatomic) BOOL isDeviceInDualPhoneIdentityMode;
@property (nonatomic) BOOL isDeviceInManualPhoneSelectionMode;

+ (id)sharedInstance;

- (void)dealloc;
- (BOOL)cellularDataEnabledForBundleId:(id)a0;
- (id)init;
- (BOOL)_adequateInternalOrCarrierInstall;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)a0;
- (BOOL)nonBluetoothAllowedForBundleId:(id)a0;
- (BOOL)wifiAllowedForBundleId:(id)a0;

@end
