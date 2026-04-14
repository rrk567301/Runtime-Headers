@class NSCache;

@interface SearchUIImageCache : NSObject

@property (retain) NSCache *imageCache;

+ (id)sharedCache;
+ (id)cachedTlkImageForSFImage:(id)a0;
+ (void)cacheTLKImage:(id)a0 forSFImage:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)a0;
- (void)appIconImageDidChange:(id)a0;
- (void)dateDidChange;

@end
