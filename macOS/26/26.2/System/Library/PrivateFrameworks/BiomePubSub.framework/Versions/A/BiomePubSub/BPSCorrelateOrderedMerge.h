@class NSArray;

@interface BPSCorrelateOrderedMerge : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)init;

@end
