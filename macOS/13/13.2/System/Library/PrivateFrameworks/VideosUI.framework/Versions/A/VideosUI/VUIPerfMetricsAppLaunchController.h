@class NSDictionary;

@interface VUIPerfMetricsAppLaunchController : NSObject

@property (copy, nonatomic) NSDictionary *appLaunchData;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)recordAppLaunchEventWithEventType:(id)a0;
- (void)_setAppLaunchFieldWithData:(id)a0;

@end
