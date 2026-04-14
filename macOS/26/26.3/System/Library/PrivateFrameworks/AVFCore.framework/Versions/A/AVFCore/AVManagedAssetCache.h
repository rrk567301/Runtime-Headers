@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (void)setMaxSize:(long long)a0;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (id)allKeys;
- (long long)maxSize;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (long long)currentSize;
- (id)initWithURL:(id)a0;
- (id)URL;
- (BOOL)isPlayableOffline;
- (void)dealloc;
- (BOOL)isHTTPLiveStreamingCacheEnabled;
- (void)enableAutomaticCacheSizeManagement;
- (id)initWithURL:(id)a0 enableCRABSCache:(BOOL)a1 enableHLSCache:(BOOL)a2;
- (BOOL)isProgressiveDownloadCacheEnabled;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (void)removeEntryForKey:(id)a0;
- (void)setMaxEntrySize:(long long)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
