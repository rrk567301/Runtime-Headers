@class NSString, HKSPObserverSet;
@protocol HKSPSleepOnboardingStore, HKSPFeatureSettingsModel, HKSPOnboardingModel, HKSPFeatureAvailabilityPairedDeviceRegistry;

@interface HKSPFeatureAvailabilityStore : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProviding> {
    id<HKSPSleepOnboardingStore> _sleepStore;
    HKSPObserverSet *_observers;
    long long _feature;
    id<HKSPFeatureAvailabilityPairedDeviceRegistry> _pairedDeviceRegistry;
    int _deviceCharacteristicChangeNotifyToken;
    id<HKSPOnboardingModel> _cachedOnboardingModel;
    id<HKSPFeatureSettingsModel> _cachedFeatureSettingsModel;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _modelLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)_withLock:(id /* block */)a0;
- (void)unregisterObserver:(id)a0;
- (id)_sleepTrackingRequirements;
- (id)regionAvailabilityWithError:(id *)a0;
- (BOOL)_updateCachedFeatureSettingsModel:(id)a0;
- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (BOOL)_updateCachedOnboardingModel:(id)a0;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)_registerForNotifications;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (id)_onboardingCompletionForOnboardingModel:(id)a0;
- (void)_notifyObserversForDidUpdateOnboarding;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1 pairedDeviceRegistry:(id)a2;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (unsigned long long)_onboardingIneligibilityReasons;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (id)_defaultRequirements;
- (void)_onboardingModelWithCompletion:(id /* block */)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)_notifyObserversForDidUpdateSettings;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)_defaultSleepTrackingRequirements;
- (id)_onboardSleepTrackingRequirements;
- (void)dealloc;
- (id)_featureSettingsModelWithError:(id *)a0;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)_onboardingModelWithError:(id *)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (id)_useSleepTrackingRequirements;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1;
- (BOOL)_isCurrentOnboardingVersionCompletedForOnboardingModel:(id)a0;
- (long long)_onboardedCountrySupportedStateForOnboardingModel:(id)a0;
- (id)_featureSettingsForOnboardingModel:(id)a0 featureSettingsModel:(id)a1;
- (void)_pairedDeviceDidChange;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;

@end
