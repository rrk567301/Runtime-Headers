@protocol BPSPublisher;

@interface BPSMerge : BMBookmarkablePublisher

@property (nonatomic) BOOL nextIsB;
@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)validateBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithA:(id)a0 b:(id)a1;

@end
