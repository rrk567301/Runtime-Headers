@class HAP2SerializedOperationQueue, NSArray, NSString, HAP2PropertyLock, NSOperationQueue, HAPPowerManager, NSObject, NSMutableArray, HAP2AccessoryServerBrowserOperation, NSMapTable;
@protocol OS_dispatch_queue, HAP2Storage, HAP2AccessoryServerBrowserDelegate;

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject <HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAPPowerManagerProtocol, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser>

@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (readonly, nonatomic) NSArray *coordinatorInfo;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkQueue;
@property (retain, nonatomic) NSMutableArray *liveUnpairedAccessoryServers;
@property (retain, nonatomic) NSMutableArray *livePairedAccessoryServers;
@property (readonly, nonatomic) NSMapTable *weakOperationQueuesByDeviceID;
@property (readonly, nonatomic) NSMutableArray *browserOperationQueue;
@property (readonly, nonatomic) HAP2AccessoryServerBrowserOperation *currentOperation;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (nonatomic, getter=isConfirming) BOOL confirming;
@property (retain, nonatomic) HAPPowerManager *powerManager;
@property (nonatomic) unsigned long long powerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HAP2Storage> storage;
@property (weak, nonatomic) id<HAP2AccessoryServerBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *unpairedAccessoryServers;
@property (readonly, copy, nonatomic) NSArray *pairedAccessoryServers;

+ (id)new;

- (void)_stopDiscovering;
- (void)startDiscovering;
- (BOOL)shouldRetryPVDueToAuthenticationError:(id)a0;
- (void)coordinator:(id)a0 didStartDiscoveringWithError:(id)a1;
- (BOOL)onDemandConnectionsAreEnabled;
- (void)stopDiscovering;
- (id)initWithCoordinators:(id)a0 storage:(id)a1;
- (void)_finishOperation;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)_startDiscovering;
- (void)_finishStopDiscovering;
- (void)storage:(id)a0 didSaveKeyWithIdentifier:(id)a1;
- (void)accessoryWithDeviceIDIsPaired:(id)a0 completion:(id /* block */)a1;
- (void)devicePowerStateChanged:(unsigned long long)a0;
- (id)init;
- (id)pairingRequest;
- (void)_finishStartDiscovering;
- (void)coordinator:(id)a0 didLoseAccessory:(id)a1 error:(id)a2;
- (id)_removeAccessoryServerFromArray:(id)a0 withDeviceID:(id)a1;
- (void)coordinator:(id)a0 didStopDiscoveringWithError:(id)a1;
- (void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(id)a0;
- (id)_lookupPairedAccessoryServerWithDeviceID:(id)a0;
- (void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(id)a0;
- (void)retrieveLocalPairingIdentityForDeviceID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)currentIdentity;
- (void)_updateArraysForDiscoveredAccessoryServer:(id)a0 paired:(BOOL)a1 lost:(id *)a2 existing:(id *)a3;
- (void)_beginOperation;
- (void)startConfirmingPairedAccessoryReachability;
- (void)initializeKeyBagIfNecessary;
- (void)storage:(id)a0 didRemoveKeyWithIdentifier:(id)a1;
- (void)coordinator:(id)a0 didCreatePairedAccessoryServer:(id)a1;
- (id)operationQueueForDeviceID:(id)a0;
- (void)coordinator:(id)a0 didCreateUnpairedAccessoryServer:(id)a1;
- (void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)a0;
- (void)handleCurrentNetworkChangedNotification:(id)a0;
- (void)_enqueueOperation:(id)a0;
- (void)removePublicKeyForAccessoryWithID:(id)a0 completion:(id /* block */)a1;
- (void)savePublicKey:(id)a0 forAccessoryWithID:(id)a1 completion:(id /* block */)a2;
- (void)accessoryServerDidUpdateConnectionState:(id)a0;

@end
