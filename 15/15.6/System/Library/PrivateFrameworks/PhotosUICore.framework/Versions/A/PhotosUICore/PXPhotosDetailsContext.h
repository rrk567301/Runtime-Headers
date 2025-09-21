@class PHAsset, PXDisplayTitleInfo, NSString, PXPhotosDataSource, PXPhotosDetailsVisualLookupData, PXPhotosDetailsViewModel, PHAssetCollection, PHFetchResult, NSDictionary, NSCache;

@interface PXPhotosDetailsContext : PXObservable <PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver>

@property (class, readonly, nonatomic) NSCache *preheatedAssets;

@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo;
@property (readonly, weak, nonatomic) PXPhotosDetailsContext *parentContext;
@property (readonly, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (readonly, nonatomic) long long viewSourceOrigin;
@property (readonly, nonatomic) PXPhotosDetailsViewModel *viewModel;
@property (readonly, nonatomic) unsigned long long contextHierarchyDepth;
@property (readonly, nonatomic) PXPhotosDetailsVisualLookupData *visualLookupData;
@property (readonly, nonatomic) PHAssetCollection *containingAlbum;
@property (readonly, nonatomic) PHAsset *firstAsset;
@property (readonly, nonatomic) PHFetchResult *assetCollections;
@property (readonly, copy, nonatomic) NSDictionary *assetsByCollection;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, copy, nonatomic) NSString *titleFontName;
@property (readonly, nonatomic) char shouldShowMovieHeader;
@property (readonly, nonatomic) char hasLocation;
@property (readonly, nonatomic) char shouldShowHeaderTitle;
@property (readonly, nonatomic) char shouldUseKeyFace;
@property (readonly, nonatomic) char includeOthersInSocialGroupAssets;
@property (copy, nonatomic) id /* block */ unlockDeviceStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 viewSourceOrigin:(long long)a2;
+ (id)_assetFetchResultForAssets:(id)a0;
+ (id)_fetchPropertySets;
+ (id)_preheatedFetchResultForAsset:(id)a0;
+ (id)photosDetailsContextForAsset:(id)a0 parentContext:(id)a1;
+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 keyAssets:(id)a2 enableCuration:(char)a3 enableKeyAssets:(char)a4 useVerboseSmartDescription:(char)a5 viewSourceOrigin:(long long)a6;
+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 keyAssets:(id)a2 enableCuration:(char)a3 enableKeyAssets:(char)a4 useVerboseSmartDescription:(char)a5 viewSourceOrigin:(long long)a6 ignoreSharedLibraryFilters:(char)a7;
+ (id)photosDetailsContextForMemory:(id)a0;
+ (id)photosDetailsContextForMemory:(id)a0 enableCuration:(char)a1 enableKeyAssets:(char)a2;
+ (void)photosDetailsContextPreheatForAssets:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setLocalizedTitle:(id)a0;
- (void)setPeople:(id)a0;
- (void)setHasLocation:(char)a0;
- (void)setLocalizedSubtitle:(id)a0;
- (void)setViewModel:(id)a0;
- (void)setTitleFontName:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)mutableChangeObject;
- (void)_updatePropertiesDerivedFromDisplayTitleInfo;
- (void)_updatePropertiesDerivedFromPhotosDataSource;
- (id)initWithPhotosDataSource:(id)a0 displayTitleInfo:(id)a1 parentContext:(id)a2 keyAssetsFetchResult:(id)a3;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (void)setAssetCollections:(id)a0;
- (void)setAssetsByCollection:(id)a0;
- (void)setContainingAlbum:(id)a0;
- (void)setIncludeOthersInSocialGroupAssets:(char)a0;
- (void)setKeyAssetsFetchResult:(id)a0;
- (void)setPhotosDataSource:(id)a0;
- (void)setShouldShowMovieHeader:(char)a0;
- (void)setViewSourceOrigin:(long long)a0;
- (void)setVisualLookupData:(id)a0;
- (void)toggleIncludeOthersInSocialGroupAssets;

@end
