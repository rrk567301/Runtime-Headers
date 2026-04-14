@class PHFetchResult, PXAssetReference, NSString, PXAssetsDataSource;

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput>

@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActionType:(id)a0 onAssetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (id)_confirmationAlertTitleForBlacklistingAction:(id)a0 viewSpec:(id)a1;
- (void)_promptBlacklistingConfirmatonForUserAction:(id)a0 viewSpec:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
