@interface PXPhotoKitAssetCollectionDeleteActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (char)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)_promptDeleteConfirmationWithCompletionHandler:(id /* block */)a0;

@end
