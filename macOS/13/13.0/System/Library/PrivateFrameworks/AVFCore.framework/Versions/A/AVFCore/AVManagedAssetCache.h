@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)a0;
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)allKeys;
- (id)URL;
- (long long)maxSize;
- (void)setMaxSize:(long long)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (BOOL)isPlayableOffline;
- (long long)maxEntrySize;
- (long long)currentSize;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (id)initWithURL:(id)a0 enableCRABSCache:(BOOL)a1 enableHLSCache:(BOOL)a2;
- (void)setMaxEntrySize:(long long)a0;
- (BOOL)isProgressiveDownloadCacheEnabled;
- (BOOL)isHTTPLiveStreamingCacheEnabled;

@end
