@class BPSCorrelateOrderedMerge, BPSCorrelateHandler;
@protocol BPSPublisher;

@interface BPSCorrelate : BMBookmarkablePublisher {
    BPSCorrelateOrderedMerge *_merger;
}

@property (readonly, nonatomic) id<BPSPublisher> prior;
@property (readonly, nonatomic) id<BPSPublisher> current;
@property (readonly, nonatomic) BPSCorrelateHandler *correlateHandler;

+ (id)new;
+ (id)correlatePublisherChainWithPrior:(id)a0 current:(id)a1 comparator:(id /* block */)a2 correlateHandler:(id)a3;
+ (long long)correlateSourceForIndex:(long long)a0;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (void)subscribe:(id)a0;
- (id)bookmarkableUpstreams;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPrior:(id)a0 current:(id)a1 comparator:(id /* block */)a2 updatedInitialContext:(id)a3 correlateHandler:(id)a4;
- (id)initWithPrior:(id)a0 current:(id)a1 comparator:(id /* block */)a2 correlateHandler:(id)a3;

@end
