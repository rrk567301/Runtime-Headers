@interface PXPhotoKitRecoverAssetActionPerformer : PXPhotoKitDestructiveActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (char)canPerformOnImplicitSelectionInContainerCollection:(id)a0;
+ (char)canPerformOnSubsetOfSelection;
+ (char)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2;

- (long long)destructivePhotosAction;

@end
