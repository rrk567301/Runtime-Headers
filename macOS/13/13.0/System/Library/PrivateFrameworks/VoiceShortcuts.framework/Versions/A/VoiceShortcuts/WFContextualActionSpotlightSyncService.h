@class VCDaemonXPCEventHandler, BPSSink, CSSearchableIndex, VCDaemonDatabaseProvider, NSObject;
@protocol OS_dispatch_queue, OS_os_activity, OS_dispatch_group;

@interface WFContextualActionSpotlightSyncService : NSObject <WFDatabaseObjectObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly, nonatomic) BPSSink *focusModeSink;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncOperation;
@property (nonatomic) BOOL wantsResync;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (id)initWithEventHandler:(id)a0 databaseProvider:(id)a1;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)receiveAutoShortcutsUpdatedNotification:(id)a0;
- (void)reindexAllSearchableItems;
- (void)queue_performSyncWork:(id /* block */)a0;
- (void)queue_fetchWipeAndIndexActionsInDomainWithDescriptiveName:(id)a0 identifier:(id)a1 fetcher:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)queue_getStaticContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_getFocusModeContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_wipeIndexIfNotMigratedToNewDomainIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)subscribeToBiome;

@end
