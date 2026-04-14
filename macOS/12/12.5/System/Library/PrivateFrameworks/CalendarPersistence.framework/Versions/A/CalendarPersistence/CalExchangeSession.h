@class EWSExchangeServiceBinding, NSString, NSMutableDictionary, CalOperationQueue, NSObject, EWSStreamingSubscription;
@protocol OS_dispatch_queue;

@interface CalExchangeSession : CalSession <EWSSubscriptionDelegate> {
    CalOperationQueue *_queue;
    BOOL _connectionIsBeingTested;
    NSMutableDictionary *_managedObjectIDsToItemIds;
}

@property (retain) NSObject<OS_dispatch_queue> *subscriptionQueue;
@property (retain, nonatomic) NSString *sessionUserName;
@property (retain) NSMutableDictionary *urlAddressToCalendarUserAddressMapping;
@property BOOL connectionHasBeenTested;
@property (retain) EWSStreamingSubscription *streamingSubscription;
@property (retain) EWSExchangeServiceBinding *ewsBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPersistError:(id)a0;
+ (BOOL)isTransientEWSError:(long long)a0;
+ (void)updatePrincipal:(id)a0 fromExchangeServerInfo:(id)a1;
+ (id)sendMessage:(id)a0 error:(id *)a1 sessionID:(id)a2;
+ (id)_getItemsResponseShape;

- (void)dealloc;
- (void).cxx_destruct;
- (id)operationQueue;
- (BOOL)activate;
- (void)deactivate;
- (id)initWithSessionID:(id)a0;
- (void)systemWillSleep;
- (void)systemDidWake;
- (id)sendMessage:(id)a0 error:(id *)a1;
- (id)debugInfo;
- (void)synchronizeWithFlags:(long long)a0;
- (void)reactivate;
- (void)deletePersistedErrorAndNotify;
- (void)synchronizeDelegatesWithCompletion:(id /* block */)a0;
- (BOOL)updatePushState:(BOOL)a0;
- (id)managedPrincipalInContext:(id)a0;
- (double)timeSinceLastSync;
- (BOOL)processChangeRequests:(BOOL)a0;
- (BOOL)persistErrorAndNotify;
- (void)systemNetworkDidChange;
- (void)operation:(id)a0 didEncounterError:(id)a1;
- (void)mailModifiedEWSInvitation:(id)a0;
- (void)testConnectionWithError:(id *)a0;
- (void)_validateBinding;
- (void)_systemNetworkOnlineUpdates;
- (void)stopPushNotifications;
- (void)setupPushNotifications;
- (BOOL)persistError:(id)a0 forOperation:(id)a1;
- (void)subscriptionDidSubscribe:(id)a0;
- (void)subscriptionDidUnsubscribe:(id)a0;
- (void)subscription:(id)a0 receivedEvents:(id)a1;
- (void)subscription:(id)a0 failedWithError:(id)a1;
- (void)updateCalendarUserAddress:(id)a0 fromOldURL:(id)a1;
- (id)webServicesURL;
- (void)exchangeServiceBinding:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)exchangeServiceBinding:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)exchangeServiceBinding:(id)a0 didFinishWithResponse:(id)a1;
- (void)exchangeServiceBinding:(id)a0 didFailWithError:(id)a1;
- (id)itemIdForManagedObjectID:(id)a0;
- (void)setItemId:(id)a0 forManagedObjectID:(id)a1;

@end
