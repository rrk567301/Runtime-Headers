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

- (BOOL)cellularDataEnabledForBundleId:(id)a0;
- (BOOL)_adequateInternalOrCarrierInstall;
- (void)dealloc;
- (BOOL)wifiAllowedForBundleId:(id)a0;
- (BOOL)nonBluetoothAllowedForBundleId:(id)a0;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)a0;
- (id)init;

@end
