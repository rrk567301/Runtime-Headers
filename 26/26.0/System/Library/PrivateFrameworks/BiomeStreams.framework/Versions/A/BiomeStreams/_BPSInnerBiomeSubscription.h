@class NSString, BMStoreEnumerator, BMAccessClient;
@protocol BPSSubscriber;

@interface _BPSInnerBiomeSubscription : BMBookmarkableSubscription {
    BMStoreEnumerator *_enumerator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BPSSubscriber> _downstream;
    long long _pendingDemand;
    BOOL _recursion;
    NSString *_streamId;
    BMAccessClient *_accessClient;
}

- (id)newBookmark;
- (void)cancel;
- (void)requestDemand:(long long)a0;
- (id)initWithStreamEnumerator:(id)a0 downstream:(id)a1 streamId:(id)a2 accessClient:(id)a3;
- (id)upstreamSubscriptions;
- (void).cxx_destruct;

@end
