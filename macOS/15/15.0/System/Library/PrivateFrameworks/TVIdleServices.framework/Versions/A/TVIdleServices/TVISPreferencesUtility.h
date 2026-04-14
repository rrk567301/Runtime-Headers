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
+ (id)cinematicActiveAssetVariantOverride;
+ (id)cinematicManifestURLBagKey;
+ (id)cinematicManifestURLOverride;
+ (id)idleCharacterManifestURLOverride;
+ (BOOL)isAcceleratedDownloadEnabledForService:(id)a0;
+ (BOOL)isAcceleratedDownloadIntervalEnabled;
+ (BOOL)isIdleScreenEnabled;
+ (id)lastScheduledUpdate;
+ (id)nextScheduledUpdate;
+ (long long)photosSharingFilter;
+ (long long)photosSourceFilter;
+ (BOOL)portraitClockCityscapesEnabled;
+ (BOOL)portraitClockNatureEnabled;
+ (id)portraitClockPeopleFilter;
+ (BOOL)portraitClockPetsEnabled;
+ (id)portraitClockPhotoSource;
+ (void)setAcceleratedDownloadIntervalEnabled:(BOOL)a0;
+ (void)setActiveScreenSaverType:(long long)a0;
+ (void)setAerialManifestURL:(id)a0;
+ (void)setAssetDownloadInterval:(long long)a0;
+ (void)setLastScheduledUpdate:(id)a0;
+ (void)setNextScheduledUpdate:(id)a0;
+ (void)setPortraitClockCityscapesEnabled:(BOOL)a0;
+ (void)setPortraitClockNatureEnabled:(BOOL)a0;
+ (void)setPortraitClockPeopleFilter:(id)a0;
+ (void)setPortraitClockPetsEnabled:(BOOL)a0;

@end
