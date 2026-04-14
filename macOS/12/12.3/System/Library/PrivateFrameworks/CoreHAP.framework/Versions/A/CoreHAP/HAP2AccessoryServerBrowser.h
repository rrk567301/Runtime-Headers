@class HAP2SerializedOperationQueue, NSArray, NSString, HAP2PropertyLock, NSOperationQueue, NSMutableArray, HAP2AccessoryServerBrowserOperation, NSMapTable;
@protocol HAP2AccessoryServerBrowserDelegate, HAP2Storage;

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject <HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser>

@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (readonly, nonatomic) NSArray *coordinatorInfo;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *workQueue;
@property (retain, nonatomic) NSMutableArray *liveUnpairedAccessoryServers;
@property (retain, nonatomic) NSMutableArray *livePairedAccessoryServers;
@property (readonly, nonatomic) NSMapTable *weakOperationQueuesByDeviceID;
@property (readonly, nonatomic) NSMutableArray *browserOperationQueue;
@property (readonly, nonatomic) HAP2AccessoryServerBrowserOperation *currentOperation;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (nonatomic, getter=isConfirming) BOOL confirming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HAP2Storage> storage;
@property (weak, nonatomic) id<HAP2AccessoryServerBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *unpairedAccessoryServers;
@property (readonly, copy, nonatomic) NSArray *pairedAccessoryServers;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)_beginOperation;
- (id)currentIdentity;
- (void)_enqueueOperation:(id)a0;
- (void)_startDiscovering;
- (void)_stopDiscovering;
- (void)startDiscovering;
- (void)stopDiscovering;
- (void)coordinator:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void)coordinator:(id)a0 didStopDiscoveringWithError:(id)a1;
- (void)accessoryWithDeviceIDIsPaired:(id)a0 completion:(id /* block */)a1;
- (id)operationQueueForDeviceID:(id)a0;
- (void)coordinator:(id)a0 didLoseAccessory:(id)a1 error:(id)a2;
- (void)coordinator:(id)a0 didCreateUnpairedAccessoryServer:(id)a1;
- (void)coordinator:(id)a0 didCreatePairedAccessoryServer:(id)a1;
- (void)initializeKeyBagIfNecessary;
- (void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(id)a0;
- (BOOL)shouldRetryPVDueToAuthenticationError:(id)a0;
- (void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(id)a0;
- (void)startConfirmingPairedAccessoryReachability;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)savePublicKey:(id)a0 forAccessoryWithID:(id)a1 completion:(id /* block */)a2;
- (void)removePublicKeyForAccessoryWithID:(id)a0 completion:(id /* block */)a1;
- (void)retrieveLocalPairingIdentityForDeviceID:(id)a0 completion:(id /* block */)a1;
- (void)accessoryServerDidUpdateConnectionState:(id)a0;
- (void)handleCurrentNetworkChangedNotification:(id)a0;
- (id)_removeAccessoryServerFromArray:(id)a0 withDeviceID:(id)a1;
- (void)_finishOperation;
- (void)_finishStartDiscovering;
- (void)_finishStopDiscovering;
- (void)_updateArraysForDiscoveredAccessoryServer:(id)a0 paired:(BOOL)a1 lost:(id *)a2 existing:(id *)a3;
- (id)_lookupPairedAccessoryServerWithDeviceID:(id)a0;
- (void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)a0;
- (BOOL)onDemandConnectionsAreEnabled;
- (void)storage:(id)a0 didRemoveKeyWithIdentifier:(id)a1;
- (void)storage:(id)a0 didSaveKeyWithIdentifier:(id)a1;
- (id)initWithCoordinators:(id)a0 storage:(id)a1;

@end
