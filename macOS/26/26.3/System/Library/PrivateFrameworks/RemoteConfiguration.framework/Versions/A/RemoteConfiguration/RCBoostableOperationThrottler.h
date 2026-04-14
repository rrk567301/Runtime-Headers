@class RCUnfairLock, NSObject;
@protocol OS_dispatch_queue, RCOperationThrottlerDelegate;

@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler>

@property (weak, nonatomic) id<RCOperationThrottlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (nonatomic) BOOL workPending;
@property (readonly, nonatomic) RCUnfairLock *workPendingLock;
@property BOOL suspended;

- (void)tickleWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void)tickleWithQualityOfService:(long long)a0;
- (id)init;
- (void)tickle;
- (void).cxx_destruct;
- (void)tickleWithQualityOfService:(long long)a0 completion:(id /* block */)a1;

@end
