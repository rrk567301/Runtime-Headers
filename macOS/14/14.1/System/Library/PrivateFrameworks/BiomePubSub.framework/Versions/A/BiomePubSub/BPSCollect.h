@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSCollect : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void).cxx_destruct;
- (void)reset;
- (id)bookmark;
- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;

@end
