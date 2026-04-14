@class NSNumber, CNUserDefaults, NSNotificationCenter, CNEnvironmentBase, NSDistributedNotificationCenter, NSString;
@protocol CNFileManager, CNFeatureFlags, CNAuthorizationContext, CNEntitlementVerification, CNSchedulerProvider, CNLocalizationServices, CNProbabilityUtility, CNTimeProvider, CNWatchdog, _TtP18ContactsFoundation24CNKeychainFacadeProtocol_;

@interface CNEnvironment : CNEnvironmentBase {
    NSString *_defaultCountryCode;
    NSNumber *_isInternalBuildStorage;
    NSNumber *_isGreenTeaDeviceStorage;
    NSNumber *_isCommLimitsEnabledStorage;
    NSNumber *_isKeychainEnabledStorage;
}

@property (class, readonly) CNEnvironment *currentEnvironment;
@property (class, readonly) CNEnvironmentBase *defaultEnvironment;

@property (nonatomic, readonly) id<_TtP18ContactsFoundation24CNKeychainFacadeProtocol_> keychainFacade;
@property (readonly) id<CNFileManager> fileManager;
@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) id<CNFeatureFlags> featureFlags;
@property (readonly) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) id<CNTimeProvider> timeProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly) id<CNEntitlementVerification> entitlementVerifier;
@property (readonly) id<CNAuthorizationContext> authorizationContext;
@property (readonly) id<CNLocalizationServices> localizationServices;
@property (readonly) id<CNProbabilityUtility> probabilityUtility;
@property (readonly) id<CNWatchdog> watchdog;
@property (readonly) NSString *mainBundleIdentifier;
@property (readonly) NSString *defaultCountryCode;
@property (readonly, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, getter=isGreenTeaDevice) BOOL greenTeaDevice;
@property (readonly, getter=isCommLimitsEnabled) BOOL commLimitsEnabled;
@property (readonly, getter=isKeychainEnabled) BOOL keychainEnabled;

+ (char *)environmentStackKey;

- (id)init;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)getDefaultCountryCode;
- (BOOL)isCommLimitsEnabledImpl;
- (BOOL)isKeychainEnabledImpl;
- (id)valueForKey:(id)a0 onCacheMiss:(id /* block */)a1;

@end
