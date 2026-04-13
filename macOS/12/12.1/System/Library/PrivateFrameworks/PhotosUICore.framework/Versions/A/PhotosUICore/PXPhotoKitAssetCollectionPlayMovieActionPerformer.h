@interface PXPhotoKitAssetCollectionPlayMovieActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)_systemImageName;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;

- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
