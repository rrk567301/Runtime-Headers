@class NSString, NSArray, PHPerson, PXSectionedObjectReference, NSDictionary, PXPhotosDataSource, PXPhotoKitAssetsDataSourceManager, PHFetchResult, PHSocialGroup, PXPhotoKitImportStatusManager;
@protocol PXRadarConfigurationProvider;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer

@property (class, readonly, nonatomic) BOOL providesCanPerformError;

@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceSnapshot;
@property (readonly, nonatomic) NSDictionary *dataSourceUserInfo;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PHSocialGroup *socialGroup;
@property (retain, nonatomic) PXSectionedObjectReference *objectReference;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSDictionary *assetsByAssetCollection;
@property (nonatomic) BOOL shouldSkipUserConfirmation;
@property (retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager;
@property (retain, nonatomic) NSString *importSessionID;
@property (nonatomic) unsigned long long presentationSource;
@property (retain, nonatomic) id<PXRadarConfigurationProvider> radarConfigurationProvider;
@property (nonatomic) BOOL supportsAirPlay;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithActionManager:(id)a0;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)_canPerformWithActionManager:(id)a0 error:(out id *)a1;
+ (BOOL)_canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2 error:(out id *)a3;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3 error:(out id *)a4;
+ (BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)a0;
+ (BOOL)canPerformWithActionManager:(id)a0 error:(out id *)a1;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2 error:(out id *)a3;
+ (BOOL)shouldEnableWithActionManager:(id)a0;

- (void).cxx_destruct;
- (void)instantlyExcludeAssetsFromDataSource;
- (id)_indexPathsInPhotosDataSource:(id)a0;
- (id)createPerformerWithClass:(Class)a0 actionType:(id)a1;
- (void)forceIncludeAssetsInDataSource;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;
- (void)stopExcludingAssetsFromDataSource;

@end
