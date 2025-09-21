@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface _CATArbitratorRegistrationEntry : NSObject {
    id mResource;
    unsigned long long mMaxConcurrentCount;
    NSMutableArray *mPendingWaits;
    NSObject<OS_dispatch_source> *mPendingWaitsSource;
    NSObject<OS_dispatch_queue> *mPendingWaitsQueue;
}

@property (readonly, nonatomic) unsigned long long currentCount;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithResource:(id)a0 maxConcurrentCount:(unsigned long long)a1;
- (id)makeResourceProxyIfPossible:(char)a0;
- (id)makeResourceProxyIfPossibleWithoutLocking:(char)a0;
- (void)pendingWaitsNeedServicing;
- (void)resourceProxyDidInvalidate:(id)a0;
- (void)servicePendingWaitTokens;
- (id)waitForResourceWithExclusive:(char)a0 group:(id)a1;

@end
