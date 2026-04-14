@class NSNumber;

@interface LNActionExecutorMetrics : NSObject

@property (nonatomic) unsigned long long connectionDurationNS;
@property (nonatomic) long long target;
@property (nonatomic) BOOL requiredProcessLaunch;
@property (nonatomic) BOOL didForegroundApp;
@property (copy, nonatomic) NSNumber *startedLiveActivity;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
