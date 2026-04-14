@protocol BPSPublisher, BPSSubscriber;

@interface BPSFlatMap : BMBookmarkablePublisher

@property (retain, nonatomic) id<BPSPublisher> currentPublisher;
@property (retain, nonatomic) id currentEvent;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;
@property (readonly, nonatomic) long long maxPublishers;
@property (readonly, nonatomic) id /* block */ transform;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)applyBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (id)validateBookmark:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (id)upstreamPublishers;
- (void)reset;
- (id)initWithUpstream:(id)a0 maxPublishers:(long long)a1 transform:(id /* block */)a2;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)bookmark;

@end
