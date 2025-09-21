@interface PXPhotoKitTrashAssetActionPerformer : PXPhotoKitDestructiveActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (char)canPerformOnSubsetOfSelection;
+ (char)isActionDestructive;

- (id)actionType;
- (long long)destructivePhotosAction;

@end
