@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (retain, nonatomic) id lastEvent;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (id)bookmark;
- (id)init;
- (void)applyBookmark:(id)a0;
- (id)initWithUpstream:(id)a0;
- (void).cxx_destruct;

@end
