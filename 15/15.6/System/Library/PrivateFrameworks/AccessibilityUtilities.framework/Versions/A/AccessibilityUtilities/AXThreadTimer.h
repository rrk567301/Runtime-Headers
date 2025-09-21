@class NSString, AXThreadTimerTask, NSThread;

@interface AXThreadTimer : NSObject <AXAccessQueueTimer> {
    NSThread *_thread;
    id /* block */ _cancelBlock;
}

@property (retain, nonatomic) AXThreadTimerTask *task;
@property (readonly, nonatomic, getter=isCancelled) char cancelled;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isPending) char pending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (id)initWithThread:(id)a0;
- (void)_runAfterDelay:(id)a0;

@end
