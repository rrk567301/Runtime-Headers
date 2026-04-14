@protocol BPSPublisher, BPSSubscriber;

@interface BPSFlatMap : BMBookmarkablePublisher

@property (retain, nonatomic) id<BPSPublisher> currentPublisher;
@property (retain, nonatomic) id currentEvent;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;
@property (readonly, nonatomic) long long maxPublishers;
@property (readonly, nonatomic) id /* block */ transform;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)initWithUpstream:(id)a0 maxPublishers:(long long)a1 transform:(id /* block */)a2;
- (void).cxx_destruct;

@end
