@interface FrameworkAnalyticsManager : NSObject

@property BOOL coreAnalyticsAvailable;

+ (id)sharedManager;

- (id)init;
- (void)submitToCoreAnalytics:(id)a0;
- (BOOL)isCoreAnalyticsAvailable;

@end
