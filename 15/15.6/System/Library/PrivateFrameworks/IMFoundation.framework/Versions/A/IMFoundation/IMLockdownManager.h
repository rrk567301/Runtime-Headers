@class NSString;

@interface IMLockdownManager : NSObject

@property (nonatomic, setter=_setState:) unsigned long long _state;
@property (nonatomic) char _settingUpActivationState;
@property (nonatomic) char _isVendorInstall;
@property (nonatomic) char _isInternalInstall;
@property (nonatomic) char _isNonUIInstall;
@property (nonatomic) char _isCarrierInstall;
@property (nonatomic) char _hasShownWaitingAlertThisSession;
@property (nonatomic) char _hasShownMismatchedSIM;
@property (readonly, nonatomic) char isNonUIInstall;
@property (readonly, nonatomic) char isVendorInstall;
@property (readonly, nonatomic) char isInternalInstall;
@property (readonly, nonatomic) char isCarrierInstall;
@property (readonly, nonatomic) char isActivated;
@property (readonly, nonatomic) char isExpired;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)_calculateInstallType;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (long long)lockdownState;

@end
