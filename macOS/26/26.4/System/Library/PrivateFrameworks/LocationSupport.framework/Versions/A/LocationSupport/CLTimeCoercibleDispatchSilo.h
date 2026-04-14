@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo

@property (readonly, nonatomic) NSMutableArray *timerHolders;

- (id)initWithUnderlyingQueue:(id)a0;
- (id)newTimer;
- (void)setLatchedAbsoluteTimestamp:(double)a0;
- (void)heartBeat:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;

@end
