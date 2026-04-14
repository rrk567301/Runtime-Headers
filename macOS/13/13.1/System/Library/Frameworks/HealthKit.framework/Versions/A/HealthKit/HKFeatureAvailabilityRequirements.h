@interface HKFeatureAvailabilityRequirements : NSObject

+ (id)activeRemoteDeviceIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)bloodOxygenMeasurementsAreEnabled;
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0;
+ (id)capabilityIsSupportedOnActiveWatchForFeatureWithIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)capabilityIsSupportedOnAnyWatch:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)countryCodeIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)a0;
+ (id)featureFlagIsEnabled:(BOOL)a0;
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)a0;
+ (id)featureIsOnWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)healthAppIsNotHidden;
+ (id)heartRateIsEnabledInPrivacy;
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)notAgeGatedForUserDefaultsKey:(id)a0;
+ (id)notInStoreDemoMode;
+ (id)onboardedAtLeastDaysAgo:(long long)a0 featureIdentifier:(id)a1;
+ (id)onboardingRecordsArePresentForPrerequisiteFeaturesWithIdentifiers:(id)a0;
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)prerequisiteFeaturesAreOnWithFeatureSettings:(id)a0;
+ (id)profileIsNotFamilySetupPairingProfile;
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)a0;
+ (id)watchLowPowerModeIsOff;
+ (id)wristDetectionIsEnabledForActiveWatch;
+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)countryIsSupportedOnLocalDeviceAndPhoneForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)defaultOnboardingEligibilityRequirementsForFeatureIdentifier:(id)a0;
+ (id)defaultHelpTileRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)defaultTipsAppVisibilityRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;

@end
