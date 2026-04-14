@class NSString, BRCDeadlineScheduler, NSObject;
@protocol OS_dispatch_workloop;

@interface BRCDeadlineSource : NSObject {
    long long _deadline;
    BRCDeadlineScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSString *_name;
}

@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)runEventHandler;
- (void)signal;
- (void)cancel;
- (void)signalWithDeadline:(long long)a0;
- (void)suspend;
- (void)resume;
- (BOOL)willRunEvenHandler;
- (id)description;
- (id)initWithScheduler:(id)a0 name:(id)a1;
- (void)signalWithDeadline:(long long)a0 extend:(BOOL)a1;
- (void).cxx_destruct;

@end
