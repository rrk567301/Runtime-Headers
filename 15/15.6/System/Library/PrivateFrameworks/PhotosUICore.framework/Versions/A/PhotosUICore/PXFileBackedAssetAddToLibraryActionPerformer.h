@interface PXFileBackedAssetAddToLibraryActionPerformer : PXFileBackedAssetActionPerformer

+ (char)canPerformOnImplicitSelection;
+ (char)canPerformWithSelectionSnapshot:(id)a0;

- (void)performUserInteractionTask;
- (void)_completeSaveWithSuccess:(char)a0 error:(id)a1;

@end
