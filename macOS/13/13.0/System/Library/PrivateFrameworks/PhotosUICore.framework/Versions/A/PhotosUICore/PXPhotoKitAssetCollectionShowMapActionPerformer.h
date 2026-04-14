@interface PXPhotoKitAssetCollectionShowMapActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (BOOL)canPerformActionType:(id)a0 onAssetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)_effectiveAssetsFetchResultWithAssetsFetchResult:(id)a0 assetCollectionReference:(id)a1 dataSource:(id)a2;

- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
