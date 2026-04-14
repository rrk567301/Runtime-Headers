@class NSArray, NSMutableArray, BMIndirectHeap;

@interface BPSOrderedMerge : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *upstreamStates;
@property (retain, nonatomic) BMIndirectHeap *heap;
@property (retain) id mostRecentEvent;
@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (void)applyBookmark:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)isOrderedSameForEvents:(id)a0 second:(id)a1;
- (BOOL)canStoreInternalStateInBookmark;
- (id)upstreamPublishers;
- (void)reset;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;
- (id)bookmark;
- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;
- (id)init;

@end
