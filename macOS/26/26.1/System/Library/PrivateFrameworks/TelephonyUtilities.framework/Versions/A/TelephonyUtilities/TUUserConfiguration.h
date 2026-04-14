@class CoreTelephonyClient;

@interface TUUserConfiguration : TUConfiguration

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;

+ (id)userDefaults;
+ (id)registeredDefaults;
+ (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1 dataSource:(id)a2;
+ (BOOL)isFilterAsNewCallersEnabledForFaceTime;
+ (BOOL)isFilterAsNewCallersEnabledForPhone;

- (void)synchronize;
- (BOOL)isCallHapticsEnabled;
- (BOOL)isCallScreeningEnabled;
- (void)setReceptionistEnabled:(BOOL)a0;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(BOOL)a0;
- (BOOL)isEligibleForReceptionistOnboardingNotification;
- (void)setFilterAsNewCallersEnabledForPhone:(BOOL)a0;
- (BOOL)isBusinessConnectCallingEnabled;
- (BOOL)isHoldAssistDetectionEnabled;
- (void)setFilterAsNewCallersEnabledForFaceTime:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setBrandedCallingEnabled:(BOOL)a0 subscription:(id)a1;
- (BOOL)isFilterAsNewCallersEnabledForFaceTime;
- (void)setValueInUserDefaults:(id)a0 forKey:(id)a1;
- (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1;
- (BOOL)isUplevelFTAEnabled;
- (void)setSilenceUnknownCallersEnabledForPhone:(BOOL)a0;
- (BOOL)isSilenceJunkCallingEnabled;
- (void)setCallHapticsEnabled:(BOOL)a0;
- (void)setBusinessConnectCallingEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setUplevelFTAEnabled:(BOOL)a0;
- (BOOL)isCallRecordingEnabled;
- (void)setHoldAssistDetectionEnabled:(BOOL)a0;
- (BOOL)isReceptionistEnabled;
- (void).cxx_destruct;
- (BOOL)isSpamFilterEnabledForFaceTime;
- (BOOL)isFilterAsNewCallersEnabledForPhone;
- (void)setCallScreeningEnabled:(BOOL)a0;
- (void)setSilenceJunkCallingEnabled:(BOOL)a0;
- (void)setSpamFilterEnabledForFaceTime:(BOOL)a0;
- (void)setEligibleForReceptionistOnboardingNotification:(BOOL)a0;
- (void)setCallRecordingEnabled:(BOOL)a0;
- (BOOL)isBrandedCallingEnabled:(id)a0;
- (BOOL)isSilenceUnknownCallersEnabledForFaceTime;
- (id)init;
- (BOOL)isSilenceUnknownCallersEnabledForPhone;

@end
