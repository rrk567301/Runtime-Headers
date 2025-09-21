@interface AKFeatureManager : NSObject {
    char _cachedIsLisbonAvailable;
    char _cachedIsAppleIDPasskeyFeatureEnabled;
    char _cachedIsTiburonU13Enabled;
    char _cachedIsHawksbillEnabled;
    char _cachedIsChildPasscodeEnabled;
    char _cachedSiwaCredentialSharingEnabled;
    char _cachedIsDTOEnabled;
    char _cachedIsForgotPasswordNativeTakeoverEnabled;
    char _cachedIsDeviceListCacheEnabled;
    char _cacheIsDeviceListCacheEnableDryMode;
    char _cachedIsSiwaInPasswordsFeatureEnabled;
    char _cachedIsConvertToMAIDEnabled;
    char _cachedPltUpgradeEnabled;
    char _cachedAuthenticatedRequestSerializationEnabled;
    char _cachedSilentAuthenticationRequestSerializationEnabled;
    char _adpExpansionViaCFUEnabled;
    char _baaSupportedForVirtualMachines;
    char _cachedSignInSecurityRedesignEnabled;
    char _cacheIsServerBackoffEnabled;
    char _cachedAgeAttestationPhase1Enabled;
}

@property (readonly, nonatomic, getter=isLisbonAvailable) char lisbonAvailable;
@property (readonly, nonatomic, getter=isAppleIDPasskeyFeatureEnabled) char appleIDPasskeyFeatureEnabled;
@property (readonly, nonatomic, getter=isTiburonU13Enabled) char tiburonU13Enabled;
@property (readonly, nonatomic, getter=isHawksbillEnabled) char enableHawksbill;
@property (readonly, nonatomic, getter=isChildPasscodeEnabled) char childPasscodeEnabled;
@property (readonly, nonatomic, getter=isDTOEnabled) char DTOEnabled;
@property (readonly, nonatomic, getter=isForgotPasswordNativeTakeoverEnabled) char forgotPasswordNativeTakeoverEnabled;
@property (readonly, nonatomic, getter=isAppleIDSessionTelemetryEnabled) char appleIDSessionTelemetryEnabled;
@property (readonly, nonatomic, getter=isDeviceListCacheEnabled) char deviceListCacheEnabled;
@property (readonly, nonatomic, getter=isDeviceListCacheEnableDryMode) char deviceListCacheEnableDryMode;
@property (readonly, nonatomic, getter=isSimpleProfilesEnabled) char simpleProfilesEnabled;
@property (readonly, nonatomic, getter=isAgeAttestationPhase1Enabled) char AgeAttestationPhase1Enabled;
@property (readonly, nonatomic, getter=isBackgroundiCloudSignInEnabled) char backgroundiCloudSignInEnabled;
@property (readonly, nonatomic, getter=isTokenCacheEnabled) char tokenCacheEnabled;
@property (readonly, nonatomic) char isSiwaCredentialSharingEnabled;
@property (readonly, nonatomic, getter=isSiwaInPasswordsFeatureEnabled) char siwaInPasswordsFeatureEnabled;
@property (readonly, nonatomic, getter=isConvertToMAIDEnabled) char convertToMAIDEnabled;
@property (readonly, nonatomic, getter=isTokenCreationTimeEnabled) char tokenCreationTimeEnabled;
@property (readonly, nonatomic, getter=isPltUpgradeEnabled) char pltUpgradeEnabled;
@property (readonly, nonatomic, getter=isAuthenticatedRequestSerializationEnabled) char authenticatedRequestSerializationEnabled;
@property (readonly, nonatomic, getter=isSilentAuthenticationRequestSerializationEnabled) char silentAuthenticationRequestSerializationEnabled;
@property (readonly, nonatomic, getter=isUplevelSignInWithAppleEnabled) char uplevelSignInWithAppleEnabled;
@property (readonly, nonatomic, getter=isADPExpansionViaCFUEnabled) char adpExpansionViaCFUEnabled;
@property (readonly, nonatomic, getter=isBAASupportedForVirtualMachines) char baaSupportedForVirtualMachines;
@property (readonly, nonatomic, getter=isSignInSecurityRedesignEnabled) char isSignInSecurityRedesignEnabled;
@property (readonly, nonatomic, getter=isServerBackoffEnabled) char serverBackoffEnabled;

+ (id)sharedManager;
+ (char)isEasyDependentSignInEnabled;
+ (char)isEnforceMDMPolicyEnabled;
+ (char)isProxAuthEnabled;
+ (char)isProxForAuthkitEnabled;
+ (char)isYorktownEnabled;

- (id)init;
- (char)backgroundiCloudSignInEnabled;

@end
