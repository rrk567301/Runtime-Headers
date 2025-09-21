@interface PXAddAssetsToSharedCollectionAction : PXAddAssetsToAssetCollectionAction

- (void)performUndo:(id /* block */)a0;
- (void)_addAssets:(id)a0 completionHandler:(id /* block */)a1;
- (id)actionNameLocalizationKey;
- (void)performRedo:(id /* block */)a0;

@end
