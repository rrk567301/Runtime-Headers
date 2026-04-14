@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (long long)maxSize;
- (id)_init;
- (id)URL;
- (id)allKeys;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (long long)currentSize;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)initWithURL:(id)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
