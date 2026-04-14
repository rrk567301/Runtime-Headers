@class NSString, PXPhotoKitAssetCollectionActionManager;

@interface PXSharedLibrarySharingSuggestionsFeedActionPerformer : NSObject <PXFeedActionPerformer> {
    PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1 fromViewController:(id)a2;
- (BOOL)navigateToObjectReference:(id)a0 originalSource:(id)a1 fromViewController:(id)a2 animated:(BOOL)a3 willPresentHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)_configureCommonOptions:(id)a0;
- (id)createSeeAllViewControllerForPhotoLibrary:(id)a0;
- (id)_photosViewConfigurationForSuggestion:(id)a0;

@end
