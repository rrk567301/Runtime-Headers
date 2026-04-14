@class NSArray, NSDictionary, COEndpointMonitor, NSString, NSUserDefaults;

@interface COStateService : COService <COStateAddOnDelegate, COEndpointMonitorDelegate, COStateManagerServiceInterface>

@property (copy, nonatomic) NSDictionary *connectedClients;
@property (readonly, nonatomic) NSUserDefaults *SoundBoardDefaults;
@property (copy, nonatomic) NSArray *mediaObservers;
@property (copy, nonatomic) COEndpointMonitor *endpointMonitor;
@property (nonatomic) double doorbellDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithDelegate:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)isMediaSystemLeader:(id /* block */)a0;
- (void)registerForMediaSystemLeaderChange;
- (void)unregisterForMediaSystemLeaderChange;
- (void)requestCompositionForCluster:(id)a0 withCallback:(id /* block */)a1;
- (void)addObserverWithPredicate:(id)a0 suite:(id)a1 interestClusters:(id)a2;
- (void)removeObserverWithPredicate:(id)a0;
- (void)setDictionary:(id)a0 suite:(id)a1 interestClusters:(id)a2 targetCluster:(id)a3 withCallback:(id /* block */)a4;
- (void)removeKeyPaths:(id)a0 targetClusters:(id)a1 withCallback:(id /* block */)a2;
- (void)doorbellDelayWithCallback:(id /* block */)a0;
- (BOOL)isMediaSystemLeader;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (void)_clientLost:(id)a0;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (void)addOn:(id)a0 receivedUpdates:(id)a1 removals:(id)a2;
- (void)stateForAddOn:(id)a0 withCallback:(id /* block */)a1;
- (void)endpointAvailableInHomeChanged:(BOOL)a0;
- (void)_addOnAdded:(id)a0;
- (void)_addOnRemoved:(id)a0;
- (BOOL)_canRequestCreationOfCluster:(id)a0;
- (void)_checkinClientWithSuite:(id)a0 clusters:(id)a1;
- (void)_informClientsOfUpdates:(id)a0 removals:(id)a1 inCluster:(id)a2;
- (id)_stateSetByClientsForSuite:(id)a0 cluster:(id)a1;
- (void)_setIsWriting:(BOOL)a0 forClient:(id)a1;
- (void)_cleanupDisconnectedClient:(id)a0;

@end
