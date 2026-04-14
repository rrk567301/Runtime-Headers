@class NSString, NSObject, NSDate;
@protocol OS_dispatch_source;

@interface _DKWakeRequestMonitor : _DKMonitor {
    BOOL _updateTimerResumed;
}

@property (retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate;
@property (retain, nonatomic) NSString *nextUserVisibleWakeRequestor;
@property (nonatomic) int wakeRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;

+ (id)eventStream;
+ (id)entitlements;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (void)obtainNextUserVisibleWakeRequest;
- (id)loadState;
- (void)deactivate;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;

@end
