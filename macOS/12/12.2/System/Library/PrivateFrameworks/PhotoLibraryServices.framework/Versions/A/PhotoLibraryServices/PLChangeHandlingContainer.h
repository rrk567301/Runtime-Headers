@class PLChangeNode, NSDictionary, NSURL, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor;
@protocol PLChangePublisher;

@interface PLChangeHandlingContainer : NSObject {
    PLChangeNode *_changeNode;
    PLCoreDataChangeMerger *_changeMerger;
    id<PLChangePublisher> _changePublisher;
    PLPersistentHistoryChangeDistributor *_persistentHistoryChangeDistributor;
}

@property (readonly, copy) NSURL *libraryURL;
@property (readonly, nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (readonly, copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)start;
- (void)pause;
- (void)stop;
- (void)distributeChangesSinceLastCheckpoint;
- (void)handleUnknownMergeEvent;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;
- (void)disconnectManagedObjectContext:(id)a0;
- (void)connectManagedObjectContext:(id)a0;
- (void)registerToReceiveCoreDataChanges:(id)a0;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (id)initWithLibraryURL:(id)a0 changePublisher:(id)a1 libraryServicesManager:(id)a2 persistentStoreCoordinator:(id)a3;

@end
