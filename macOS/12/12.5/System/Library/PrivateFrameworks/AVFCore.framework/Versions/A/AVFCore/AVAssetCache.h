@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheWithURL:(id)a0;
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)allKeys;
- (id)_init;
- (id)URL;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (long long)maxEntrySize;
- (long long)currentSize;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;
- (id)lastModifiedDateOfEntryForKey:(id)a0;

@end
