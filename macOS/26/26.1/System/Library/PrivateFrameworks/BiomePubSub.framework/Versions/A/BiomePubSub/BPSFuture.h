@class BPSFutureResult, BPSSubscriberList;
@protocol BPSSubscriber;

@interface BPSFuture : BPSPublisher {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<BPSSubscriber> subscriber;
@property (nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } publisherLock;
@property (nonatomic) BOOL sentResult;
@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (retain, nonatomic) BPSFutureResult *result;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (void)disassociate:(long long)a0;
- (id)upstreamPublishers;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithAttemptToFulfill:(id /* block */)a0;

@end
