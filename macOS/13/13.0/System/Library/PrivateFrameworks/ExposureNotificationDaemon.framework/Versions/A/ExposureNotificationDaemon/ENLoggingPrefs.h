@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (id)init;
- (void)setLoggingEntitledApp:(BOOL)a0;
- (void)loadLoggingPrefs;
- (BOOL)isSensitiveLoggingAllowed;
- (BOOL)isRPILoggingAllowed;

@end
