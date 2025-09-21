@interface PXPhotoKitRemoveAssetActionPerformer : PXPhotoKitAssetActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;

- (id)actionType;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
