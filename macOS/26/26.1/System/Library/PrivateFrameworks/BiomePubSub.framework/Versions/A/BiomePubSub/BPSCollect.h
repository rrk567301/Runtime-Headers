@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSCollect : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)applyBookmark:(id)a0;
- (id)initWithUpstream:(id)a0;
- (BOOL)completed;
- (id)validateBookmark:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (id)upstreamPublishers;
- (void)reset;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)bookmark;

@end
