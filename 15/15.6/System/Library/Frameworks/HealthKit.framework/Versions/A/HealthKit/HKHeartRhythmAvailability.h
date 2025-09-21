@class NSDate, NSString, HKObserverSet, HKKeyValueDomain, HKHealthStore, NSMutableSet, HKActiveWatchRemoteFeatureAvailabilityDataSource, NSUserDefaults, NSNumber;
@protocol HKRegulatoryDomainProvider;

@interface HKHeartRhythmAvailability : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _onboardingKeysReadLock;
    NSNumber *_electrocardiogramRescindedStatusCache;
}

@property (class, readonly, nonatomic, getter=isHeartRateEnabledInPrivacy) char heartRateEnabledInPrivacy;
@property (class, readonly, nonatomic) char shouldInstallWatchApp;
@property (class, readonly, nonatomic) long long currentElectrocardiogramOnboardingVersion;

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain;
@property (retain, nonatomic) NSUserDefaults *heartRhythmUserDefaults;
@property (retain, nonatomic) HKObserverSet *heartRhythmAvailabilityObservers;
@property (retain, nonatomic) HKActiveWatchRemoteFeatureAvailabilityDataSource *electrocardiogramAvailabilityDataSource;
@property (retain, nonatomic) NSMutableSet *onboardingKeysReadSet;
@property (nonatomic) int onboardingStateDidChangeNotificationToken;
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;
@property (nonatomic) int userCharacteristicsDidChangeNotificationToken;
@property (retain, nonatomic) id<HKRegulatoryDomainProvider> mobileCountryCodeManager;
@property (retain, nonatomic) NSString *currentCountryCode;
@property (readonly, nonatomic, getter=isElectrocardiogramOnboardingCompleted) char electrocardiogramOnboardingCompleted;
@property (readonly, nonatomic, getter=isElectrocardiogramRecordingDisabled) char electrocardiogramRecordingDisabled;
@property (readonly, nonatomic) long long electrocardiogramRecordingRescindedStatus;
@property (readonly, nonatomic) NSDate *electrocardiogramFirstOnboardingCompletedDate;
@property (readonly, nonatomic, getter=isAtrialFibrillationDetectionSettingEnabled) char atrialFibrillationDetectionSettingEnabled;
@property (readonly, nonatomic, getter=isAtrialFibrillationDetectionOnboardingCompleted) char atrialFibrillationDetectionOnboardingCompleted;
@property (readonly, nonatomic, getter=isAtrialFibrillationDetectionDisabled) char atrialFibrillationDetectionDisabled;
@property (readonly, nonatomic) long long atrialFibrillationDetectionRescindedStatus;

+ (id)featureAvailabilityUserDefaults;
+ (long long)_electrocardiogramRescindedStatusWithDataSource:(id)a0;
+ (id)_history:(id)a0 addCurrentOnboardingVersionCompletedIfApplicable:(long long)a1 countryCode:(id)a2;
+ (id)_onboardingCountryCodeKeyFromCompletedKey:(id)a0;
+ (id)_onboardingHistoryKeyFromCompletedKey:(id)a0;
+ (id)_onboardingHistoryWithVersionCompletedKey:(id)a0 keyValueDomain:(id)a1;
+ (id)currentDeviceRegionCode;
+ (id)electrocardiogramOnboardingHistoryMaxKnownWithKeyValueDomain:(id)a0;
+ (char)isElectrocardiogramAppInstallableForLocale:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)_localeDidChange;
- (id)initWithHealthStore:(id)a0;
- (char)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)a0;
- (void)unitTest_setCurrentCountryCode:(id)a0;
- (id)_electrocardiogramFirstOnboardingCompletedDate;
- (id)_electrocardiogramOnboardingHistory;
- (id)_electrocardiogramOnboardingHistoryKnown;
- (void)_featureAvailabilityConditionsDidUpdate;
- (long long)_getOnboardingVersionForKey:(id)a0;
- (char)_isOnboardingCompletedForKey:(id)a0 version:(long long)a1;
- (char)_isOnboardingCompletedForKey:(id)a0 version:(long long)a1 useCache:(char)a2;
- (id)_makeOnboardingHistoryWithVersionCompleted:(long long)a0 versionCompletedKey:(id)a1 additionalValues:(id)a2 countryCodeKey:(id)a3;
- (char)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(long long)a0 currentDate:(id)a1;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void)_removeFirstOnboardingCompletedDatesForKey:(id)a0 completion:(id /* block */)a1;
- (void)_resetElectrocardiogramRescindedStatusCacheWithLock:(char)a0;
- (void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)a0 inCountryCode:(id)a1;
- (void)_setFirstOnboardingCompletedDate:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)_setOnboardingVersionCompleted:(long long)a0 forKey:(id)a1 additionalValues:(id)a2 completion:(id /* block */)a3;
- (void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)a0;
- (void)_updateOnboardingCompletionForKey:(id)a0 andVersion:(long long)a1;
- (void)addHeartRhythmAvailabilityObserver:(id)a0;
- (long long)electrocardiogramOnboardingCompletedVersionNoCache;
- (id)electrocardiogramOnboardingCountryCode;
- (id)electrocardiogramOnboardingHistoryType:(long long)a0;
- (id)initWithHealthStore:(id)a0 currentCountryCode:(id)a1;
- (char)isElectrocardiogramOnboardingCompletedForAnyOnboardingVersion;
- (char)isElectrocardiogramOnboardingCompletedNoCache;
- (void)notifyHeartRhythmAvailabilityDidUpdate;
- (void)removeHeartRhythmAvailabilityObserver:(id)a0;
- (void)setAllowInstallingElectrocardiogramWatchApp:(char)a0;
- (void)setElectrocardiogramFirstOnboardingCompletedDate:(id)a0;
- (void)setElectrocardiogramOnboardingCompleted;
- (void)setElectrocardiogramOnboardingCompletedVersion:(long long)a0 countryCode:(id)a1;
- (char)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
- (void)unitTest_setElectrocardiogramOnboardingCompletedForVersion:(long long)a0 countryCode:(id)a1 completion:(id /* block */)a2;
- (void)updateElectrocardiogramWatchAppInstallIsAllowed;
- (void)updateOnboardingCompletionVersionCache;

@end
