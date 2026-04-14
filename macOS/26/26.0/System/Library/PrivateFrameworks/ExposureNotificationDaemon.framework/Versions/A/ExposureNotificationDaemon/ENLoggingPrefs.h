@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (void)setLoggingEntitledApp:(BOOL)a0;
- (BOOL)isRPILoggingAllowed;
- (id)init;
- (BOOL)isSensitiveLoggingAllowed;
- (void)loadLoggingPrefs;

@end
