@class HKObserverSet, NSArray, HKTaskServerProxyProvider, HKHealthStore, NSString, NSObject, NSMutableDictionary;
@protocol HKSummarySharingEntryStoreDelegate, OS_dispatch_queue;

@interface HKSummarySharingEntryStore : NSObject <_HKXPCExportable, HKSummarySharingEntryStoreClientInterface> {
    id /* block */ _updateHandler;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableDictionary *_fetchedEntriesByUUID;
    HKObserverSet *_observers;
}

@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSArray *sharingEntries;
@property (weak, nonatomic) id<HKSummarySharingEntryStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)_notifyObservers;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)updateNotificationStatusWithUUID:(id)a0 notificationStatus:(long long)a1 completion:(id /* block */)a2;
- (void)acceptInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)beginObservingReachabilityStatusForIdentifiers:(id)a0 isInitialQuery:(char)a1 completion:(id /* block */)a2;
- (void)clientRemote_reachabilityStatusDidUpdate:(id)a0 error:(id)a1;
- (void)clientRemote_sharingEntriesDidUpdate:(id)a0;
- (void)declineInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSharingEntriesWithCompletion:(id /* block */)a0;
- (void)inviteSharingDataWithIdentifier:(id)a0 firstName:(id)a1 lastName:(id)a2 sharingAuthorizations:(id)a3 userWheelchairMode:(long long)a4 completion:(id /* block */)a5;
- (void)leaveInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)revokeInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)unpauseInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)updateSharingAuthorizationsForInvitationUUID:(id)a0 sharingAuthorizationsToAdd:(id)a1 sharingAuthorizationsToDelete:(id)a2 completion:(id /* block */)a3;
- (void)updateSharingAuthorizationsForInvitationUUID:(id)a0 sharingAuthorizationsToAdd:(id)a1 sharingAuthorizationsToDelete:(id)a2 deleteOnCommit:(char)a3 completion:(id /* block */)a4;

@end
