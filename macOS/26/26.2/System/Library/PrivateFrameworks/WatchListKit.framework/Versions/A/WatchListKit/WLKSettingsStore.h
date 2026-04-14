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
+ (id)sharedSettings;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (BOOL)isSettingsStoreInitializing;

- (void)setLastSyncDate:(id)a0;
- (id)_connection;
- (id)_watchListAppsFiltered;
- (void)_attemptCullingOfObsoleteApp:(id)a0;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;
- (void)_loadFromDiskWithCompletion:(id /* block */)a0;
- (BOOL)hasPostPlayAutoPlayNextVideoPreferences;
- (id)_dictionaryRepresentation;
- (id)watchListAppsFiltered;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)_tickleKVO;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentationDataOnly;
- (BOOL)synchronize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)deniedBrands;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (id)watchListApps;
- (void)_removeWatchListApp:(id)a0;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (void)publishCrossProcessSettingsChangedNotification;
- (id)description;
- (id)consentedBrands;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (void)_writeToDisk;
- (id)_supportPath;
- (void)beginIgnoringChanges;
- (void)setLastSyncToCloudDate:(id)a0;
- (id)_copyAppsForChannelID:(id)a0 apps:(id)a1;
- (void)endIgnoringChanges;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)init;
- (id)_appsForChannelID:(id)a0;
- (void)removePostPlayAutoPlayNextVideoPreferences;
- (void)dealloc;

@end
