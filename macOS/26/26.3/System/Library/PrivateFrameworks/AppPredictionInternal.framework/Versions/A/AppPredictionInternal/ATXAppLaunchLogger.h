@interface ATXAppLaunchLogger : ATXAbstractVersionedDatabase {
    BOOL _enabled;
}

+ (id)sharedInstance;

- (long long)latestVersion;
- (id)createCustomSchema;
- (void)logAppLaunchFrom:(unsigned long long)a0 at:(id)a1;
- (id)_init;

@end
