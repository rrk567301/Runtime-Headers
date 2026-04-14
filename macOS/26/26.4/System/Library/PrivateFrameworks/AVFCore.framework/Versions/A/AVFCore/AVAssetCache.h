@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (id)_init;
- (long long)maxSize;
- (id)initWithURL:(id)a0;
- (id)URL;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)variantsForMediaSelection:(id)a0;
- (void)retrieveMediaStreamInfosForVariant:(id)a0 mediaSelection:(id)a1 completionHandler:(id /* block */)a2;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (long long)currentSize;
- (id)allKeys;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
