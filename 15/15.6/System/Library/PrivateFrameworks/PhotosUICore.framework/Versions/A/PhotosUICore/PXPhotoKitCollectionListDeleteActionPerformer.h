@interface PXPhotoKitCollectionListDeleteActionPerformer : PXPhotoKitCollectionListActionPerformer

+ (char)canPerformOnCollectionList:(id)a0;

- (void)performUserInteractionTask;
- (void)_promptDeleteConfirmationWithCompletionHandler:(id /* block */)a0;

@end
