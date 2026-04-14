@class NSString, NSArray, PXSectionedObjectReference, PHPerson, PXPhotosDataSource, NSDictionary, PXPhotoKitAssetsDataSourceManager, PHFetchResult, PXPhotoKitImportStatusManager;
@protocol PXRadarConfigurationProvider;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer

@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceSnapshot;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PXSectionedObjectReference *objectReference;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSDictionary *assetsByAssetCollection;
@property (nonatomic) BOOL shouldSkipUserConfirmation;
@property (retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager;
@property (retain, nonatomic) NSString *importSessionID;
@property (nonatomic) unsigned long long presentationSource;
@property (retain, nonatomic) id<PXRadarConfigurationProvider> radarConfigurationProvider;

+ (BOOL)canPerformWithActionManager:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)a0;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (id)createIndeterminateProgressToastForActionPerformer:(id)a0 title:(id)a1 description:(id)a2;
+ (BOOL)shouldEnableWithActionManager:(id)a0;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)a0;
- (id)createPerformerWithClass:(Class)a0 actionType:(id)a1;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (void)stopExcludingAssetsFromDataSource;

@end
