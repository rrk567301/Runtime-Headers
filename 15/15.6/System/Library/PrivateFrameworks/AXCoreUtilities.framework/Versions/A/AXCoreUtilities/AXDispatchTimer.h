@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AXDispatchTimer : NSObject

@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isPending) char pending;
@property (nonatomic, getter=isCancelled) char cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (copy) id /* block */ processBlock;
@property (copy) id /* block */ cancelBlock;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic) char useWallTime;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (id)initWithTargetSerialQueue:(id)a0;
- (void)_afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;

@end
