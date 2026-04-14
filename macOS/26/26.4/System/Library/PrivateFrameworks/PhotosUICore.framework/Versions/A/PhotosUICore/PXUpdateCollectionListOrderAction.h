@class PHCollectionList, PHFetchResult;
@protocol PXFastEnumeration;

@interface PXUpdateCollectionListOrderAction : PXPhotosAction {
    PHFetchResult *_beforeFetchResult;
    PHFetchResult *_afterFetchResult;
}

@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly, nonatomic) id<PXFastEnumeration> orderedCollections;

+ (BOOL)canPerformOnCollection:(id)a0;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (BOOL)_canPerformUndo;
- (id)actionNameLocalizationKey;
- (id)initWithCollectionList:(id)a0 orderedCollections:(id)a1;
- (id)standardFetchOptions;

@end
