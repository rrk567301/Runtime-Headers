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

- (BOOL)nonBluetoothAllowedForBundleId:(id)a0;
- (id)init;
- (BOOL)wifiAllowedForBundleId:(id)a0;
- (BOOL)_adequateInternalOrCarrierInstall;
- (BOOL)cellularDataEnabledForBundleId:(id)a0;
- (void)dealloc;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)a0;

@end
