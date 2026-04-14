@protocol BPSPublisher;

@interface BPSReduce : BMBookmarkablePublisher

@property (retain, nonatomic) id result;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (void)applyBookmark:(id)a0;
- (BOOL)completed;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (id)upstreamPublishers;
- (void)reset;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)bookmark;
- (id)init;

@end
