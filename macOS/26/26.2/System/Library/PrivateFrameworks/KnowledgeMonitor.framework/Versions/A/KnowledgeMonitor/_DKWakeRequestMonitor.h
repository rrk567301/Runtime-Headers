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

- (id)loadState;
- (void)saveState;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (void)obtainNextUserVisibleWakeRequest;
- (void)deactivate;
- (void)dealloc;

@end
