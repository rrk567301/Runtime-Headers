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

+ (BOOL)isHostedInRemoteViewService;
+ (BOOL)isSettingsStoreInitializing;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)sharedSettings;

- (id)_connection;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (void)_activeAccountChangedNotification:(id)a0;
- (BOOL)hasPostPlayAutoPlayNextVideoPreferences;
- (id)consentedBrands;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (void)_loadFromDiskWithCompletion:(id /* block */)a0;
- (id)_dictionaryRepresentation;
- (BOOL)synchronize:(unsigned long long)a0;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;
- (id)_copyAppsForChannelID:(id)a0 apps:(id)a1;
- (void)beginIgnoringChanges;
- (id)watchListApps;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (id)description;
- (void)setLastSyncDate:(id)a0;
- (void)dealloc;
- (id)_dictionaryRepresentationDataOnly;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (void)_tickleKVO;
- (id)_watchListAppsFiltered;
- (void).cxx_destruct;
- (void)_attemptCullingOfObsoleteApp:(id)a0;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;
- (id)deniedBrands;
- (void)setLastSyncToCloudDate:(id)a0;
- (id)_appsForChannelID:(id)a0;
- (void)endIgnoringChanges;
- (void)_removeWatchListApp:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)_writeToDisk;
- (void)publishCrossProcessSettingsChangedNotification;
- (id)watchListAppsFiltered;
- (id)_supportPath;
- (void)removePostPlayAutoPlayNextVideoPreferences;
- (id)init;

@end
