@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSCollect : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) char returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void).cxx_destruct;
- (void)reset;
- (char)completed;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0;
- (id)nextEvent;
- (char)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;

@end
