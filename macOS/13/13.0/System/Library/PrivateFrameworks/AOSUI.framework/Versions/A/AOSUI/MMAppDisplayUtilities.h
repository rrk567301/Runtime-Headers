@interface MMAppDisplayUtilities : NSObject

+ (id)_imageCache;
+ (id)_cachedImageForBundleID:(id)a0;
+ (void)_setCachedImage:(id)a0 forBundleID:(id)a1;
+ (id)_displayNameCache;
+ (id)_cachedDisplayNameForBundleID:(id)a0;
+ (void)_setCachedDisplayName:(id)a0 forBundleID:(id)a1;
+ (void)lookUpAppNameImagesForApplicationBundleIDs:(id)a0;

@end
