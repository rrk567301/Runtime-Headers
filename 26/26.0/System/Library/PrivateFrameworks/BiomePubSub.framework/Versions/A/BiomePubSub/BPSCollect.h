@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSCollect : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)initWithUpstream:(id)a0;
- (void).cxx_destruct;

@end
