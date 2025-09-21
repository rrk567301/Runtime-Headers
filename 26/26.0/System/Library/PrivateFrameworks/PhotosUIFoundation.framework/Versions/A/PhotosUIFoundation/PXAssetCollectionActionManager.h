@class PXPhotosEnvironmentReference, PXAssetReference, PXAssetsDataSourceManager, NSDictionary, PXAssetCollectionReference;
@protocol PXDisplayAssetFetchResult;

@interface PXAssetCollectionActionManager : PXActionManager {
    PXAssetCollectionReference *_initialAssetCollectionReference;
    NSDictionary *_assetCollectionActionTypeByGenericType;
}

@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (retain, nonatomic) id<PXDisplayAssetFetchResult> assetsFetchResult;
@property (retain, nonatomic) PXPhotosEnvironmentReference *photosEnvironmentReference;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;

- (id)init;
- (id)systemImageNameForActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)actionTypeForGenericType:(id)a0;
- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)initWithAssetCollectionReference:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1 assetCollectionReference:(id)a2;
- (id)systemImageNameForActionType:(id)a0 assetCollectionReference:(id)a1;

@end
