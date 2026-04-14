@class CoreTelephonyClient;

@interface TUUserConfiguration : TUConfiguration

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;

+ (id)registeredDefaults;
+ (BOOL)isFilterAsNewCallersEnabledForPhone;
+ (id)userDefaults;
+ (BOOL)isFilterAsNewCallersEnabledForFaceTime;
+ (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1 dataSource:(id)a2;

- (void)setBrandedCallingEnabled:(BOOL)a0 subscription:(id)a1;
- (BOOL)isFilterAsNewCallersEnabledForPhone;
- (void)setSpamFilterEnabledForFaceTime:(BOOL)a0;
- (BOOL)isUplevelFTAEnabled;
- (void)setCallRecordingEnabled:(BOOL)a0;
- (BOOL)isCallRecordingEnabled;
- (BOOL)isBrandedCallingEnabled:(id)a0;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(BOOL)a0;
- (BOOL)isCallScreeningEnabled;
- (void)synchronize;
- (void)setBusinessConnectCallingEnabled:(BOOL)a0;
- (void)setUplevelFTAEnabled:(BOOL)a0;
- (void)setEligibleForReceptionistOnboardingNotification:(BOOL)a0;
- (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isFilterAsNewCallersEnabledForFaceTime;
- (void)setSilenceJunkCallingEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isBusinessConnectCallingEnabled;
- (void)setSilenceUnknownCallersEnabledForPhone:(BOOL)a0;
- (BOOL)isEligibleForReceptionistOnboardingNotification;
- (BOOL)isSpamFilterEnabledForFaceTime;
- (void)setHoldAssistDetectionEnabled:(BOOL)a0;
- (void)setCallScreeningEnabled:(BOOL)a0;
- (void)setCallHapticsEnabled:(BOOL)a0;
- (void)setFilterAsNewCallersEnabledForFaceTime:(BOOL)a0;
- (BOOL)isSilenceJunkCallingEnabled;
- (BOOL)isHoldAssistDetectionEnabled;
- (BOOL)isReceptionistEnabled;
- (BOOL)isSilenceUnknownCallersEnabledForPhone;
- (BOOL)isCallHapticsEnabled;
- (id)init;
- (void)setValueInUserDefaults:(id)a0 forKey:(id)a1;
- (void)setReceptionistEnabled:(BOOL)a0;
- (void)setFilterAsNewCallersEnabledForPhone:(BOOL)a0;
- (void)dealloc;
- (BOOL)isSilenceUnknownCallersEnabledForFaceTime;

@end
