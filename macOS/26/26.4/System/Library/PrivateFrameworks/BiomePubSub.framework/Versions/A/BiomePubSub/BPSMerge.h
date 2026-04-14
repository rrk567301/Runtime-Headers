@protocol BPSPublisher;

@interface BPSMerge : BMBookmarkablePublisher

@property (nonatomic) BOOL nextIsB;
@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)validateBookmark:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)upstreamPublishers;
- (id)nextEvent;
- (id)bookmarkableUpstreams;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (id)initWithA:(id)a0 b:(id)a1;

@end
