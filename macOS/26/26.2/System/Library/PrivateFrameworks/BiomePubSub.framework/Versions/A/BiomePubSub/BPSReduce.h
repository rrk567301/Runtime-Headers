@protocol BPSPublisher;

@interface BPSReduce : BMBookmarkablePublisher

@property (retain, nonatomic) id result;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)completed;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;
- (id)nextEvent;
- (void)reset;
- (BOOL)canStoreInternalStateInBookmark;
- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (id)init;
- (void)applyBookmark:(id)a0;

@end
