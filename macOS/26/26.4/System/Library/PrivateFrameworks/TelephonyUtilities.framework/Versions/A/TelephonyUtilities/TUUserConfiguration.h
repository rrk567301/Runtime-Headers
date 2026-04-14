@class CoreTelephonyClient;

@interface TUUserConfiguration : TUConfiguration

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;

+ (id)featureFlags;
+ (unsigned long long)faceTimeNewCallersFilterMode;
+ (id)numberForKey:(id)a0 dataSource:(id)a1;
+ (BOOL)isLegacyFilterAsNewCallersEnabledForFaceTime;
+ (BOOL)isFilterAsNewCallersEnabledForFaceTime;
+ (id)registeredDefaults;
+ (BOOL)isFilterAsNewCallersEnabledForPhone;
+ (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1 dataSource:(id)a2;
+ (unsigned long long)migrateLegaceCallFiltering;
+ (id)userDefaults;

- (void)setCallRecordingEnabled:(BOOL)a0;
- (BOOL)isSilenceJunkCallingEnabled;
- (void)setReceptionistEnabled:(BOOL)a0;
- (unsigned long long)faceTimeNewCallersFilterMode;
- (void)setBusinessConnectCallingEnabled:(BOOL)a0;
- (void)setHoldAssistDetectionEnabled:(BOOL)a0;
- (void)synchronize;
- (void)setSilenceUnknownCallersEnabledForPhone:(BOOL)a0;
- (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1;
- (void)setFilterAsNewCallersEnabledForFaceTime:(BOOL)a0;
- (BOOL)isCallRecordingEnabled;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(BOOL)a0;
- (BOOL)isUplevelFTAEnabled;
- (BOOL)isSilenceUnknownCallersEnabledForFaceTime;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isSilenceUnknownCallersEnabledForPhone;
- (BOOL)isSpamFilterEnabledForFaceTime;
- (BOOL)isFilterAsNewCallersEnabledForFaceTime;
- (BOOL)isBrandedCallingEnabled:(id)a0;
- (BOOL)isFilterAsNewCallersEnabledForPhone;
- (void)setEligibleForReceptionistOnboardingNotification:(BOOL)a0;
- (void)setFilterAsNewCallersEnabledForPhone:(BOOL)a0;
- (void)setBrandedCallingEnabled:(BOOL)a0 subscription:(id)a1;
- (void)setSilenceJunkCallingEnabled:(BOOL)a0;
- (BOOL)isCallScreeningEnabled;
- (BOOL)isBusinessConnectCallingEnabled;
- (void)setCallScreeningEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setCallHapticsEnabled:(BOOL)a0;
- (BOOL)isReceptionistEnabled;
- (void)setSpamFilterEnabledForFaceTime:(BOOL)a0;
- (BOOL)isHoldAssistDetectionEnabled;
- (id)init;
- (void)setFaceTimeNewCallersFilterMode:(unsigned long long)a0;
- (void)setUplevelFTAEnabled:(BOOL)a0;
- (BOOL)isCallHapticsEnabled;
- (void)dealloc;
- (BOOL)isEligibleForReceptionistOnboardingNotification;
- (void)setValueInUserDefaults:(id)a0 forKey:(id)a1;

@end
