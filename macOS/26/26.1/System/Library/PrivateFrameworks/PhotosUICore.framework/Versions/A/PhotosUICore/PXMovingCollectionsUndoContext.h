@class NSMutableDictionary;
@protocol PXFastEnumeration;

@interface PXMovingCollectionsUndoContext : NSObject {
    NSMutableDictionary *_storedParentCollectionFetchResults;
    NSMutableDictionary *_parentCollectionChildInfos;
}

@property (readonly, copy, nonatomic) id<PXFastEnumeration> collections;

+ (id)makeFetchOptionsWithCollectionList:(id)a0;
+ (id)parentCollectionListsForCollections:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCollections:(id)a0;
- (void)enumerateCollectionListsUsingBlock:(id /* block */)a0;
- (void)storeOriginalParentCollectionListFetchResults;

@end
