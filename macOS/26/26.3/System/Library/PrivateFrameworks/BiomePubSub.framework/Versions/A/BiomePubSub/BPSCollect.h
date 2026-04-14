@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSCollect : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)nextEvent;
- (id)upstreamPublishers;
- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)validateBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (id)initWithUpstream:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
