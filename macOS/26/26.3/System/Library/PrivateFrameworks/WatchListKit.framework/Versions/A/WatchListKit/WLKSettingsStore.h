@class NSMutableArray, NSString, NSUserDefaults, NSXPCConnection, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface WLKSettingsStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSString *_pushToken;
    NSString *_accountID;
    BOOL _optedIn;
    BOOL _migratediOS;
    BOOL _migratedtvOS;
    NSMutableArray *_apps;
    NSUserDefaults *_defaultsAccessor;
    int _didChangeNotificationToken;
    NSXPCConnection *_connection;
}

@property int ignoreChangesCount;
@property BOOL hasOutstandingChanges;
@property (nonatomic) BOOL optedIn;
@property (copy, nonatomic) NSNumber *optedInVal;
@property (nonatomic) BOOL migratediOS;
@property (nonatomic) BOOL migratedtvOS;
@property (copy, nonatomic) NSString *pushToken;
@property (readonly, copy, nonatomic) NSDate *lastSyncDate;
@property (readonly, copy, nonatomic) NSDate *lastSyncToCloudDate;
@property (nonatomic) BOOL privateModeEnabled;
@property (nonatomic) BOOL postPlayAutoPlayNextVideo;
@property (nonatomic) BOOL sportsScoreSpoilersAllowed;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;

+ (id)sharedSettings;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (BOOL)isHostedInRemoteViewService;
+ (BOOL)isSettingsStoreInitializing;

- (id)_connection;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)_dictionaryRepresentation;
- (void)setLastSyncToCloudDate:(id)a0;
- (void)publishCrossProcessSettingsChangedNotification;
- (void)beginIgnoringChanges;
- (id)_copyAppsForChannelID:(id)a0 apps:(id)a1;
- (void)setLastSyncDate:(id)a0;
- (id)_watchListAppsFiltered;
- (id)description;
- (id)init;
- (id)deniedBrands;
- (BOOL)hasPostPlayAutoPlayNextVideoPreferences;
- (void)_writeToDisk;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (void)_activeAccountChangedNotification:(id)a0;
- (id)watchListAppsFiltered;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (void)_attemptCullingOfObsoleteApp:(id)a0;
- (id)_appsForChannelID:(id)a0;
- (void)endIgnoringChanges;
- (void)_tickleKVO;
- (id)consentedBrands;
- (void).cxx_destruct;
- (void)_loadFromDiskWithCompletion:(id /* block */)a0;
- (BOOL)synchronize:(unsigned long long)a0;
- (id)_supportPath;
- (void)removePostPlayAutoPlayNextVideoPreferences;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)_removeWatchListApp:(id)a0;
- (void)dealloc;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (id)watchListApps;
- (id)_dictionaryRepresentationDataOnly;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;

@end
