@class PHSocialGroup, PHFetchResult, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_fetchingQueue;
}

@property (readonly, nonatomic) PHFetchResult *keyFaceAssetFetchResult;
@property (readonly, nonatomic) PHSocialGroup *socialGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 viewSourceOrigin:(long long)a2;
+ (id)photosDetailsContextForAsset:(id)a0 parentContext:(id)a1;
+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 keyAssets:(id)a2 enableCuration:(char)a3 enableKeyAssets:(char)a4 viewSourceOrigin:(long long)a5;

- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (id)_displayTitleForPeople:(id)a0;
- (id)_fetchKeyFaceAssetFetchResultFromPerson:(id)a0;
- (void)_updateKeyFaceAssetFetchResult;
- (id)initWithPeople:(id)a0 orSocialGroup:(id)a1 parentContext:(id)a2 assetCollectionsFetch:(id)a3 ignoreSharedLibraryFilters:(char)a4;
- (id)initWithPeople:(id)a0 parentContext:(id)a1;
- (id)initWithPeople:(id)a0 parentContext:(id)a1 ignoreSharedLibraryFilters:(char)a2;
- (id)initWithPhotosDataSource:(id)a0 displayTitleInfo:(id)a1 parentContext:(id)a2 keyAssetsFetchResult:(id)a3;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)setKeyFaceAssetFetchResult:(id)a0;
- (char)shouldUseKeyFace;

@end
