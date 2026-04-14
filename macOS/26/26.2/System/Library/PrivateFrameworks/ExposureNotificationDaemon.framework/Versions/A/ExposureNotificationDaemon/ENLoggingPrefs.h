@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (BOOL)isRPILoggingAllowed;
- (void)setLoggingEntitledApp:(BOOL)a0;
- (BOOL)isSensitiveLoggingAllowed;
- (id)init;
- (void)loadLoggingPrefs;

@end
