@class NSString, NSDictionary, NSData, NSMutableDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AKConfiguration : NSObject {
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

@property (nonatomic) long long shouldFakeOSEligibility;
@property (nonatomic) long long isAdultAgeVerificationRequirementState;
@property (nonatomic) long long isAdultAgeVerificationRequirementStateMiniBuddy;
@property (nonatomic) long long isAdultAgeVerificationRequirementStateScreenTime;
@property (nonatomic) long long isAgeVerificationRequirementStateScreenTime;
@property (nonatomic) long long isGuardianAgeVerificationRequirementState;
@property (nonatomic) long long isGuardianAgeVerificationRequirementStateMiniBuddy;
@property (nonatomic) long long isTeenAttachedToFamilyRequirementState;
@property (nonatomic) long long isChildAndTeenRestrictionRequirementStateMiniBuddy;
@property (nonatomic) long long isChildTeenAgeVerificationRequirementStateScreenTime;
@property (nonatomic) long long isUnverifiedAdultRestrictionRequirementState;
@property (nonatomic) long long isUnverifiedAdultRestrictionRequirementStateMiniBuddy;
@property (nonatomic) long long isU18RestrictionRequirementState;
@property (nonatomic) long long shouldFakeAuthSuccess;
@property (nonatomic) long long shouldDisablePiggybacking;
@property (nonatomic) long long shouldSuppressHSA2Suggestions;
@property (nonatomic) long long shouldAddHSA2CreateHeader;
@property (nonatomic) long long shouldAllowPhoneNumberAccounts;
@property (nonatomic) long long shouldAllowExperimentalMode;
@property (nonatomic) long long shouldHideInternalBuildHeader;
@property (nonatomic) long long shouldHideSeedBuildHeader;
@property (nonatomic) long long shouldAllowDemoMode;
@property (nonatomic) long long shouldAllowTestApplication;
@property (nonatomic) long long shouldEnableTestAccountMode;
@property (nonatomic) long long shouldSuppressModalSheetsInMacBuddy;
@property (nonatomic) long long shouldAlwaysShowWelcome;
@property (nonatomic) long long shouldAutocycleAppsInTiburon;
@property (nonatomic) long long shouldAutocycleAppsInWebTakeover;
@property (nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property (nonatomic) long long requestedCloudPartition;
@property (nonatomic) long long shouldBypassCustodianDeviceCheck;
@property (nonatomic) long long shouldEnableAttestationLogging;
@property (nonatomic) long long shouldEnableBeneficiaryLiveOn;
@property (nonatomic) long long shouldEnablePiggybackingPresence;
@property (nonatomic) long long shouldForceBaaValidation;
@property (nonatomic) long long piggybackingIDMSPresenceOverride;
@property (nonatomic) long long piggybackingLocalPresenceOverride;
@property (nonatomic) long long forceSilentEscrowRecordRepairEnabled;
@property (nonatomic) long long forceSilentEscrowRecordRepairEnabledV2;
@property (nonatomic) long long forceSilentBurnCDPRepairEnabled;
@property (readonly, nonatomic) unsigned long long internalFeaturesMaskValue;
@property (copy, nonatomic) NSString *lastKnownLocale;
@property (nonatomic) long long shouldAskToBuy;
@property (nonatomic) long long shouldEnableTelemetryOptIn;
@property (nonatomic) long long shouldEnableAccountImprovementOptIn;
@property (nonatomic) long long telemetryOptInGracePeriodOverride;
@property (nonatomic) long long forceHasSOSActiveDevice;
@property (nonatomic) long long forceSOSNeeded;
@property (copy, nonatomic) NSData *strongDeviceIdentityMarker;
@property (nonatomic) long long criticalAccountEditsAllowedOverride;
@property (nonatomic) long long deviceSafetyRestrictionReasonOverride;
@property (nonatomic) long long internalSiwADefaultHME;
@property (nonatomic) long long accountAccessTelemetryOptInFFOverride;
@property (nonatomic) NSNumber *idmsWalrusStatusOverride;
@property (nonatomic) NSNumber *pdpStateOverride;
@property (copy, nonatomic) NSDictionary *failureInjectionConfig;

+ (id)sharedConfiguration;

- (void)_clearGlobalConfigValues;
- (long long)overrideForKey:(id)a0;
- (void)setAccountAccessTelemetryOptInOverride:(long long)a0;
- (long long)osEligibilityConfigValueForKey:(id)a0;
- (id)configurationValueForKey:(id)a0 useDomain:(BOOL)a1;
- (void).cxx_destruct;
- (void)setOverride:(long long)a0 forKey:(id)a1;
- (long long)shouldRequestPiggybackingPresenceEnforcement;
- (id)init;
- (BOOL)_validCloudPartition:(long long)a0;
- (id)configurationValueForKey:(id)a0;
- (void)setConfigurationValue:(id)a0 forKey:(id)a1;
- (void)setDomainConfigurationValue:(id)a0 forKey:(id)a1;
- (void)dealloc;

@end
