@interface BiometricKitCoreAnalyticsLogger : NSObject

@property BOOL analyticsSaveToFile;

+ (id)sharedInstance;

- (id)init;
- (void)analyticsOSLogNSDictionary:(id)a0 forEvent:(id)a1 toLogPath:(id)a2 withPrefix:(id)a3;
- (void)updateDefaults;

@end
