@interface PXPhotoKitAssetCollectionRenameActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)_reallyPerformUserInteractionTask;
- (void)_handleRenameConfirmedWithTextFields:(id)a0;
- (id)_displayableSingleLineTextForTitle:(id)a0;

@end
