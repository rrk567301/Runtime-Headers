@protocol BPSPublisher;

@interface BPSReduce : BMBookmarkablePublisher

@property (retain, nonatomic) id result;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;
- (id)init;
- (void)applyBookmark:(id)a0;
- (void).cxx_destruct;

@end
