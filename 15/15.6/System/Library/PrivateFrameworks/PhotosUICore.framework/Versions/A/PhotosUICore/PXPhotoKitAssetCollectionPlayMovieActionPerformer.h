@interface PXPhotoKitAssetCollectionPlayMovieActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)_systemImageName;
+ (char)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (char)shouldDisplayTitleOfAssetCollection:(id)a0;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
