@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface OITSUDelayTimer : NSObject

@property (retain, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue;
@property (retain, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer;
@property (nonatomic, getter=_isCancelled, setter=_setCancelled:) char _cancelled;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;

- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (id)initWithTargetSerialQueue:(id)a0;

@end
