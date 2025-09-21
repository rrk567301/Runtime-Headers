@class NSString, AXAccessQueue, NSObject;
@protocol OS_dispatch_source;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer>

@property (nonatomic, getter=isActive) char active;
@property (nonatomic) int state;
@property (retain, nonatomic) AXAccessQueue *accessQueue;
@property (nonatomic) char accessQueueIsExternal;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (copy) NSString *label;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly, nonatomic, getter=isPending) char pending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timerTargettingMainAccessQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (void)afterDelay:(double)a0 processWritingBlock:(id /* block */)a1;
- (void)afterDelay:(double)a0 processReadingBlock:(id /* block */)a1;
- (void)_afterDelay:(double)a0 processBlock:(id /* block */)a1 shouldTreatAsWritingBlock:(char)a2;
- (void)_didFinishProcessingBlock;
- (void)_performEnqueuedWritingBlock:(id /* block */)a0 asynchronousExecutionWarningHandler:(SEL)a1;
- (void)_warnAboutAsynchronousCancelling;
- (void)_warnAboutAsynchronousScheduling;
- (id)initWithTargetAccessQueue:(id)a0;

@end
