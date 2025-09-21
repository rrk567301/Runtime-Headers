@interface SRFLoggingDefaults : NSObject

+ (id)sharedDefaults;
+ (id)_sharedAssistantLoggingUserDefaults;

- (long long)loggingEnabled;
- (void)setLoggingEnabled:(char)a0;

@end
