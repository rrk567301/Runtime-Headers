@class NSMutableDictionary, NSString, NSURL, RPCompanionLinkClient, NSObject;
@protocol BMAccessAssertion, OS_dispatch_source, OS_dispatch_queue, CCRapportManagerDelegate;

@interface CCRapportManager : NSObject {
    RPCompanionLinkClient *_discoveryClient;
    unsigned long long _discoveryClientState;
    NSString *_personaIdentifier;
    NSMutableDictionary *_devices;
    NSMutableDictionary *_unsupportedDevices;
    BOOL _sharedUse;
    NSObject<OS_dispatch_source> *_sigtermSource;
    id<BMAccessAssertion> _fileTransferAccessAssertion;
}

@property (retain, nonatomic) NSMutableDictionary *registeredRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fileTransferQueue;
@property (retain, nonatomic) NSURL *fileTransferDirectory;
@property (readonly, nonatomic) NSMutableDictionary *fileTransferSessions;
@property (weak, nonatomic) id<CCRapportManagerDelegate> delegate;

- (id)discoveredDevices;
- (void)stop;
- (id)localDevice;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (id)deviceWithIdentifier:(id)a0;
- (void)didDiscoverDevice:(id)a0;
- (void)didLoseDevice:(id)a0;
- (void)activateDirectLinkToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)activateDiscoveryClientWithCompletion:(id /* block */)a0;
- (void)activateDiscoveryLinkWithCompletion:(id /* block */)a0;
- (BOOL)activateFileTransferSessions:(id *)a0;
- (id)buildFileTransferSessionWithTargetDeviceIdentifier:(id)a0;
- (void)closeAllFileTransferSessions;
- (void)closeFileTransferSessionWithDeviceIdentifier:(id)a0;
- (void)createDiscoveryClientIfNotExists;
- (void)createDiscoveryClientWithControlFlags:(unsigned long long)a0;
- (void)createSharedDiscoveryClientIfNotExists;
- (void)deleteDanglingFilesFromFileTransferDirectory;
- (void)deleteMergeableDeltaFileURL:(id)a0;
- (void)device:(id)a0 didChange:(unsigned int)a1;
- (void)finishedSendingRequestsToDevice:(id)a0;
- (void)handleActivationForDevice:(id)a0 error:(id)a1;
- (void)handleDiscoveryClientActivationOrError:(id)a0;
- (void)handleDiscoveryClientInvalidation;
- (void)handleInterruptionForDevice:(id)a0;
- (id)initWithQueue:(id)a0 forSharedUse:(BOOL)a1;
- (id)initiateFileTransferSesionBackToTargetDeviceWithIdentifier:(id)a0 withExchangedPeerPublicKey:(id)a1;
- (void)invalidateDirectLinkToDevice:(id)a0;
- (void)localDeviceUpdated:(id)a0;
- (void)registerForSigterm;
- (void)registerLocalDeviceUpdatedHandler:(id /* block */)a0;
- (void)registerRequestID:(id)a0 requestHandler:(id /* block */)a1;
- (void)sendEvent:(id)a0 event:(id)a1 toDevice:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendNextRequestToDevice:(id)a0;
- (void)sendRequest:(id)a0 request:(id)a1 device:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)sendRequest:(id)a0 request:(id)a1 toDevice:(id)a2 responseHandler:(id /* block */)a3;

@end
