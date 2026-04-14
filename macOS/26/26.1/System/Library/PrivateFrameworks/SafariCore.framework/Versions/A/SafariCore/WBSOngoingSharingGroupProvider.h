@class NSArray, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface WBSOngoingSharingGroupProvider : NSObject <KCSharingGroupManagerSubscriberProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_subscribers;
    NSArray *_cachedGroups;
    NSArray *_cachedInvitations;
    NSString *_cachedCurrentUserParticipantID;
    id _keybagLockStatusObserverToken;
}

@property (class, readonly, nonatomic) WBSOngoingSharingGroupProvider *sharedProvider;

@property (readonly, nonatomic) NSArray *cachedGroups;
@property (readonly, nonatomic) NSArray *cachedInvitations;
@property (readonly, nonatomic) NSString *currentUserParticipantID;
@property (readonly, nonatomic) BOOL hasLoadedGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountChanged;
- (void)addSubscriber:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)groupsUpdated;
- (void)_addNewGroupToCachedGroups:(id)a0;
- (void)_fetchCurrentUserParticipantIDWithCompletion:(id /* block */)a0;
- (void)_fetchGroups;
- (void)_fetchGroupsWithCompletion:(id /* block */)a0;
- (void)_notifySubscribers;
- (void)_performTaskEnsuringGroupsAreLoadedOnQueue:(id)a0 shouldForceUpdate:(BOOL)a1 task:(id /* block */)a2;
- (id)cachedGroupWithID:(id)a0;
- (void)performTaskEnsuringGroupsAreLoadedOnQueue:(id)a0 task:(id /* block */)a1;
- (void)performTaskOnQueueAfterFetchingGroups:(id)a0 task:(id /* block */)a1;

@end
