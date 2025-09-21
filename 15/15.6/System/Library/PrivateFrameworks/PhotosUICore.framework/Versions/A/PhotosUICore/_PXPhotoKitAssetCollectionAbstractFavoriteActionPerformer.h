@interface _PXPhotoKitAssetCollectionAbstractFavoriteActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (char)_targetFavoriteStateForAssetCollectionReference:(id)a0;
+ (char)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;

@end
