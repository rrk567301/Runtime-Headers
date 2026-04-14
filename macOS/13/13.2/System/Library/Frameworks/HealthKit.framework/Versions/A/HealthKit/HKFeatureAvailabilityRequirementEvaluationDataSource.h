@class _HKBehavior, HKFeatureAvailabilityProvidingDataSource, NSDate, HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource, HKUserDefaultsDataSource, HKDarwinNotificationDataSource, HKWristDetectionSettingDataSource, HKNanoRegistryPairingAndSwitchingNotificationDataSource, HKWatchLowPowerModeDataSource;
@protocol HKCurrentCountryCodeProvider, HKFeatureAvailabilityHealthDataSource, HKFeatureOnboardingRecordFallbackProviding;

@interface HKFeatureAvailabilityRequirementEvaluationDataSource : NSObject

@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> strongHealthDataSource;
@property (copy, nonatomic) id /* block */ currentDateDataSource;
@property (retain, nonatomic) id<HKFeatureOnboardingRecordFallbackProviding> onboardingRecordFallbackProvider;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityProvidingDataSource *featureAvailabilityProvidingDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *privacyPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *respiratoryPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *ageGatingDataSource;
@property (readonly, nonatomic) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource;
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingNotificationDataSource;
@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (readonly, nonatomic) HKWatchLowPowerModeDataSource *watchLowPowerModeDataSource;
@property (readonly, nonatomic) id<HKCurrentCountryCodeProvider> currentCountryCodeProvider;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) NSDate *currentDate;

+ (id)dataSourceWithHealthDataSource:(id)a0;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 onboardingRecordFallbackProvider:(id)a2;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 wristDetectionSettingManager:(id)a2 requirementSatisfactionOverridesDataSource:(id)a3 onboardingRecordFallbackProvider:(id)a4;

- (void).cxx_destruct;
- (id)healthDataSource;
- (void)registerObserverForDeviceCharacteristicAndPairingChanges:(id)a0 block:(id /* block */)a1;
- (void)unregisterObserverForDeviceCharacteristicAndPairingChanges:(id)a0;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithHealthDataSource:(id)a0 privacyPreferencesDataSource:(id)a1 respiratoryPreferencesDataSource:(id)a2 ageGatingDataSource:(id)a3 wristDetectionSettingDataSource:(id)a4 devicePairingAndSwitchingNotificationDataSource:(id)a5 darwinNotificationDataSource:(id)a6 watchLowPowerModeDataSource:(id)a7 currentCountryCodeProvider:(id)a8 requirementSatisfactionOverridesDataSource:(id)a9 currentDateDataSource:(id /* block */)a10 onboardingRecordFallbackProvider:(id)a11;
- (id)initWithHealthDataSource:(id)a0 featureAvailabilityProvidingDataSource:(id)a1 privacyPreferencesDataSource:(id)a2 respiratoryPreferencesDataSource:(id)a3 ageGatingDataSource:(id)a4 wristDetectionSettingDataSource:(id)a5 devicePairingAndSwitchingNotificationDataSource:(id)a6 darwinNotificationDataSource:(id)a7 watchLowPowerModeDataSource:(id)a8 currentCountryCodeProvider:(id)a9 requirementSatisfactionOverridesDataSource:(id)a10 currentDateDataSource:(id /* block */)a11 onboardingRecordFallbackProvider:(id)a12;
- (id)performLocalEvaluation:(id /* block */)a0;
- (id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)a0;

@end
