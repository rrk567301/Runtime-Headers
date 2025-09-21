@interface PXPhotoKitDeleteAssetActionPerformer : PXPhotoKitDestructiveActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)a0;

- (id)actionType;
- (long long)destructivePhotosAction;

@end
