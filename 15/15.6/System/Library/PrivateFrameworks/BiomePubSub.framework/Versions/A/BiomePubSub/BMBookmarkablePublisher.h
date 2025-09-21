@class NSArray, NSString;

@interface BMBookmarkablePublisher : BPSPublisher <BMBookmarkablePublisher>

@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bookmarkablePublishersFromPublishers:(id)a0;
+ (char)isPipelineBookmarkable:(id)a0;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)bookmark;
- (id)filterWithIsIncluded:(id /* block */)a0;
- (id)flatMapWithTransform:(id /* block */)a0;
- (id)groupByKey:(id /* block */)a0;
- (id)mapWithTransform:(id /* block */)a0;
- (id)reduceWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)multicast;
- (id)last;
- (void)subscribe:(id)a0;
- (id)collect;
- (id)orderedMergeWithOther:(id)a0 comparator:(id /* block */)a1;
- (id)orderedMergeWithOthers:(id)a0 comparator:(id /* block */)a1;
- (id)reduce:(id)a0;
- (char)canStoreInternalStateInBookmark;
- (id)mergeWithOther:(id)a0;
- (void)applyBookmark:(id)a0;
- (void)applyBookmarkNode:(id)a0;
- (id)bookmarkNode;
- (char)canStorePassThroughValueInBookmark;
- (id)scanWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)validateBookmark:(id)a0;
- (id)validateBookmarkNode:(id)a0;
- (id)withBookmark:(id)a0;
- (id)bufferWithSize:(unsigned long long)a0 prefetch:(unsigned long long)a1 whenFull:(unsigned long long)a2;
- (id)correlateWithCurrent:(id)a0 comparator:(id /* block */)a1 correlateHandler:(id)a2;
- (id)mergeWithOthers:(id)a0;
- (id)multicastCreateSubject:(id /* block */)a0;
- (id)multicastSubject:(id)a0;

@end
