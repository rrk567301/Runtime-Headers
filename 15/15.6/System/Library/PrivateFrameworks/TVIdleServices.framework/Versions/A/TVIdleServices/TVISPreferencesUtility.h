@interface TVISPreferencesUtility : NSObject

+ (long long)scheduledUpdateIntervalOverride;
+ (id)idleCharacterJetPackURLOverride;
+ (id)_idleAssetsDefaults;
+ (id)_idleScreenDefaults;
+ (id)_screenSaverDefaults;
+ (void)activatePhotosSharingFilter:(id)a0;
+ (void)activatePhotosSourceFilter:(id)a0;
+ (long long)activeScreenSaverType;
+ (id)aerialManifestURL;
+ (id)aerialManifestURLOverride;
+ (long long)assetDownloadInterval;
+ (id)idleCharacterActiveDate;
+ (char)isAcceleratedDownloadIntervalEnabled;
+ (char)isIdleCharacterPasswordsDisabled;
+ (char)isIdleScreenEnabled;
+ (char)isUnsafePhotoLibraryShutdownDisabled;
+ (id)nextScheduledUpdate;
+ (long long)photosSharingFilter;
+ (long long)photosSourceFilter;
+ (double)portraitClockBSDeviationThreshold;
+ (char)portraitClockCityscapesEnabled;
+ (char)portraitClockNatureEnabled;
+ (id)portraitClockPeopleFilter;
+ (char)portraitClockPetsEnabled;
+ (id)portraitClockPhotoSource;
+ (long long)scheduledUpdateIntervalOverrideForService:(id)a0;
+ (void)setAcceleratedDownloadIntervalEnabled:(char)a0;
+ (void)setActiveScreenSaverType:(long long)a0;
+ (void)setAerialManifestURL:(id)a0;
+ (void)setAssetDownloadInterval:(long long)a0;
+ (void)setNextScheduledUpdate:(id)a0;
+ (void)setPortraitClockCityscapesEnabled:(char)a0;
+ (void)setPortraitClockNatureEnabled:(char)a0;
+ (void)setPortraitClockPeopleFilter:(id)a0;
+ (void)setPortraitClockPetsEnabled:(char)a0;

@end
