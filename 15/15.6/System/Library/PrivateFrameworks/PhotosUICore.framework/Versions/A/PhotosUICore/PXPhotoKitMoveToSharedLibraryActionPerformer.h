@class NSArray;

@interface PXPhotoKitMoveToSharedLibraryActionPerformer : PXPhotoKitAssetActionPerformer {
    NSArray *_assetsToProcess;
}

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (char)_canPerformWithHasSharedLibraryOrPreview:(char)a0 isExitingSharedLibrary:(char)a1 collectionAllowsMoveToSharedLibrary:(char)a2 isUnsavedSyndicatedAsset:(char)a3 canMoveAssetsToSharedLibrary:(char)a4;
+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (char)canPerformOnSubsetOfSelection;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (char)canPresentAlertInBackgroudState;
- (void)_moveAssetsToSharedLibraryWithCompletionHandler:(id /* block */)a0;
- (void)_presentFailureWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)performBackgroundTask;

@end
