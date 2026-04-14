@class CoreTelephonyClient;

@interface TUUserConfiguration : TUConfiguration

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;

+ (id)userDefaults;
+ (id)registeredDefaults;
+ (BOOL)isFilterAsNewCallersEnabledForFaceTime;
+ (BOOL)isFilterAsNewCallersEnabledForPhone;
+ (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1 dataSource:(id)a2;

- (void)setUplevelFTAEnabled:(BOOL)a0;
- (void)setCallRecordingEnabled:(BOOL)a0;
- (void)setBusinessConnectCallingEnabled:(BOOL)a0;
- (void)dealloc;
- (BOOL)isSilenceUnknownCallersEnabledForFaceTime;
- (void)setReceptionistEnabled:(BOOL)a0;
- (BOOL)isFilterAsNewCallersEnabledForFaceTime;
- (void)synchronize;
- (BOOL)isCallScreeningEnabled;
- (BOOL)isEligibleForReceptionistOnboardingNotification;
- (id)init;
- (BOOL)isBrandedCallingEnabled:(id)a0;
- (void)setSilenceUnknownCallersEnabledForPhone:(BOOL)a0;
- (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1;
- (BOOL)isUplevelFTAEnabled;
- (BOOL)isBusinessConnectCallingEnabled;
- (void)setFilterAsNewCallersEnabledForFaceTime:(BOOL)a0;
- (BOOL)isHoldAssistDetectionEnabled;
- (void)setCallScreeningEnabled:(BOOL)a0;
- (BOOL)isCallRecordingEnabled;
- (BOOL)isSpamFilterEnabledForFaceTime;
- (BOOL)isSilenceJunkCallingEnabled;
- (BOOL)isFilterAsNewCallersEnabledForPhone;
- (BOOL)isReceptionistEnabled;
- (void)setValueInUserDefaults:(id)a0 forKey:(id)a1;
- (BOOL)isSilenceUnknownCallersEnabledForPhone;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setEligibleForReceptionistOnboardingNotification:(BOOL)a0;
- (void)setSilenceJunkCallingEnabled:(BOOL)a0;
- (void)setFilterAsNewCallersEnabledForPhone:(BOOL)a0;
- (void)setHoldAssistDetectionEnabled:(BOOL)a0;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(BOOL)a0;
- (void)setSpamFilterEnabledForFaceTime:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBrandedCallingEnabled:(BOOL)a0 subscription:(id)a1;

@end
