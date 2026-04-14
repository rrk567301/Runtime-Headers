@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (BOOL)isRPILoggingAllowed;
- (BOOL)isSensitiveLoggingAllowed;
- (void)setLoggingEntitledApp:(BOOL)a0;
- (void)loadLoggingPrefs;
- (id)init;

@end
