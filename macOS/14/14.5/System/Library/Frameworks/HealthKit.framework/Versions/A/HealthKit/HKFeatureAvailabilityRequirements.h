@interface HKFeatureAvailabilityRequirements : NSObject

+ (id)bloodOxygenRecordingsAreEnabled;
+ (id)activeRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapabilityForFeatureWithIdentifier:(id)a0;
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0;
+ (id)capabilityIsSupportedOnActiveWatchForFeatureWithIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)capabilityIsSupportedOnAnyWatch:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)countryCodeIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)countryIsSupportedOnLocalDeviceAndPhoneForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)a0;
+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)defaultHelpTileRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)defaultOnboardingEligibilityRequirementsForFeatureIdentifier:(id)a0;
+ (id)defaultTipsAppVisibilityRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)featureFlagIsEnabled:(BOOL)a0;
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)a0;
+ (id)featureIsOnWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)featureIsOnWithIdentifier:(id)a0 settingsKey:(id)a1 isOnIfSettingIsAbsent:(BOOL)a2;
+ (id)healthAppIsNotHidden;
+ (id)heartRateIsEnabledInPrivacy;
+ (id)localDeviceIsCapableOfPairingWithWatch;
+ (id)localDeviceIsCapableOfWatchPairing;
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)a0;
+ (id)notAgeGatedForUserDefaultsKey:(id)a0;
+ (id)notInStoreDemoMode;
+ (id)onboardedAtLeastDaysAgo:(long long)a0 featureIdentifier:(id)a1;
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordsArePresentForPrerequisiteFeaturesWithIdentifiers:(id)a0;
+ (id)prerequisiteFeaturesAreOnWithFeatureSettings:(id)a0;
+ (id)profileIsNotFamilySetupPairingProfile;
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)a0;
+ (id)watchAppIsInstalledForBundleIdentifier:(id)a0;
+ (id)watchLowPowerModeIsOff;
+ (id)wristDetectionIsEnabledForActiveWatch;

@end
