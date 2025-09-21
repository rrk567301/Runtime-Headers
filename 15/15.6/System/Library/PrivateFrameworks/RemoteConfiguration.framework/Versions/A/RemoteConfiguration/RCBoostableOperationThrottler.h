@class RCUnfairLock, NSObject;
@protocol OS_dispatch_queue, RCOperationThrottlerDelegate;

@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler>

@property (weak, nonatomic) id<RCOperationThrottlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (nonatomic) char workPending;
@property (readonly, nonatomic) RCUnfairLock *workPendingLock;
@property char suspended;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)a0;
- (void)tickleWithQualityOfService:(long long)a0;
- (void)tickleWithQualityOfService:(long long)a0 completion:(id /* block */)a1;

@end
