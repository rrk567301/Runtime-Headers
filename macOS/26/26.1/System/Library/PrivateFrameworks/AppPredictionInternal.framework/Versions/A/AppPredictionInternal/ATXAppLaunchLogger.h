@interface ATXAppLaunchLogger : ATXAbstractVersionedDatabase {
    BOOL _enabled;
}

+ (id)sharedInstance;

- (long long)latestVersion;
- (void)logAppLaunchFrom:(unsigned long long)a0 at:(id)a1;
- (id)_init;
- (id)createCustomSchema;

@end
