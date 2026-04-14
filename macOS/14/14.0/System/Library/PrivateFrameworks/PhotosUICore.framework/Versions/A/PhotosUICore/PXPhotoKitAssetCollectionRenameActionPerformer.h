@interface PXPhotoKitAssetCollectionRenameActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (id)_displayableSingleLineTextForTitle:(id)a0;
- (void)_reallyPerformUserInteractionTask;

@end
