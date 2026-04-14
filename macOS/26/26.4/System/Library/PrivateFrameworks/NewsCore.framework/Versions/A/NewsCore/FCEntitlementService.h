@class NFMutexLock, NSMutableArray, NSObject;
@protocol OS_dispatch_source, FCCoreConfigurationManager;

@interface FCEntitlementService : NSObject

@property (nonatomic) BOOL requestInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *entitlementRequestTimer;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) NFMutexLock *accessLock;
@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;

- (id)initWithConfigurationManager:(id)a0;
- (void)performEntitlementWithIgnoreCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)_performEntitlementWithIgnoreCache:(BOOL)a0 requestTimeoutDuration:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_startTimerWithTimeoutDuration:(double)a0;
- (void)_clearTimer;

@end
