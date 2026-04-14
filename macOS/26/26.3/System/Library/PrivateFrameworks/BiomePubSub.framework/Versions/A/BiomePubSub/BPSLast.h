@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (retain, nonatomic) id lastEvent;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)bookmarkableUpstreams;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (id)init;
- (id)initWithUpstream:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
