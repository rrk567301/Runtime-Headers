@class NSMutableArray;
@protocol BPSSubscriber;

@interface _BPSAbstractCombineLatest : BMBookmarkableSubscription <BMBookmarkableSubscription> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (nonatomic) unsigned long long upstreamCount;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (nonatomic) char recursion;
@property (nonatomic) char finished;
@property (nonatomic) char errored;
@property (nonatomic) char cancelled;
@property (nonatomic) long long demand;
@property (nonatomic) unsigned long long finishCount;

- (void).cxx_destruct;
- (void)cancel;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;
- (id)convertValues:(id)a0;
- (id)initWithDownstream:(id)a0 upstreamCount:(unsigned long long)a1;
- (void)receiveCompletion:(id)a0 atIndex:(unsigned long long)a1;
- (long long)receiveInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)receiveSubscription:(id)a0 atIndex:(unsigned long long)a1;

@end
