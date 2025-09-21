@class BPSFuture;
@protocol BPSSubscriber;

@interface _BPSInnerFutureConduit : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (retain, nonatomic) BPSFuture *parent;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) char hasAnyDemand;
@property (nonatomic) long long identifity;
@property (nonatomic) char released;

- (void).cxx_destruct;
- (void)cancel;
- (void)assignIdentity:(long long)a0;
- (void)fulfill:(id)a0;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;
- (id)initWithParent:(id)a0 downstream:(id)a1;

@end
