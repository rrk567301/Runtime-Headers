@interface PXPhotoKitExpungeAssetActionPerformer : PXPhotoKitDestructiveActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;

- (id)actionType;
- (long long)destructivePhotosAction;

@end
