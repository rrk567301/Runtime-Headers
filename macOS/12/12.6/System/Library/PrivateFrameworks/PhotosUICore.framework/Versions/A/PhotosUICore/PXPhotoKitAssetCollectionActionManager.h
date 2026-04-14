@class PHFetchResult, NSDictionary, PXAssetReference, PXAssetCollectionActionPerformer, PXAssetsDataSource, NSString;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXPhotoKitAssetCollectionActionPerformerInput>

@property (readonly, nonatomic) NSDictionary *_performerClassesByType;
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)supportsActionType:(id)a0;
- (id)initWithAssetCollectionReference:(id)a0 displayTitleInfo:(id)a1;
- (Class)_firstPossiblePerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (Class)_firstPossiblePerformerForActionType:(id)a0 assetCollectionReference:(id)a1 requireThatPerformerCanPerformAction:(BOOL)a2;
- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)actionPerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1 assetCollectionReference:(id)a2;
- (id)systemImageNameForActionType:(id)a0 assetCollectionReference:(id)a1;

@end
