@class BPSCompletion, NSString, BPSSubscriptionStatus, NSMutableArray;
@protocol BPSSubscriber;

@interface BPSBufferInner : BMBookmarkableSubscription <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long prefetch;
@property (nonatomic) unsigned long long whenFull;
@property (nonatomic) long long downstreamDemand;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (nonatomic) char recursion;
@property (retain, nonatomic) BPSCompletion *terminal;
@property (retain, nonatomic) NSMutableArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)newBookmark;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;
- (long long)_drain;
- (id)_lockedPopWithDemand:(long long)a0;
- (id)initWithDownstream:(id)a0 size:(unsigned long long)a1 prefetch:(unsigned long long)a2 whenFull:(unsigned long long)a3;

@end
