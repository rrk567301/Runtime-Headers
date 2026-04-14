@interface PXFileBackedAssetActionPerformer : PXAssetActionPerformer

+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithActionManager:(id)a0 error:(out id *)a1;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0;

@end
