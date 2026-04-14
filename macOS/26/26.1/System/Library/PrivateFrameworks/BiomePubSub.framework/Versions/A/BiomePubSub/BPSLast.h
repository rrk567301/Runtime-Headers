@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (retain, nonatomic) id lastEvent;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (void)applyBookmark:(id)a0;
- (id)initWithUpstream:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)reset;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)bookmark;
- (id)init;

@end
