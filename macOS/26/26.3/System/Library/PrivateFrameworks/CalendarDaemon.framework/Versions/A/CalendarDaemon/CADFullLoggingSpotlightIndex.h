@class NSString;
@protocol CADSpotlightIndex;

@interface CADFullLoggingSpotlightIndex : NSObject <CADSpotlightIndex> {
    id<CADSpotlightIndex> _wrappedIndex;
}

@property (readonly, nonatomic) BOOL needsReindex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithIndex:(id)a0;
- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginIndexBatch;
- (void)endIndexBatchWithExpectedClientState:(id)a0 newClientState:(id)a1 completionHandler:(id /* block */)a2;

@end
