@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (BOOL)isSensitiveLoggingAllowed;
- (BOOL)isRPILoggingAllowed;
- (id)init;
- (void)setLoggingEntitledApp:(BOOL)a0;
- (void)loadLoggingPrefs;

@end
