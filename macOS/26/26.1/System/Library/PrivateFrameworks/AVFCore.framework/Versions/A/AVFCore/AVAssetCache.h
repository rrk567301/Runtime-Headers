@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (long long)maxSize;
- (id)allKeys;
- (long long)currentSize;
- (id)initWithURL:(id)a0;
- (id)_init;
- (id)URL;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
