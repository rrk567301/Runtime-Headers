@class VCDaemonDatabaseProvider, NSString, BPSSink, CSSearchableIndex, MTAlarmDataSource, NSObject, WFSpotlightDomainsCleaner;
@protocol OS_dispatch_queue, OS_os_activity, VCDaemonTaskScheduler;

@interface WFContextualActionSpotlightSyncService : NSObject <MTAlarmDataSourceObserver, FCActivityManagerObserving, CSSearchableIndexDelegate, WFSpotlightDomainsCleanerObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) id<VCDaemonTaskScheduler> daemonTaskScheduler;
@property (readonly, nonatomic) BPSSink *focusModeSink;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) MTAlarmDataSource *alarmDataSource;
@property (readonly, nonatomic) WFSpotlightDomainsCleaner *spotlightDomainsCleaner;
@property (retain, nonatomic) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)contextualActionsIndexVersion;
+ (BOOL)didCompleteAppShortcutDomainMigration;
+ (void)setContextualActionsIndexVersion:(long long)a0;
+ (void)setDidCompleteAppShortcutDomainMigration;

- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startWithCompletion:(id /* block */)a0;
- (void)availableActivitiesDidChangeForManager:(id)a0;
- (void)dataSourceDidReload:(id)a0;
- (void)reindexSearchableItems:(unsigned long long)a0 appShortcutBundleIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)queue_getFolderAppEntityContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)applicationWasRegisteredWithCompletion:(id /* block */)a0;
- (void)cellularSettingsUpdatedWithCompletion:(id /* block */)a0;
- (void)collectionsDidChangeWithCompletion:(id /* block */)a0;
- (void)domainCleanerDidClearDomains:(id)a0;
- (id)initWithDaemonTaskScheduler:(id)a0 databaseProvider:(id)a1;
- (void)migrateAppShortcutsAndReindexAllItemsIfNeededWithCompletion:(id /* block */)a0;
- (void)queue_fetchWipeAndIndexActionsInDomainWithDescriptiveName:(id)a0 identifiers:(id)a1 batchSize:(unsigned long long)a2 fetcher:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)queue_getAlarmContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_getFocusModeContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_getStaticContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_getToggleSettingContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_wipeIndexIfNotMigratedToNewDomainIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)receiveAutoShortcutsUpdatedNotification:(id)a0 completion:(id /* block */)a1;
- (void)reindexAllSearchableItemsIfNeeded:(BOOL)a0 completion:(id /* block */)a1;
- (void)reindexAllSearchableItemsWithCompletion:(id /* block */)a0;
- (void)spotlightPreferencesChangedWithCompletion:(id /* block */)a0;
- (void)systemLanguageUpdatedWithCompletion:(id /* block */)a0;

@end
