@class CoreTelephonyClient;

@interface TUUserConfiguration : TUConfiguration

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;

+ (id)userDefaults;
+ (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1 dataSource:(id)a2;
+ (BOOL)isFilterAsNewCallersEnabledForFaceTime;
+ (BOOL)isFilterAsNewCallersEnabledForPhone;
+ (id)registeredDefaults;

- (void)setCallHapticsEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setBrandedCallingEnabled:(BOOL)a0 subscription:(id)a1;
- (BOOL)isEligibleForReceptionistOnboardingNotification;
- (BOOL)isHoldAssistDetectionEnabled;
- (BOOL)isCallRecordingEnabled;
- (void)setReceptionistEnabled:(BOOL)a0;
- (BOOL)isCallHapticsEnabled;
- (void)setFilterAsNewCallersEnabledForPhone:(BOOL)a0;
- (BOOL)isUplevelFTAEnabled;
- (void)setValueInUserDefaults:(id)a0 forKey:(id)a1;
- (void)setBusinessConnectCallingEnabled:(BOOL)a0;
- (id)init;
- (void)setHoldAssistDetectionEnabled:(BOOL)a0;
- (void)setCallRecordingEnabled:(BOOL)a0;
- (BOOL)isSilenceUnknownCallersEnabledForPhone;
- (BOOL)isReceptionistEnabled;
- (BOOL)isBrandedCallingEnabled:(id)a0;
- (void)setUplevelFTAEnabled:(BOOL)a0;
- (void)setFilterAsNewCallersEnabledForFaceTime:(BOOL)a0;
- (void)setSilenceJunkCallingEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isSilenceUnknownCallersEnabledForFaceTime;
- (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1;
- (void)dealloc;
- (void)setSilenceUnknownCallersEnabledForPhone:(BOOL)a0;
- (BOOL)isCallScreeningEnabled;
- (BOOL)isSpamFilterEnabledForFaceTime;
- (BOOL)isFilterAsNewCallersEnabledForFaceTime;
- (BOOL)isFilterAsNewCallersEnabledForPhone;
- (void)setSpamFilterEnabledForFaceTime:(BOOL)a0;
- (void)synchronize;
- (BOOL)isSilenceJunkCallingEnabled;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(BOOL)a0;
- (void)setEligibleForReceptionistOnboardingNotification:(BOOL)a0;
- (BOOL)isBusinessConnectCallingEnabled;
- (void)setCallScreeningEnabled:(BOOL)a0;

@end
