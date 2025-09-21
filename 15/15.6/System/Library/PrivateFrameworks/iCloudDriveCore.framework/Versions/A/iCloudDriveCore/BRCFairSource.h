@class NSString, BRCFairScheduler, NSObject;
@protocol OS_dispatch_workloop;

@interface BRCFairSource : NSObject {
    unsigned long long _schedulerBitIndex;
    NSString *_name;
    BRCFairScheduler *_scheduler;
    int _suspendCount;
    char _cancelled;
    char _signaled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (copy, nonatomic) id /* block */ eventHandler;

- (id)description;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)signal;
- (void)_runEventHandler;
- (id)initWithName:(id)a0 scheduler:(id)a1;

@end
