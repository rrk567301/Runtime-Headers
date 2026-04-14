@interface PXFileBackedAssetActionPerformer : PXAssetActionPerformer

+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithActionManager:(id)a0 error:(id *)a1;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0;

@end
