@class CNUserDefaults, NSDistributedNotificationCenter, NSNotificationCenter, NSString, NSLocale, NSNumber;
@protocol CNFileManager, CNFeatureFlags, CNAuthorizationContext, CNEntitlementVerification, CNSchedulerProvider, CNLocalizationServices, CNProbabilityUtility, CNTimeProvider, CNWatchdog, _TtP18ContactsFoundation24CNKeychainFacadeProtocol_;

@interface CNEnvironmentTestDouble : CNEnvironment {
    NSNumber *_isAquaSessionStorage;
}

@property (nonatomic, retain) id<_TtP18ContactsFoundation24CNKeychainFacadeProtocol_> keychainFacade;
@property (retain) id<CNFileManager> fileManager;
@property (retain) CNUserDefaults *userDefaults;
@property (retain) id<CNFeatureFlags> featureFlags;
@property (retain) id<CNSchedulerProvider> schedulerProvider;
@property (retain) id<CNTimeProvider> timeProvider;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain) id<CNEntitlementVerification> entitlementVerifier;
@property (retain) id<CNAuthorizationContext> authorizationContext;
@property (retain) id<CNLocalizationServices> localizationServices;
@property (retain) id<CNProbabilityUtility> probabilityUtility;
@property (retain) id<CNWatchdog> watchdog;
@property (copy) NSString *mainBundleIdentifier;
@property (copy) NSString *defaultCountryCode;
@property (copy) NSString *homeCountryCode;
@property (copy) NSString *currentCountryCode;
@property (copy) NSLocale *currentLocale;
@property (getter=isInternalBuild) char internalBuild;
@property (getter=isGreenTeaDevice) char greenTeaDevice;
@property (getter=isExtendedGreenTeaDevice) char extendedGreenTeaDevice;
@property (getter=getCurrentRegionCode) NSString *currentRegionCode;
@property (getter=isCommLimitsEnabled) char commLimitsEnabled;
@property (getter=isKeychainEnabled) char keychainEnabled;
@property (getter=isAquaSession) char aquaSession;

- (id)init;
- (void).cxx_destruct;
- (void)setUserDefaults:(id)a0;
- (void)setAuthorizationContext:(id)a0;
- (void)setWatchdog:(id)a0;
- (void)setHomeCountryCode:(id)a0;
- (void)setCurrentLocale:(id)a0;
- (void)setAquaSession:(char)a0;
- (void)setFileManager:(id)a0;
- (void)setCommLimitsEnabled:(char)a0;
- (void)setCurrentCountryCode:(id)a0;
- (void)setCurrentRegionCode:(id)a0;
- (void)setDefaultCountryCode:(id)a0;
- (void)setDistributedNotificationCenter:(id)a0;
- (void)setEntitlementVerifier:(id)a0;
- (void)setFeatureFlags:(id)a0;
- (void)setGreenTeaDevice:(char)a0;
- (void)setInternalBuild:(char)a0;
- (void)setKeychainEnabled:(char)a0;
- (void)setLocalizationServices:(id)a0;
- (void)setMainBundleIdentifier:(id)a0;
- (void)setNotificationCenter:(id)a0;
- (void)setProbabilityUtility:(id)a0;
- (void)setSchedulerProvider:(id)a0;
- (void)setTimeProvider:(id)a0;

@end
