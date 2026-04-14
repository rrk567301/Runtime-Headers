@interface AKFeatureManager : NSObject {
    BOOL _cachedIsLisbonAvailable;
    BOOL _cachedIsAppleIDPasskeyFeatureEnabled;
    BOOL _cachedIsTiburonU13Enabled;
    BOOL _cachedIsHawksbillEnabled;
    BOOL _cachedIsChildPasscodeEnabled;
    BOOL _cachedIsDTOEnabled;
    BOOL _cachedIsForgotPasswordNativeTakeoverEnabled;
    BOOL _cachedIsDeviceListCacheEnabled;
}

@property (readonly, nonatomic, getter=isLisbonAvailable) BOOL lisbonAvailable;
@property (readonly, nonatomic, getter=isAppleIDPasskeyFeatureEnabled) BOOL appleIDPasskeyFeatureEnabled;
@property (readonly, nonatomic, getter=isTiburonU13Enabled) BOOL tiburonU13Enabled;
@property (readonly, nonatomic, getter=isHawksbillEnabled) BOOL enableHawksbill;
@property (readonly, nonatomic, getter=isChildPasscodeEnabled) BOOL childPasscodeEnabled;
@property (readonly, nonatomic, getter=isDTOEnabled) BOOL DTOEnabled;
@property (readonly, nonatomic, getter=isForgotPasswordNativeTakeoverEnabled) BOOL forgotPasswordNativeTakeoverEnabled;
@property (readonly, nonatomic, getter=isAppleIDSessionTelemetryEnabled) BOOL appleIDSessionTelemetryEnabled;
@property (readonly, nonatomic, getter=isDeviceListCacheEnabled) BOOL deviceListCacheEnabled;

+ (id)sharedManager;
+ (BOOL)isEasyDependentSignInEnabled;
+ (BOOL)isEnforceMDMPolicyEnabled;
+ (BOOL)isProxAuthEnabled;
+ (BOOL)isProxForAuthkitEnabled;
+ (BOOL)isYorktownEnabled;

- (id)init;

@end
