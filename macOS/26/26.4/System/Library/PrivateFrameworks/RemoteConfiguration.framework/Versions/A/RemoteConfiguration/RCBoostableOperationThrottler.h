@class RCUnfairLock, NSObject;
@protocol OS_dispatch_queue, RCOperationThrottlerDelegate;

@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler>

@property (weak, nonatomic) id<RCOperationThrottlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (nonatomic) BOOL workPending;
@property (readonly, nonatomic) RCUnfairLock *workPendingLock;
@property BOOL suspended;

- (id)initWithDelegate:(id)a0;
- (void)tickleWithCompletion:(id /* block */)a0;
- (void)tickle;
- (void)tickleWithQualityOfService:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)tickleWithQualityOfService:(long long)a0 completion:(id /* block */)a1;

@end
