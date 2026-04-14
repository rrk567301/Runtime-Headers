@class NSDictionary, NSArray, PHAssetCollection;

@interface PXRemoveAssetsFromAssetCollectionAction : PXAssetsSelectionAction {
    NSDictionary *_removedAssetIdentifiers;
    NSDictionary *_removedAssetIndexes;
    NSArray *_assetsInput;
    PHAssetCollection *_collectionInput;
}

- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0 assetCollection:(id)a1;
- (id)actionNameLocalizationKey;

@end
