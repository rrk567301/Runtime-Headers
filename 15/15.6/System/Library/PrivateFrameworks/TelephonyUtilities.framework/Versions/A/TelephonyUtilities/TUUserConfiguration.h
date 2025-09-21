@class CoreTelephonyClient;

@interface TUUserConfiguration : TUConfiguration

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;

+ (id)userDefaults;
+ (id)registeredDefaults;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)isBusinessConnectCallingEnabled;
- (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1;
- (char)isBrandedCallingEnabled:(id)a0;
- (char)isCallScreeningEnabled;
- (char)isSilenceJunkCallingEnabled;
- (char)isSilenceUnknownCallersEnabledForFaceTime;
- (char)isSilenceUnknownCallersEnabledForPhone;
- (void)setBrandedCallingEnabled:(char)a0 subscription:(id)a1;
- (void)setBusinessConnectCallingEnabled:(char)a0;
- (void)setCallScreeningEnabled:(char)a0;
- (void)setSilenceJunkCallingEnabled:(char)a0;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(char)a0;
- (void)setSilenceUnknownCallersEnabledForPhone:(char)a0;
- (void)setValueInUserDefaults:(id)a0 forKey:(id)a1;

@end
