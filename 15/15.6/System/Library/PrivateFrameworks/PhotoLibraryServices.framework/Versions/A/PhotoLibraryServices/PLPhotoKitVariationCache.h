@class NSURL, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PLPhotoKitVariationCache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSCache *_memoryCache;
}

@property (readonly) NSURL *cacheURL;

- (void).cxx_destruct;
- (unsigned long long)purgeAll;
- (id)gatingResultForVariationType:(long long)a0 assetIdentifier:(id)a1;
- (id)initWithPathManager:(id)a0;
- (id)_fileURLWithIdentifier:(id)a0 sourceType:(long long)a1 pathExtension:(id)a2;
- (char)_performChangesForAssetIdentifier:(id)a0 sourceType:(long long)a1 changesBlock:(id /* block */)a2;
- (id)_readInfoForURL:(id)a0;
- (char)_removeCachesForURL:(id)a0;
- (void)_saveToMemoryCache:(id)a0 forFileURL:(id)a1 fileSize:(unsigned long long)a2;
- (char)_writeInfo:(id)a0 atURL:(id)a1;
- (id)analysisResultForAssetIdentifier:(id)a0;
- (id)analysisResultForAssetIdentifier:(id)a0 sourceType:(long long)a1;
- (char)deleteCacheForAssetIdentifier:(id)a0;
- (char)deleteCacheForAssetIdentifier:(id)a0 sourceType:(long long)a1;
- (unsigned long long)evictIfNeeded;
- (id)gatingResultForVariationType:(long long)a0 assetIdentifier:(id)a1 sourceType:(long long)a2;
- (id)initWithCacheURL:(id)a0;
- (id)portraitEffectSettingsForAssetIdentifier:(id)a0;
- (id)portraitEffectSettingsForAssetIdentifier:(id)a0 sourceType:(long long)a1;
- (void)saveAnalysisResult:(id)a0 assetIdentifier:(id)a1;
- (void)saveAnalysisResult:(id)a0 assetIdentifier:(id)a1 sourceType:(long long)a2;
- (void)saveGatingResult:(id)a0 forVariationType:(long long)a1 assetIdentifier:(id)a2;
- (void)saveGatingResult:(id)a0 forVariationType:(long long)a1 assetIdentifier:(id)a2 sourceType:(long long)a3;
- (void)savePortraitEffectSettings:(id)a0 assetIdentifier:(id)a1;
- (void)savePortraitEffectSettings:(id)a0 sourceType:(long long)a1 assetIdentifier:(id)a2;

@end
