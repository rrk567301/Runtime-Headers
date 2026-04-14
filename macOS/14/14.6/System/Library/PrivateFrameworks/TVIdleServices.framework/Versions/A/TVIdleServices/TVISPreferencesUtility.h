@interface TVISPreferencesUtility : NSObject

+ (id)_idleAssetsDefaults;
+ (id)_screenSaverDefaults;
+ (void)activatePhotosSharingFilter:(id)a0;
+ (void)activatePhotosSourceFilter:(id)a0;
+ (long long)activeScreenSaverType;
+ (id)aerialActiveAssetVariantOverride;
+ (id)aerialManifestURL;
+ (id)aerialManifestURLOverride;
+ (long long)assetDownloadInterval;
+ (BOOL)isAcceleratedDownloadIntervalEnabled;
+ (BOOL)isIdleScreenEnabled;
+ (id)nextScheduledUpdate;
+ (long long)photosSharingFilter;
+ (long long)photosSourceFilter;
+ (void)setAcceleratedDownloadIntervalEnabled:(BOOL)a0;
+ (void)setActiveScreenSaverType:(long long)a0;
+ (void)setAerialManifestURL:(id)a0;
+ (void)setAssetDownloadInterval:(long long)a0;
+ (void)setNextScheduledUpdate:(id)a0;

@end
