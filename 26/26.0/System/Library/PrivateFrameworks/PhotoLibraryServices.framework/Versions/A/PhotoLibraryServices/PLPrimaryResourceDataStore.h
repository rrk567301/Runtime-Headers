@class NSString, PAImageConversionServiceClient, PLPhotoLibraryPathManager, PAVideoConversionServiceClient, NSMutableDictionary, NSDictionary, PLPrimaryResourceDataStoreKeyHelper, PLCloudPhotoLibraryManager;

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    NSMutableDictionary *_lock_makeAvailableProgressByTaskIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

@property (retain, nonatomic) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper;
@property (retain, nonatomic) NSDictionary *keyHelperByBundleScope;
@property (readonly, getter=_cplManager) PLCloudPhotoLibraryManager *cplManager;
@property (nonatomic) unsigned int masterThumbRecipeID;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (id)supportedRecipes;
+ (id)contextualVideoThumbnailIdentifierFromFileURL:(id)a0;
+ (unsigned int)currentDeviceMasterThumbRecipeID;
+ (BOOL)bailOutOfVideoFinalizationIfNeededForAsset:(id)a0 taskIdentifier:(id)a1 error:(id *)a2;
+ (id)utiForContextualVideoThumbnail;
+ (unsigned short)storeClassID;

- (id)_videoConversionServiceClient;
- (id)_expectedFileURLForMasterThumbnailForAsset:(id)a0;
- (id)initWithPathManager:(id)a0;
- (id)_imageConversionServiceClient;
- (void)_lock_transitionTaskToInflightWithIdentifier:(id)a0;
- (void)dealloc;
- (id)descriptionForSubtype:(long long)a0;
- (BOOL)supportsTimeRange;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (id)resourceURLForKey:(id)a0 assetID:(id)a1;
- (BOOL)canStreamResource:(id)a0;
- (id)keyFromKeyStruct:(const void *)a0;
- (id)_makeResourceLocallyAvailable:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_verifyResourceLocalAvailability:(id)a0 localResourceFileURL:(id *)a1 resourceReapirNeeded:(long long *)a2;
- (id)keyHelperForBundleScope:(unsigned short)a0;
- (id)readonlyFileURLForContextualVideoThumbnailIdentifier:(id)a0 asset:(id)a1;
- (id)expectedFileURLForResource:(id)a0 asset:(id)a1;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 streamingHints:(id)a4 inContext:(id)a5 clientBundleID:(id)a6 completion:(id /* block */)a7;
- (id)writableFileURLForContextualVideoThumbnailIdentifier:(id)a0 asset:(id)a1;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)virtualResourcesForAsset:(id)a0 options:(unsigned short)a1;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (id)_contextualVideoThumbnailResourcesForAsset:(id)a0;
- (BOOL)isCPLSyncableLibraryStore;
- (id)_contextualVideoThumbnailResourceForAsset:(id)a0 atURL:(id)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)a0 givenFilePath:(id)a1;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 options:(id)a2 error:(id *)a3 resultingResource:(id *)a4;
- (id)name;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (void)_cancelAvailabilityRequestWithTaskIdentifier:(id)a0;
- (BOOL)_lock_taskIsPendingDownloadWithIdentifier:(id)a0;
- (id)_cplResourceIfDownloadIsAvailableForResource:(id)a0 asset:(id)a1 options:(id)a2;
- (BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (id)getClosestResourceMatchingCPLResourceType:(unsigned long long)a0 version:(unsigned int)a1 asset:(id)a2;
- (void)_downloadCPLResource:(id)a0 options:(id)a1 taskDidBeginHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)canStoreExternalResource:(id)a0;
- (id)_fileURLForContextualVideoThumbnailIdentifier:(id)a0 asset:(id)a1 forWriting:(BOOL)a2;
- (id)_newProgressForTaskWithIdentifier:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)_masterThumbnailVirtualResourceForAsset:(id)a0;

@end
