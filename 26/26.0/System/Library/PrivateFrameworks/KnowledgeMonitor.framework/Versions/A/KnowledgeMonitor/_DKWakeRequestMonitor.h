@class NSString, NSObject, NSDate;
@protocol OS_dispatch_source;

@interface _DKWakeRequestMonitor : _DKMonitor {
    BOOL _updateTimerResumed;
}

@property (retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate;
@property (retain, nonatomic) NSString *nextUserVisibleWakeRequestor;
@property (nonatomic) int wakeRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;

+ (id)entitlements;
+ (id)eventStream;

- (void)saveState;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)dealloc;
- (void)stop;
- (void)obtainNextUserVisibleWakeRequest;
- (void)deactivate;
- (void).cxx_destruct;

@end
