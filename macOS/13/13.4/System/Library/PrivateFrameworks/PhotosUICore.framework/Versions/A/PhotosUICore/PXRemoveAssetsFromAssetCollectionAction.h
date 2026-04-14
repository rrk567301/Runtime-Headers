@class NSDictionary;

@interface PXRemoveAssetsFromAssetCollectionAction : PXAssetsSelectionAction {
    NSDictionary *_removedAssetIdentifiers;
    NSDictionary *_removedAssetIndexes;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;

@end
