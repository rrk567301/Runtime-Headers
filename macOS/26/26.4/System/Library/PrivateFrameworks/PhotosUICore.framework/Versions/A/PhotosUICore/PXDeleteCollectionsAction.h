@class NSArray;
@protocol PXFastEnumeration;

@interface PXDeleteCollectionsAction : PXPhotosAction {
    NSArray *_assetCollections;
    NSArray *_sharedCollections;
    NSArray *_collectionLists;
    id<PXFastEnumeration> _collections;
}

- (id)collections;
- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (id)initWithCollections:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (void)performRedo:(id /* block */)a0;

@end
