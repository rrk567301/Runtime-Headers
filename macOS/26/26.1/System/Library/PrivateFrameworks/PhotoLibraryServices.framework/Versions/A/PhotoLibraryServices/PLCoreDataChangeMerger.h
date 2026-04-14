@class NSDictionary, NSObject, PLManagedObjectContextList;
@protocol OS_dispatch_queue;

@interface PLCoreDataChangeMerger : NSObject {
    PLManagedObjectContextList *_contextsToReceiveNotifications;
    NSObject<OS_dispatch_queue> *_mergeChangesQueue;
    BOOL _invalidated;
}

@property (nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;

- (id)allContexts;
- (void)refreshAllObjects;
- (void)registerToReceiveCoreDataChanges:(id)a0;
- (void)invalidate;
- (void)mergeChangesFromRemoteContextSave:(id)a0 intoAllContextsNotIdenticalTo:(id)a1 debugEvent:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)a0 debugEvent:(id)a1 completionHandler:(id /* block */)a2;
- (id)allContextsNotIdenticalTo:(id)a0;
- (void)handleUnknownMergeEvent;
- (id)init;

@end
