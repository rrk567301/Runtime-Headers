@interface PXPhotoKitAssetCollectionDeleteMemoryActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (void)_promptDeleteMemoryConfirmationWithCompletionHandler:(id /* block */)a0;

@end
