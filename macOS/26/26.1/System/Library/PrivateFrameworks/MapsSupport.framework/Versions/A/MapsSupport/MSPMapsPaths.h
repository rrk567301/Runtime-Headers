@class NSString, NSURL;

@interface MSPMapsPaths : NSObject {
    NSURL *_libraryURL;
    NSURL *_groupLibraryURL;
    id /* block */ _invalidationHandler;
}

@property (readonly, nonatomic) NSString *homeDirectory;
@property (readonly, nonatomic) NSString *mapsDirectory;
@property (readonly, nonatomic) NSString *cacheDirectory;
@property (readonly, nonatomic) NSString *groupDirectory;
@property (readonly, nonatomic) NSString *geoPinnedPlacesSettingsPath;
@property (readonly, nonatomic) NSString *geoCollectionsSettingsPath;
@property (readonly, nonatomic) NSString *bookmarksSettingsPath;
@property (readonly, nonatomic) NSString *geoBookmarksSettingsPath;
@property (readonly, nonatomic) NSString *directionsSettingsPath;
@property (readonly, nonatomic) NSString *historySettingsPath;
@property (readonly, nonatomic) NSString *geoHistorySettingsPath;
@property (readonly, nonatomic) NSString *nanoHistorySettingsPath;
@property (readonly, nonatomic) NSString *failedSearchesSettingsPath;
@property (readonly, nonatomic) NSString *failedGeoSearchesSettingsPath;
@property (readonly, nonatomic) NSString *failedGeoDirectionsSettingsPath;
@property (readonly, nonatomic) NSString *failedDirectionsSettingsPath;
@property (readonly, nonatomic) NSString *routingAppLaunchRecordPath;
@property (readonly, nonatomic) NSString *pinsSettingsPath;
@property (readonly, nonatomic) NSString *directionsCachePath;
@property (readonly, nonatomic) NSString *reportAProblemDirectionsRecordingsPath;
@property (readonly, nonatomic) NSString *reportAProblemSearchRecordingsPath;
@property (readonly, nonatomic) NSString *reportAProblemNotificationsPath;
@property (readonly, nonatomic) NSString *favoritesSyncedMarkerFile;
@property (readonly, nonatomic) BOOL shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
@property (readonly, nonatomic) NSString *historySyncedMarkerFile;
@property (readonly, nonatomic) BOOL shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;

+ (id)cacheDirectory;
+ (id)directionsCachePath;
+ (id)geoHistorySettingsPath;
+ (id)historySyncedMarkerFile;
+ (id)mapsDirectory;
+ (id)favoritesSyncedMarkerFile;
+ (id)historySettingsPath;
+ (id)pinsSettingsPath;
+ (id)failedGeoSearchesSettingsPath;
+ (id)mapsApplicationContainerPaths;
+ (id)geoPinnedPlacesSettingsPath;
+ (id)bookmarksSettingsPath;
+ (id)directionsSettingsPath;
+ (id)routingAppLaunchRecordPath;
+ (id)geoCollectionsSettingsPath;
+ (id)failedGeoDirectionsSettingsPath;
+ (id)groupDirectory;
+ (id)reportAProblemDirectionsRecordingsPath;
+ (id)geoBookmarksSettingsPath;
+ (id)mapsApplicationContainerPathsWithInvalidationHandler:(id /* block */)a0;
+ (id)pathsAtLocation:(long long)a0;
+ (id)currentMapsApplicationContainerURL;
+ (id)currentMapsGroupContainerURL;
+ (id)failedSearchesSettingsPath;
+ (id)reportAProblemSearchRecordingsPath;
+ (id)failedDirectionsSettingsPath;

- (void)_invalidate;
- (BOOL)_deleteSyncedFileAtPath:(id)a0;
- (id)initWithLibraryDirectoryURL:(id)a0 groupLibraryURL:(id)a1 invalidationHandler:(id /* block */)a2;
- (BOOL)deleteHistorySyncedMarkerFile;
- (BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteFavoritesSyncedMarkerFile;

@end
