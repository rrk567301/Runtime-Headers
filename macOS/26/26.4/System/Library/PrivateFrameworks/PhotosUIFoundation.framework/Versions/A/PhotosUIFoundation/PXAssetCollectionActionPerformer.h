@class PXAssetReference, NSDictionary, PXAssetsDataSource, PXAssetCollectionReference;
@protocol PXDisplayAssetFetchResult, PXDisplayAssetCollection;

@interface PXAssetCollectionActionPerformer : PXActionPerformer

@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (retain, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (retain, nonatomic) id<PXDisplayAssetFetchResult> assetsFetchResult;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
