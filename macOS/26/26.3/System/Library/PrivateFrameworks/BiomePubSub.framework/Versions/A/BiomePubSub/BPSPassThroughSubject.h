@class BPSSubscriberList, BPSCompletion, BPSSubscription, NSString, NSMutableArray;
@protocol BPSSubscriber;

@interface BPSPassThroughSubject : BMBookmarkablePublisher <BPSSubject, BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *upstreamSubscriptions;
@property (nonatomic) BOOL hasAnyDownstreamDemand;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) BPSCompletion *completion;
@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (retain, nonatomic) BPSSubscription *sub;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;
@property (nonatomic) BOOL complete;
@property (retain, nonatomic) NSMutableArray *nextEvents;
@property (readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } rlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)sendEvent:(id)a0;
- (id)subscription;
- (BOOL)canStoreInternalStateInBookmark;
- (void)cancel;
- (id)nextEvent;
- (BOOL)completed;
- (void)sendSubscription:(id)a0;
- (void)disassociate:(long long)a0;
- (void)subscribe:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (long long)receiveInput:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)receiveCompletion:(id)a0;
- (id)bookmarkableUpstreams;
- (void)applyBookmark:(id)a0;
- (void)sendCompletion:(id)a0;
- (id)bookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)init;
- (void)receiveSubscription:(id)a0;
- (void).cxx_destruct;
- (void)acknowledgeDownstreamDemand;
- (void)dealloc;
- (void)reset;
- (void)sendCompletion;
- (void)sendValue:(id)a0;

@end
