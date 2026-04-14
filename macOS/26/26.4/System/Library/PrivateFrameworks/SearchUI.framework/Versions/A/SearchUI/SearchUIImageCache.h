@class NSCache;

@interface SearchUIImageCache : NSObject

@property (retain) NSCache *imageCache;

+ (id)sharedCache;
+ (void)cacheTLKImage:(id)a0 forSFImage:(id)a1;
+ (id)cachedTlkImageForSFImage:(id)a0;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)clearImagesWithNotification:(id)a0;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)a0;
- (void)appIconImageDidChange:(id)a0;
- (void)dateDidChange;

@end
