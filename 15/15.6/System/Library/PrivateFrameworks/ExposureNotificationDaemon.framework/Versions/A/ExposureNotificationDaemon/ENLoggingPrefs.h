@interface ENLoggingPrefs : NSObject {
    char _sensitiveLoggingEnabled;
    char _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (id)init;
- (char)isRPILoggingAllowed;
- (char)isSensitiveLoggingAllowed;
- (void)loadLoggingPrefs;
- (void)setLoggingEntitledApp:(char)a0;

@end
