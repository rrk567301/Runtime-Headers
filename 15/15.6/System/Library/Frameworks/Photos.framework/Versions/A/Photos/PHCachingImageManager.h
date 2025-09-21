@class PHImageCache, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PHCachingImageManager : PHImageManager <PHImageCacheDelegate> {
    NSMutableSet *_cachingRequestIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachingLock;
    PHImageCache *_imageCache;
    char _imageCacheCommitScheduled;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_memoryEventSource;
}

@property (nonatomic) char allowsCachingHighQualityImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_chooseImageTableFormatForPreheatingFromFormats:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 returnBestTableRegardlessOfFit:(char)a3;

- (id)init;
- (void).cxx_destruct;
- (id)_cacheFailReasonFromInfo:(id)a0;
- (char)_cacheImageResult:(id)a0 forRequest:(id)a1;
- (char)_canPopulateCacheForResult:(id)a0;
- (void)_commitCacheChanges;
- (void)_handleCachingImageRequestResult:(id)a0 request:(id)a1 context:(id)a2;
- (void)_handleMemoryWarning;
- (id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:(id)a0;
- (void)_preheatImageTable:(id)a0 forAssets:(id)a1;
- (void)_scheduleOrCommitCacheChangesIfNeeded;
- (id)_tableFormatsForLibrary:(id)a0;
- (void)additionalWorkForImageRequestCompletedWithResult:(id)a0 request:(id)a1 context:(id)a2;
- (void)imageCache:(id)a0 didEvictCacheEntry:(id)a1;
- (void)mediaRequestContext:(id)a0 isQueryingCacheForRequest:(id)a1 didWait:(char *)a2 didFindImage:(char *)a3 resultHandler:(id /* block */)a4;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;

@end
