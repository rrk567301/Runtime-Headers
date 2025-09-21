@class NSString, MSPReceiverETAController, MSPSharedTripRelay, MSPSenderETAController, NSMutableSet, NSMutableDictionary, NSXPCListener, MSPSharedTripCapabilityFetchingServer, NSMapTable;

@interface MSPSharedTripServer : NSObject <NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer> {
    MSPSenderETAController *_sendingController;
    MSPReceiverETAController *_receivingController;
    MSPSharedTripCapabilityFetchingServer *_capabilityFetchingServer;
    MSPSharedTripRelay *_idsRelay;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    NSMutableDictionary *_connectionSubscriptionsByTripID;
    NSMapTable *_peersByConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)migrateIfNeeded;

- (void)cleanConnections;
- (id)connections;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)fetchSharingIdentityWithCompletion:(id /* block */)a0;
- (void)stopSharingTripWithMessagesGroup:(id)a0 completion:(id /* block */)a1;
- (id)_subscribedConnectionsForTripID:(id)a0 createIfNeeded:(BOOL)a1;
- (void)dealloc;
- (void)fetchActiveHandlesWithCompletion:(id /* block */)a0;
- (void)senderController:(id)a0 didInvalidateSharedTripWithError:(id)a1;
- (void)clearBlockedTripIdentifiers;
- (void)senderController:(id)a0 didStartSharingWithGroupIdentifier:(id)a1;
- (void)checkinWithCompletion:(id /* block */)a0;
- (void)createControllers;
- (BOOL)_connectionCanControlReceiving:(id)a0;
- (void)etaController:(id)a0 sharedTripDidClose:(id)a1;
- (void)createXPCListener;
- (void)fetchSharedTripsWithCompletion:(id /* block */)a0;
- (id)init;
- (BOOL)_connectionCanControlSharing:(id)a0;
- (void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id /* block */)a0;
- (void)etaController:(id)a0 didUpdateETAForSharedTrip:(id)a1;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)relay:(id)a0 accountStatusChanged:(BOOL)a1;
- (void)stopSharingTripWithMessagesGroup:(id)a0 reason:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)reportUserConfirmationOfSharingIdentity:(id)a0 completion:(id /* block */)a1;
- (void)purgeExpiredBlockedTripIdentifiers;
- (void)stopSharingTripWithCompletion:(id /* block */)a0;
- (void)etaController:(id)a0 didUpdateRouteForSharedTrip:(id)a1;
- (void)etaController:(id)a0 sharedTripDidBecomeAvailable:(id)a1;
- (void)stopSharingTripWithContacts:(id)a0 completion:(id /* block */)a1;
- (void)etaController:(id)a0 sharedTripDidBecomeUnavailable:(id)a1;
- (void)etaController:(id)a0 didUpdateReachedDestinationForSharedTrip:(id)a1;
- (void)invalidateActiveHandlesForSenderController:(id)a0;
- (void)_setNotificationCenter:(id)a0;
- (void)startSharingTripWithContacts:(id)a0 capabilityType:(unsigned long long)a1 serviceName:(id)a2 completion:(id /* block */)a3;
- (void)stopSharingTripWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)startSharingTripWithMessagesGroup:(id)a0 completion:(id /* block */)a1;
- (void)blockSharedTrip:(id)a0;
- (void)_purgeSubscriptionsForConnection:(id)a0;
- (void)stopSharingTripWithContacts:(id)a0 reason:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)etaController:(id)a0 didUpdateDestinationForSharedTrip:(id)a1;
- (void).cxx_destruct;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
