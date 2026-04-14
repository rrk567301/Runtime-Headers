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
    int _userDefaultsDidChangeNotificationToken;
    NSXPCConnection *_connection;
}

@property int ignoreChangesCount;
@property BOOL hasOutstandingChanges;
@property (nonatomic) BOOL privateModeEnabled;
@property (nonatomic) BOOL sportsScoreSpoilersAllowed;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (copy, nonatomic) NSNumber *preferredPlaybackDimensionality;
@property (nonatomic) BOOL optedIn;
@property (copy, nonatomic) NSNumber *optedInVal;
@property (nonatomic) BOOL migratediOS;
@property (nonatomic) BOOL migratedtvOS;
@property (copy, nonatomic) NSString *pushToken;
@property (readonly, copy, nonatomic) NSDate *lastSyncDate;
@property (readonly, copy, nonatomic) NSDate *lastSyncToCloudDate;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)sharedSettings;
+ (BOOL)isSettingsStoreInitializing;
+ (BOOL)isHostedInRemoteViewService;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (void)refresh;
- (id)_dictionaryRepresentation;
- (id)_supportPath;
- (void)_loadFromDisk;
- (void)_writeToDisk;
- (void)setLastSyncDate:(id)a0;
- (BOOL)synchronize:(unsigned long long)a0;
- (id)consentedBrands;
- (void)_activeAccountChangedNotification:(id)a0;
- (id)deniedBrands;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (id)watchListApps;
- (id)_appsForChannelID:(id)a0;
- (void)_attemptCullingOfObsoleteApp:(id)a0;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;
- (id)_dictionaryRepresentationDataOnly;
- (void)_removeWatchListApp:(id)a0;
- (void)_tickleKVO;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (id)_watchListAppsFiltered;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (void)beginIgnoringChanges;
- (void)endIgnoringChanges;
- (void)publishCrossProcessSettingsChangedNotification:(BOOL)a0;
- (void)setLastSyncToCloudDate:(id)a0;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)watchListAppsFiltered;

@end
