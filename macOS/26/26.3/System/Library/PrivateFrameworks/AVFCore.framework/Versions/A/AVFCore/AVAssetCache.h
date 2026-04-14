@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (id)allKeys;
- (long long)maxSize;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (long long)currentSize;
- (id)initWithURL:(id)a0;
- (id)URL;
- (id)_init;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
