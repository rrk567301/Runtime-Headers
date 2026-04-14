@class NSString, PHAssetCollection;

@interface PXStoryPPTConfiguration : NSObject

@property (readonly, nonatomic) NSString *contentDescription;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) long long collectionType;
@property (readonly, nonatomic) unsigned long long assetType;
@property (nonatomic) unsigned long long assetCount;
@property (nonatomic) double preferredStoryDuration;
@property (nonatomic) unsigned long long subpreset;
@property (readonly, nonatomic) NSString *name;

+ (id)configurationsForPreset:(unsigned long long)a0 subpreset:(unsigned long long)a1 testOptions:(id)a2;
+ (void)_fetchLatestMemoriesWithMaximumCount:(long long)a0 resultHandler:(id /* block */)a1;
+ (void)_configureConfiguration:(id)a0 forSubpreset:(unsigned long long)a1;
+ (void)_requestPhotoLibraryWithResultHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreset:(unsigned long long)a0;
- (void)requestStoryConfigurationWithOptions:(id)a0 resultHandler:(id /* block */)a1;
- (id)initWithAssetCollection:(id)a0 name:(id)a1;
- (id)initWithLatestCollectionOfType:(long long)a0;
- (id)initWithAssetType:(unsigned long long)a0 count:(unsigned long long)a1;
- (id)_stringFromAssetCount:(unsigned long long)a0;
- (id)_stringFromAssetType:(unsigned long long)a0;
- (void)_completeConfigurationRequestWithAssetCollection:(id)a0 resultHandler:(id /* block */)a1;
- (void)_fetchLatestAssetCollectionOfType:(long long)a0 resultHandler:(id /* block */)a1;
- (void)_createSyntheticAssetsWithResultHandler:(id /* block */)a0;
- (void)_fetchAssetsWithResultHandler:(id /* block */)a0;
- (void)_performPhotoLibraryFetch:(id /* block */)a0;
- (void)_completeConfigurationRequestWithFetchResult:(id)a0 resultHandler:(id /* block */)a1;
- (void)_completeConfigurationRequestWithStoryConfiguration:(id)a0 resultHandler:(id /* block */)a1;

@end
