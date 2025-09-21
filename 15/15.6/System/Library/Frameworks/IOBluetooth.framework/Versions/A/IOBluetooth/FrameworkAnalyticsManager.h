@interface FrameworkAnalyticsManager : NSObject

@property char coreAnalyticsAvailable;

+ (id)sharedManager;

- (id)init;
- (char)isCoreAnalyticsAvailable;
- (void)submitToCoreAnalytics:(id)a0;

@end
