@class NSArray;

@interface BPSCorrelateOrderedMerge : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)bookmarkableUpstreams;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)init;
- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;

@end
