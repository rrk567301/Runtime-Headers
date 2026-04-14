@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (long long)maxSize;
- (BOOL)isPlayableOffline;
- (void)setMaxSize:(long long)a0;
- (id)URL;
- (id)allKeys;
- (void)dealloc;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (long long)currentSize;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)initWithURL:(id)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
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
