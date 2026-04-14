@interface ATXAppLaunchLogger : ATXAbstractVersionedDatabase {
    BOOL _enabled;
}

+ (id)sharedInstance;

- (id)_init;
- (long long)latestVersion;
- (void)logAppLaunchFrom:(unsigned long long)a0 at:(id)a1;
- (id)createCustomSchema;

@end
