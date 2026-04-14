@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSCollect : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)validateBookmark:(id)a0;
- (BOOL)completed;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)upstreamPublishers;
- (id)nextEvent;
- (id)bookmarkableUpstreams;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithUpstream:(id)a0;

@end
