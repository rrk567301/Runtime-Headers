@class NSString, IRPolicyManager, IRServiceLogPrefix, IRServiceStore, IRMiLoProvider, NSObject;
@protocol OS_dispatch_queue, IRServiceContainerDelegate;

@interface IRServiceContainer : NSObject <IRPolicyManagerDelegate, IRServiceHandling, IRDeallocSync>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (weak, nonatomic) id<IRServiceContainerDelegate> delegate;
@property (retain, nonatomic) IRPolicyManager *policyManager;
@property (retain, nonatomic) IRServiceStore *serviceStore;
@property (retain, nonatomic) IRMiLoProvider *miloProvider;
@property (retain, nonatomic) IRServiceLogPrefix *serviceLogPrefix;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createServiceWithClientIdentifier:(id)a0 serviceIdentifier:(id)a1 parameters:(id)a2 persistenceManager:(id)a3;
+ (BOOL)deleteDatabaseWithPersistenceManager:(id)a0;
+ (void)deleteServiceWithToken:(id)a0 persistenceManager:(id)a1;
+ (id)exportDatabaseWithPersistenceManager:(id)a0;
+ (id)getServiceTokensForClientIdentifier:(id)a0 persistenceManager:(id)a1;
+ (id)getServicesWithPersistenceManager:(id)a0;

- (void)run;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateCandidates:(id)a0;
- (void)clearStatistics;
- (void)setUpdateMode:(long long)a0;
- (void)addEvent:(id)a0 forCandidate:(id)a1;
- (void)deleteCandidate:(id)a0;
- (void)donateEvent:(id)a0 forSuggestionTarget:(id)a1;
- (id)requestCurrentContextWithBundleID:(id)a0;
- (void)_refreshServiceWithDate:(id)a0;
- (void)dbCleanup;
- (void)deallocSync;
- (id)getStatistics;
- (long long)getUpdateMode;
- (id)initWithServiceIdentifier:(id)a0 delegate:(id)a1 avOutputDeviceProvider:(id)a2 biomeProvider:(id)a3 rapportProvider:(id)a4 proximityProvider:(id)a5 persistenceManager:(id)a6 displayMonitor:(id)a7 audioAVOutputContextController:(id)a8 homekitManager:(id)a9 timerProvider:(id)a10 isLowLatencyMiLo:(BOOL)a11;
- (void)policyManager:(id)a0 didSpotOnLocationCompleteForClientIds:(id)a1 withError:(id)a2;
- (void)policyManager:(id)a0 didUpdateBundlesWithSignificantInteractionPattern:(id)a1;
- (void)policyManager:(id)a0 didUpdateContexts:(id)a1 withReason:(id)a2;
- (id)requestCurrentContextWithTargets:(id)a0;
- (void)requestUpdatedBundlesWithSignificantInteraction;
- (void)restartLowLatencyMiLo:(BOOL)a0;
- (void)setSpotOnLocationWithParameters:(id)a0 andClientID:(id)a1;

@end
