@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0;
- (id)bookmarkableUpstreams;

@end
