@protocol BPSPublisher;

@interface BPSMap : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (copy, nonatomic) id /* block */ transform;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (id)init;
- (id)initWithUpstream:(id)a0 transform:(id /* block */)a1;
- (void).cxx_destruct;

@end
