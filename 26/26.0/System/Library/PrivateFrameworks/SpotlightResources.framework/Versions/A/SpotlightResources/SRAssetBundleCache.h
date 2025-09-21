@class NSMutableDictionary;

@interface SRAssetBundleCache : NSObject {
    NSMutableDictionary *_cache;
}

+ (id)sharedInstance;
+ (id)cacheFilePath;

- (id)init;
- (void).cxx_destruct;
- (id)dumpCache;
- (void)updateCacheWithResults:(id)a0 loading:(BOOL)a1;
- (void)flushCacheToFile;
- (void)loadCacheFromFile;
- (void)loadFailedForLanguage:(id)a0 assetType:(id)a1 deliveryType:(id)a2;
- (void)queryCache:(id)a0 loading:(BOOL)a1;
- (void)queryServerCache:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeAssetBundleWithAssetType:(id)a0 language:(id)a1 deliveryType:(id)a2;
- (BOOL)upsertAssetBundleWithAssetType:(id)a0 language:(id)a1 deliveryType:(id)a2 bundleVersion:(id)a3 path:(id)a4;

@end
