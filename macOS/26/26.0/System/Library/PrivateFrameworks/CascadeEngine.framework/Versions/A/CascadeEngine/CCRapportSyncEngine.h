@class CCDataResourceReadAccess, NSString, CCRapportManager, NSUUID, CCRapportSyncSession, NSObject;
@protocol OS_dispatch_queue, CCDonateServiceProvider;

@interface CCRapportSyncEngine : NSObject <CCRapportManagerDelegate> {
    NSString *_personaIdentifier;
    CCRapportManager *_rapportManager;
    CCDataResourceReadAccess *_readAcccess;
    NSObject<CCDonateServiceProvider> *_donateServiceProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_siteSuffix;
    NSUUID *_localDeviceUUID;
    CCRapportSyncSession *_currentSession;
}

@property (retain, nonatomic) NSString *siteSuffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)protocolVersion;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 error:(id *)a1;
- (void)_activateSyncSessionWithReason:(unsigned char)a0 forInteractionType:(unsigned char)a1 activationHandler:(id /* block */)a2 sessionCompletionHandler:(id /* block */)a3;
- (void)_deactivateSession;
- (void)_failToActivateSessionWithError:(id)a0 activationHandler:(id /* block */)a1 sessionCompletionHandler:(id /* block */)a2;
- (void)activateClientWithReason:(unsigned char)a0 activity:(id)a1 completionHandler:(id /* block */)a2;
- (void)activateServerWithReason:(unsigned char)a0 activationHandler:(id /* block */)a1;
- (void)addOmittedSetsFromSetDiscovery:(id)a0 forInteraction:(id)a1;
- (id)buildBasePeerToPeerMessageForInteraction:(id)a0;
- (id)buildDoneFetchingMergeableDeltasMessageForInteraction:(id)a0;
- (void)continueAfterHandlingAllSetsToSyncForInteraction:(id)a0;
- (void)continueToDiscoverSetsToSyncForInteraction:(id)a0;
- (void)continueToHandleNextSetToSyncAtIndex:(unsigned long long)a0 forInteraction:(id)a1;
- (BOOL)currentPlatformHasSetsSupportingSync:(id *)a0;
- (unsigned char)determineSyncOperationForDiscoveredSet:(id)a0 forInteraction:(id)a1 outFetchRequest:(id *)a2;
- (id /* block */)doneFetchingMergeableDeltasRequestHandler;
- (void)expireDevice:(id)a0 fromSet:(id)a1;
- (id /* block */)fetchMergeableDeltasRequestHandler;
- (void)handleIncomingMergeableDeltaFileTransfer:(id)a0 fromDevice:(id)a1;
- (id)initWithQueue:(id)a0 rapportManager:(id)a1 readAccess:(id)a2 donateServiceProvider:(id)a3 localDeviceUUID:(id)a4;
- (void)rapportManager:(id)a0 didDiscoverCCRapportDevice:(id)a1;
- (void)rapportManager:(id)a0 didLoseNearbyCCRapportDevice:(id)a1;
- (BOOL)rapportManager:(id)a0 isDeviceSupported:(id)a1;
- (void)rapportManager:(id)a0 localDeviceUpdated:(id)a1;
- (void)rapportManagerDiscoveryTimedOut:(id)a0;
- (id)readSetForDiscovery:(id)a0 senderDeviceUUID:(id)a1;
- (void)recordDiscoveredSetResources:(id)a0 forInteraction:(id)a1;
- (void)sendDoneFetchingMergeableDeltasRequest:(id)a0 forInteraction:(id)a1;
- (void)sendFetchMergeableDeltasRequest:(id)a0 forInteraction:(id)a1 continueSync:(id /* block */)a2;
- (void)sendSetDiscoveryRequest:(id)a0 forInteraction:(id)a1 continueSync:(id /* block */)a2;
- (id /* block */)setDiscoveryRequestHandler;
- (id)setIdentifiersSupportingInboundSync;
- (id)setIdentifiersSupportingOutboundSync;
- (id)setUUIDsSupportingInboundSync;
- (id)setUUIDsSupportingOutboundSync;
- (unsigned long long)syncErrorCodeFromReadAccessError:(id)a0;
- (unsigned char)syncOperationForDiscoveredSet:(id)a0 withDevice:(id)a1 versionedMergeable:(id)a2 readAccessError:(id)a3;
- (id)validateInRequest:(id)a0 inOptions:(id)a1 inResponseHandler:(id /* block */)a2 createInteraction:(BOOL)a3 outPlatform:(long long *)a4;

@end
