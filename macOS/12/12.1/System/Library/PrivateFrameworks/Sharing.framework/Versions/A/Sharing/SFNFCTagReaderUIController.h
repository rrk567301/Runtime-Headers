@class CUXPCAgent, NSString, NSXPCConnection, CUXPCAgentConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SFNFCTagReaderUIController : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    long long _nfcTagScanCount;
    BOOL _nfcTagScanPending;
    CUXPCAgent *_xpcAgent;
    NSXPCConnection *_xpcCnx;
    CUXPCAgentConnection *_xpcUICnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *purpose;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidated;
- (void)_interrupted;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_ensureXPCStarted;
- (void)uiActivatedWithCompletion:(id /* block */)a0;
- (void)uiInvalidatedWithCompletion:(id /* block */)a0;
- (void)nfcTagScannedCount:(long long)a0;
- (void)_nfcTagScannedCount;
- (void)nfcTagScanned;

@end
