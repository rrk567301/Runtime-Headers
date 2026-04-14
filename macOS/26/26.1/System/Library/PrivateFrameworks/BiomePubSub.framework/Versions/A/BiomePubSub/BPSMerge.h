@protocol BPSPublisher;

@interface BPSMerge : BMBookmarkablePublisher

@property (nonatomic) BOOL nextIsB;
@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (void)applyBookmark:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (id)upstreamPublishers;
- (void)reset;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)bookmark;
- (id)init;
- (id)initWithA:(id)a0 b:(id)a1;

@end
