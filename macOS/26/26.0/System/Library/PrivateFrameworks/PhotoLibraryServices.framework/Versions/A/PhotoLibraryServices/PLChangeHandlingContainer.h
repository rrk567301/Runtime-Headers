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

- (void)registerToReceiveCoreDataChanges:(id)a0;
- (void)start;
- (void)unpauseLaunchEventNotifications;
- (void)dealloc;
- (void)pauseLaunchEventNotifications;
- (void)stop;
- (void)endObservingChanges;
- (void)connectManagedObjectContext:(id)a0;
- (void)beginObservingChanges;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (id)initWithLibraryBundle:(id)a0 changePublisher:(id)a1 libraryServicesManager:(id)a2 persistentStoreCoordinator:(id)a3;
- (void)distributeChangesSinceLastCheckpoint;
- (void)handleUnknownMergeEvent;
- (void)disconnectManagedObjectContext:(id)a0;
- (void).cxx_destruct;

@end
